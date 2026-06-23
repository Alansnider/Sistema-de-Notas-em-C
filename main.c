#include <stdio.h>

#define QTD_NOTAS 3

int main() {
    /*----ALAN----*/
    char nome[50];
    float notas[QTD_NOTAS];
    float soma = 0, media;
    int i;

    printf("=== SISTEMA DE NOTAS ===\n\n");

    printf("Nome do aluno: ");
    scanf(" %[^\n]", nome);

    for (i = 0; i < QTD_NOTAS; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / QTD_NOTAS;

    printf("\nAluno: %s\n", nome);
    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situacao: APROVADO\n");
    } else if (media >= 5.0) {
        printf("Situacao: RECUPERACAO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }

    return 0;
}
