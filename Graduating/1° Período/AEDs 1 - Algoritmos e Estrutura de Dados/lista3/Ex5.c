#include <stdio.h>
#include <stdlib.h>

void media(int n);

int main() {
    int n;

    printf("\n\n O programa ira ler a média de N alunos e exibira o seu conceito.");
    printf("\n\n Digite o valor de N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int n;
        printf("\n\n Digite o valor de n: ");
        scanf("%d", &n);

        media(n);
    }

    return 0;
}

void media(int n) {
    if (n >= 90){
        printf("\n A\n\n");
    }
    else if (n <= 89 && n >= 80) {
        printf("\n B\n\n");
    }
    else if (n <= 79 && n >= 70) {
        printf("\n C\n\n");
    }
    else if (n <= 69 && n >= 60) {
        printf("\n D\n\n");
    }
    else if (n <= 59 && n >= 40) {
        printf("\n E\n\n");
    }
    else { 
        printf("\n F\n\n");
    }
}