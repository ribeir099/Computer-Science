#include <stdio.h>
#include <stdlib.h>

// Criando a struct para o registro das pessoas;
struct Registro {
    char nome;
    int diaAniversario;
    int mesAniversario;
};
typedef struct Registro pessoa;

// Função que imprimi o dia e o nome das pessoas do mes informado
void imprimiMes(pessoa registro[], int size, char mes[]){
    printf("\n\n %s:\n", mes);
    for (int i = 0; i < size; i++) {
        printf("\n %c dia: %d", registro[i].nome, registro[i].diaAniversario);
    }
}

// Função que separa todas as pessoas por mes de aniversario;
void separaMeses(pessoa registros[]) {
    int pessoas1 = 0, pessoas2 = 0, pessoas3 = 0, pessoas4 = 0, pessoas5 = 0, pessoas6 = 0, pessoas7 = 0, pessoas8 = 0, pessoas9 = 0, pessoas10 = 0, pessoas11 = 0, pessoas12 = 0;

    // Laço de repetição para contar quantas pessoas fazem aniverario em cada mês;
    for (int i = 1; i <= 40; i++) {
        pessoa registro = registros[i];
        switch (registro.mesAniversario)
        {
        case 1:
            pessoas1 ++;
            break;
        case 2:
            pessoas2 ++;
            break;
        case 3:
            pessoas3 ++;
            break;
        case 4:
            pessoas4 ++;
            break;
        case 5:
            pessoas5 ++;
            break;
        case 6:
            pessoas6 ++;
            break;
        case 7:
            pessoas7 ++;
            break;
        case 8:
            pessoas8 ++;
            break;
        case 9:
            pessoas9 ++;
            break;
        case 10:
            pessoas10 ++;
            break;
        case 11:
            pessoas11 ++;
            break;
        case 12:
            pessoas12 ++;
            break;
        default:
            break;
        }
    } 

    int pessoas1Size = pessoas1, pessoas2Size = pessoas2, pessoas3Size = pessoas3, pessoas4Size = pessoas4, pessoas5Size = pessoas5, pessoas6Size = pessoas6, pessoas7Size = pessoas7, pessoas8Size = pessoas8, pessoas9Size = pessoas9, pessoas10Size = pessoas10, pessoas11Size = pessoas11, pessoas12Size = pessoas12;

    pessoa pessoasJaneiro[pessoas1], pessoasFevereiro[pessoas2], pessoasMarco[pessoas3], pessoasAbril[pessoas4], pessoasMaio[pessoas5], pessoasJunho[pessoas6], pessoasJulho[pessoas7], pessoasAgosto[pessoas8], pessoasSetembro[pessoas9], pessoasOutubro[pessoas10], pessoasNovembro[pessoas11], pessoasDezembro[pessoas12];

    // Laço de repetição que junta as pessoas que fazem aniversario no mesmo mes em um array separado;
    for (int i = 1; i <= 40; i++) {
        pessoa registro = registros[i];
        switch (registro.mesAniversario)
        {
        case 1:
            pessoasJaneiro[pessoas1 - 1].diaAniversario = registros[i].diaAniversario;
            pessoasJaneiro[pessoas1 - 1].mesAniversario = registros[i].mesAniversario;
            pessoasJaneiro[pessoas1 - 1].nome = registros[i].nome;
            pessoas1 --;
            break;
        case 2:
            pessoasFevereiro[pessoas2 - 1].diaAniversario = registros[i].diaAniversario;
            pessoasFevereiro[pessoas2 - 1].mesAniversario = registros[i].mesAniversario;
            pessoasFevereiro[pessoas2 - 1].nome = registros[i].nome;
            pessoas2 --;
            break;
        case 3:
            pessoasMarco[pessoas3 - 1].diaAniversario = registros[i].diaAniversario;
            pessoasMarco[pessoas3 - 1].mesAniversario = registros[i].mesAniversario;
            pessoasMarco[pessoas3 - 1].nome = registros[i].nome;
            pessoas3 --;
            break;
        case 4:
            pessoasAbril[pessoas4 - 1].diaAniversario = registros[i].diaAniversario;
            pessoasAbril[pessoas4 - 1].mesAniversario = registros[i].mesAniversario;
            pessoasAbril[pessoas4 - 1].nome = registros[i].nome;
            pessoas4 --;
            break;
        case 5:
            pessoasMaio[pessoas5 - 1].diaAniversario = registros[i].diaAniversario;
            pessoasMaio[pessoas5 - 1].mesAniversario = registros[i].mesAniversario;
            pessoasMaio[pessoas5 - 1].nome = registros[i].nome;
            pessoas5 --;
            break;
        case 6:
            pessoasJunho[pessoas6 - 1].diaAniversario = registros[i].diaAniversario;
            pessoasJunho[pessoas6 - 1].mesAniversario = registros[i].mesAniversario;
            pessoasJunho[pessoas6 - 1].nome = registros[i].nome;
            pessoas6 --;
            break;
        case 7:
            pessoasJulho[pessoas7 - 1].diaAniversario = registros[i].diaAniversario;
            pessoasJulho[pessoas7 - 1].mesAniversario = registros[i].mesAniversario;
            pessoasJulho[pessoas7 - 1].nome = registros[i].nome;
            pessoas7 --;
            break;
        case 8:
            pessoasAgosto[pessoas8 - 1].diaAniversario = registros[i].diaAniversario;
            pessoasAgosto[pessoas8 - 1].mesAniversario = registros[i].mesAniversario;
            pessoasAgosto[pessoas8 - 1].nome = registros[i].nome;
            pessoas8 --;
            break;
        case 9:
            pessoasSetembro[pessoas9 - 1].diaAniversario = registros[i].diaAniversario;
            pessoasSetembro[pessoas9 - 1].mesAniversario = registros[i].mesAniversario;
            pessoasSetembro[pessoas9 - 1].nome = registros[i].nome;
            pessoas9 --;
            break;
        case 10:
            pessoasOutubro[pessoas10 - 1].diaAniversario = registros[i].diaAniversario;
            pessoasOutubro[pessoas10 - 1].mesAniversario = registros[i].mesAniversario;
            pessoasOutubro[pessoas10 - 1].nome = registros[i].nome;
            pessoas10 --;
            break;
        case 11:
            pessoasNovembro[pessoas11 - 1].diaAniversario = registros[i].diaAniversario;
            pessoasNovembro[pessoas11 - 1].mesAniversario = registros[i].mesAniversario;
            pessoasNovembro[pessoas11 - 1].nome = registros[i].nome;
            pessoas11 --;
            break;
        case 12:
            pessoasDezembro[pessoas12 - 1].diaAniversario = registros[i].diaAniversario;
            pessoasDezembro[pessoas12 - 1].mesAniversario = registros[i].mesAniversario;
            pessoasDezembro[pessoas12 - 1].nome = registros[i].nome;
            pessoas12 --;
            break;
        default:
            break;
        }
    }

    // Imprimindo os aniversarios;
    imprimiMes(pessoasJaneiro, pessoas1Size, "Janeiro");
    imprimiMes(pessoasFevereiro, pessoas2Size, "Fevereiro");
    imprimiMes(pessoasMarco, pessoas3Size, "Marco");
    imprimiMes(pessoasAbril, pessoas4Size, "Abril");
    imprimiMes(pessoasMaio, pessoas5Size, "Maio");
    imprimiMes(pessoasJunho, pessoas6Size, "Junho");
    imprimiMes(pessoasJulho, pessoas7Size, "Julho");
    imprimiMes(pessoasAgosto, pessoas8Size, "Agosto");
    imprimiMes(pessoasSetembro, pessoas9Size, "Setembro");
    imprimiMes(pessoasOutubro, pessoas10Size, "Outubro");
    imprimiMes(pessoasNovembro, pessoas11Size, "Novembro");
    imprimiMes(pessoasDezembro, pessoas12Size, "Dezembro");
}

// Funçao que cria as pessoas;
void criaPessoas() {
    pessoa registros[40];
    int dias = 30, meses = 12;
    for (int i = 0; i < 40; i++) {
        registros[i].nome = (50 + i);
        registros[i].diaAniversario = dias;
        registros[i].mesAniversario = meses;
        if (dias <= 1) dias = 28;
        dias --;
        if (meses <= 1) meses = 12;
        meses --;
    }
    separaMeses(registros);
}

int main() {

    criaPessoas();

    return 0;
}