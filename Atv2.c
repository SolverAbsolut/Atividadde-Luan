#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite o seu primeiro nome: ");
    scanf("%s", nome);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Olá, meu nome é %s e eu tenho %d anos.\n", nome, idade);
    return 0;
}

