#include <iostream>

using namespace std;

class Elevador {
private:
  int andar;
  int totalAndar;
  int capacidade;
  int pessoas;

public:
  Elevador(int c, int ta) {
    capacidade = c;
    totalAndar = ta;
    andar = 0;
    pessoas = 0;
  }

  int getCapacidade() {
    return capacidade;
  }

  int getTotalAndar() {
    return totalAndar;
  }

  void setAndar(int a) {
    andar = a;
  }
  int getAndar() {
    return andar;
  }

  void setPessoas(int p) {
    pessoas = p;
  }
  int getPessoas() {
    return pessoas;
  }

  void entra() {
    if (capacidade - pessoas == 0) {
      cout << "\n Elevador cheio" << endl;
    } else {
      pessoas ++;
    }
  }

  void sai() {
    if (pessoas == 0) {
      cout << "\n Elevador vazio" << endl;
    } else {
      pessoas --;
    }
  }

  void sobe() {
    if (andar ==  totalAndar) {
      cout << "\n O elevador ja esta no ultimo andar" << endl;
    } else {
      andar ++;
    }
  }

  void desce() {
    if (andar ==  0) {
      cout << "\n O elevador ja esta no terreo" << endl;
    } else {
      andar --;
    }
  }
};

int main() {
  Elevador e1(10, 20);

  int temp = 0;
  do {
    int opcao;

    cout << "\n Digite a opcao que deseja executar: ";
    cout << "\n 1- Entra.";
    cout << "\n 2- Sai.";
    cout << "\n 3- Sobe.";
    cout << "\n 4- Desce.";
    cout << "\n 5- Andar atual.";
    cout << "\n 6- Quantidade de pessoas no elevador";
    cout << "\n 7- Capacidade Total do elevador.";
    cout << "\n 8- Total de andares no predio.";
    cout << "\n 0- Finalizar programa.";
    cout << "\n Opcao: ";
    cin >> opcao;

    switch(opcao) {
      case 1:
        e1.entra();
        cout << "\n Entrou uma pessoas no elevador." << endl;
        break;
      case 2:
        e1.sai();
        cout << "\n Saiu uma pessoas do elevador." << endl;
        break;
      case 3:
        e1.sobe();
        cout << "\n O elevador subiu um andar." << endl;
        break;
      case 4:
        e1.desce();
        cout << "\n O elevador desceu um andar." << endl;
        break;
      case 5:
        cout << "\n O elevador esta no " << e1.getAndar() << " andar." << endl;
        break;
      case 6:
        cout << "\n O elevador esta com " << e1.getPessoas() << " pessoas."<< endl;
        break;
      case 7:
        cout << "\n A capacidade total do elevador e de " << e1.getCapacidade() << " pessoas."<< endl;
        break;
      case 8:
        cout << "\n O predio possui " << e1.getTotalAndar() << " andares."<< endl;
        break;
      case 0:
        cout << "\n Obrigado por utilizar esse programa :) ;" << endl;
        temp = 1;
        break;
      default:
        cout << "\n Opcao invalida, tente novamente." << endl;
        break;
    }
  } while(temp == 0);

  return 0;
}
