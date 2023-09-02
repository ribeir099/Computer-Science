#include <iostream>

using namespace std;

class Pessoa{
  private:
    string nome;
    int idade;
    float altura;
  public:
    void setNome(string n){
      nome = n;
    }
    string getNome() {
      return nome;
    }

    void setIdade(int i){
      idade = i;
    }
    int getIdade() {
      return idade;
    }

    void setAltura(float a){
      altura = a;
    }
    float getAltura() {
      return altura;
    }

    void imprimeDados() {
      cout << " Pessoa: " << getNome() << "\n Idade: " << getIdade() << "\n Altura: " << getAltura() << "m\n";
    }
};

int main() {
  Pessoa p1;

  p1.setNome("Gabriel");
  p1.setIdade(18);
  p1.setAltura(1.75);
  p1.imprimeDados();

  return 0;
}
