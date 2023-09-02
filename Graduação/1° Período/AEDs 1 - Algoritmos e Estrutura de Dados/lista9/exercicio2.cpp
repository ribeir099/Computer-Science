#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
  int num;
  int temp = 1;

  // Laço de repetição para repetir até o usuário digitar um número positivo
  do {
    // Execução padrão do programa
    try{
      cout << "Digite o numero: ";
      cin >> num;
      // Veficicando se foi digitado um número negativo. Caso contrário é lançado uma exeção.
      if(num < 0){
      throw invalid_argument("So e aceito numeros positivos.\n");
      }
      temp = 0;
      // Execução após o "lançamento" de uma exceção do tipo invalid_argument.
    } catch (invalid_argument &e) {
      cout << e.what();
    }
  } while (temp == 1);

  return 0;
}