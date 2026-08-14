#include <stdio.h>

int main() {
    float valor_hora, salario;
    float horas_trabalhadas;

    printf("Digite o valor da hora: ");
    scanf("%f", &valor_hora);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    salario = valor_hora * horas_trabalhadas;
    printf("O salario total é: %.2f\n", salario);

    return 0;
}

