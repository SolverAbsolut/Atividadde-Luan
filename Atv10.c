#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    
    if(b != 0) {
        printf("Divisao: %.2f\n", (float)a / b);
        printf("Resto da divisao: %d\n", a % b);
    } else {
        printf("Nao é possivel dividir por zero.\n");
    }

    return 0;
}

