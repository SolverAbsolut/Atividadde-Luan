#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    
    soma = num1 + num2;
    printf("A soma é: %d\n", soma);
    
    return 0;
}

