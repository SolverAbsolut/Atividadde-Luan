#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);

    area = base * altura;
    printf("A area do retangulo é: %.2f\n", area);

    return 0;
}

