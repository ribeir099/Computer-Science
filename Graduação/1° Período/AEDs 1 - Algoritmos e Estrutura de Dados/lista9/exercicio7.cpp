#include <iostream>

using namespace std;

class ContaCorrente {
    protected:
        float saldo = 0;
    public:
        float getSaldo() {
            return saldo;
        }
        void depositar(float quantia) {
            saldo += quantia;
        }
        void sacar(float quantia) {
            saldo -= (quantia + (0.5 * quantia));
        }
};

class ContaEspecial : public ContaCorrente{
    public:
        void sacar(float quantia) {
            saldo -= (quantia + (0.1 * quantia));
        }
};

int main() {
  ContaCorrente cc1;
  ContaEspecial ce1;

  cc1.depositar(1000);
  ce1.depositar(1000);

  cc1.sacar(100);
  ce1.sacar(100);

  cout << "\n A conta normal tem: " << cc1.getSaldo() << endl;
  cout << "\n A conta especial tem: " << ce1.getSaldo() << endl;

  return 0;
}
