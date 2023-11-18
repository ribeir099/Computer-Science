import numpy as np

def sigmoid(x):
    return 1 / (1 + np.exp(-x))

def sigmoid_derivative(x):
    return x * (1 - x)

def initialize_weights(input_size, hidden_size, output_size):
    np.random.seed(42)
    weights_input_hidden = np.random.rand(input_size, hidden_size)
    weights_hidden_output = np.random.rand(hidden_size, output_size)
    return weights_input_hidden, weights_hidden_output

def forward_propagation(inputs, weights_input_hidden, weights_hidden_output):
    hidden_layer_input = np.dot(inputs, weights_input_hidden)
    hidden_layer_output = sigmoid(hidden_layer_input)

    output_layer_input = np.dot(hidden_layer_output, weights_hidden_output)
    output_layer_output = sigmoid(output_layer_input)

    return hidden_layer_output, output_layer_output

def backward_propagation(inputs, target, hidden_layer_output, output_layer_output, weights_hidden_output):
    output_error = target - output_layer_output
    output_delta = output_error * sigmoid_derivative(output_layer_output)

    hidden_error = output_delta.dot(weights_hidden_output.T)
    hidden_delta = hidden_error * sigmoid_derivative(hidden_layer_output)

    return output_delta, hidden_delta

def update_weights(inputs, hidden_layer_output, output_delta, hidden_delta, weights_input_hidden, weights_hidden_output, learning_rate):
    weights_hidden_output += hidden_layer_output.T.dot(output_delta) * learning_rate
    weights_input_hidden += inputs.T.dot(hidden_delta) * learning_rate

def train_neural_network(inputs, targets, input_size, hidden_size, output_size, epochs, learning_rate):
    weights_input_hidden, weights_hidden_output = initialize_weights(input_size, hidden_size, output_size)

    for epoch in range(epochs):
        total_error = 0
        for i in range(len(inputs)):
            input_data = np.array([inputs[i]])
            target_data = np.array([targets[i]])

            hidden_layer_output, output_layer_output = forward_propagation(input_data, weights_input_hidden, weights_hidden_output)
            output_delta, hidden_delta = backward_propagation(input_data, target_data, hidden_layer_output, output_layer_output, weights_hidden_output)

            update_weights(input_data, hidden_layer_output, output_delta, hidden_delta, weights_input_hidden, weights_hidden_output, learning_rate)

            total_error += np.mean(np.abs(output_delta))

        if epoch % 1000 == 0:
            print(f"Epoch {epoch}, Error: {total_error}")

    print("Training complete.")

    return weights_input_hidden, weights_hidden_output

def test_neural_network(inputs, weights_input_hidden, weights_hidden_output):
    for i in range(len(inputs)):
        input_data = np.array([inputs[i]])
        _, output = forward_propagation(input_data, weights_input_hidden, weights_hidden_output)
        print(f"Input: {inputs[i]}, Predicted Output: {output}")

# Example usage for the AND function with 2 inputs
inputs = np.array([[0, 0], [0, 1], [1, 0], [1, 1]])
targets_and = np.array([[0], [0], [0], [1]])

input_size = 2
hidden_size = 4
output_size = 1
epochs = 10000
learning_rate = 0.1

weights_input_hidden, weights_hidden_output = train_neural_network(inputs, targets_and, input_size, hidden_size, output_size, epochs, learning_rate)

test_neural_network(inputs, weights_input_hidden, weights_hidden_output)
