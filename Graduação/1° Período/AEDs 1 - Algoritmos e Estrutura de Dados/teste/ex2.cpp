#include <iostream>

using namespace std;

class Pessoa{
    protected:
        string nome;
        string sobrenome;
    public:
        Pessoa(string n, string s){
            nome = n;
            sobrenome = s;
        };
        string getNomeCompleto(){
            return nome + " " + sobrenome;
        }
};

class Funcionario : public Pessoa{
    protected:
        int matricula;
        double salario;
    public:
        Funcionario(string no, string so, int ma, double sa) : Pessoa(no, so){
            matricula = ma;
            if(sa > 0) salario = sa;
        }
        double getSalarioPrimeiraParcela(){
            return salario * 0.6;
        }
        double getSalarioSegundaParcela(){
            return salario * 0.4;
        }
};

class Professor : public Funcionario{
    public:
        Professor(string no, string so, int ma, double sa) : Funcionario(no, so, ma, sa){};
        double getSalarioPrimeiraParcela(){
            return salario;
        }
        double getSalarioSegundaParcela(){
            return 0;
        }
};

int main() {
    Pessoa pe1("Fulano", "Ano");
    Funcionario f1("Beltrano", "Ano", 123678, 5000);
    Professor pr1("Ciclano", "Ano", 198765, 3456.76);

    cout << "\n Pessoa: " << pe1.getNomeCompleto() << endl;

    cout << "\n Pessoa: " << f1.getNomeCompleto() << ",\n Primeira parcela: " << f1.getSalarioPrimeiraParcela() << ",\n Segunda parcela: " << f1.getSalarioSegundaParcela() << endl;
    cout << "\n Pessoa: " << pr1.getNomeCompleto() << ",\n Primeira parcela: " << pr1.getSalarioPrimeiraParcela() << ",\n Segunda parcela: " << pr1.getSalarioSegundaParcela() << endl;

    
    return 0;
}
