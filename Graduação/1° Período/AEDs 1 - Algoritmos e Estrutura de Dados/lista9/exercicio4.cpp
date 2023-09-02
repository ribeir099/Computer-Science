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

class Funcionario : public Pessoa {
    private:
      float salario;
      string data;
    public:
      void setSalario(float s){
        salario = s;
      }
      float getSalario() {
        return salario;
      }

    void setData(string d){
      data = d;
    }
    string getData() {
      return data;
    }
};

class Cliente : public Pessoa {
    private:
      string endereco;
      string tempo;
    public:
      void setEndereco(string e){
        endereco = e;
     }
    string getEndereco() {
      return endereco;
    }

    void setTempo(string t){
      tempo = t;
    }
    string getTempo() {
      return tempo;
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
