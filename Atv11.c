#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float nota1, nota2, media_final;

    printf("Digite o primeiro nome do aluno: ");
    scanf("%s", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media_final = (nota1 + nota2) / 2.0;

    printf("\n--- Ficha do Aluno ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Media Final: %.2f\n", media_final);

    return 0;
}