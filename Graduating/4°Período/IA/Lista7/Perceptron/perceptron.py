import numpy as np


class Perceptron:
    def __init__(self, num_inputs, learning_rate=0.01, epochs=1000):
        self.weights = np.random.rand(num_inputs + 1)
        self.learning_rate = learning_rate
        self.epochs = epochs

    def activate(self, sum):
        return 1 if sum >= 0 else 0

    def train(self, inputs, labels):
        for epoch in range(self.epochs):
            for i in range(len(inputs)):
                input_with_bias = np.insert(inputs[i], 0, 1)
                prediction = self.activate(np.dot(self.weights, input_with_bias))
                error = labels[i] - prediction
                self.weights += self.learning_rate * error * input_with_bias

    def predict(self, inputs):
        inputs_with_bias = np.insert(inputs, 0, 1)
        return self.activate(np.dot(self.weights, inputs_with_bias))


def test_perceptron(inputs, labels, perceptron, output_file):
    output_str = ""
    for i in range(len(inputs)):
        prediction = perceptron.predict(inputs[i])
        output_str += f"Entrada: {inputs[i]}, Saída do Perceptron: {prediction}, Rótulo: {labels[i]}\n"

    weights_str = f"Pesos: {perceptron.weights}\n"
    output_str += weights_str

    with open(output_file, "a") as file:
        file.write(output_str)


# Função para resolver a função AND ou OR com n entradas e escrever a saída em um arquivo
def solve_boolean_function(operation, num_inputs, output_file):
    # Gera entradas booleanas
    inputs = np.random.randint(2, size=(100, num_inputs))

    # Define as saídas para a operação AND ou OR
    if operation == "AND":
        labels = np.all(inputs, axis=1)
    elif operation == "OR":
        labels = np.any(inputs, axis=1)

    # Inicializa e treina o Perceptron
    perceptron = Perceptron(num_inputs)
    perceptron.train(inputs, labels)

    # Testa o Perceptron e escreve a saída em um arquivo
    output_str = f"\nTeste para operação {operation} com {num_inputs} entradas:\n"
    test_perceptron(inputs, labels, perceptron, output_file)


# Função para resolver a função XOR com duas entradas e retornar a saída como string
def solve_xor(output_file):
    inputs = np.array([[0, 0], [0, 1], [1, 0], [1, 1]])
    labels = np.array([0, 1, 1, 0])

    perceptron_xor = Perceptron(2)
    perceptron_xor.train(inputs, labels)

    output_str = "\nTeste para operação XOR com 2 entradas:\n"
    for i in range(len(inputs)):
        prediction = perceptron_xor.predict(inputs[i])
        output_str += f"Entrada: {inputs[i]}, Saída do Perceptron: {prediction}, Rótulo: {labels[i]}\n"

    weights_str = f"\nPesos: {perceptron_xor.weights}\n\n"
    output_str += weights_str

    with open(output_file, "a") as file:
        file.write(output_str)


# Nome do arquivo de saída
output_filename = "perceptron_output.txt"

# Resolve as funções AND e OR com diferentes números de entradas
for i in range(2, 11):
    solve_boolean_function("AND", i, output_filename)

for i in range(2, 11):
    solve_boolean_function("OR", i, output_filename)

# Resolve a função XOR e escreve a saída em um arquivo
solve_xor(output_filename)

print(f"Saida salva no arquivo: {output_filename}")

