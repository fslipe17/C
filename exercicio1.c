#include <stdio.h>
// #include <math.h>

int main() {
    // float dolar;

    // float calculo;

    // printf("Digite o valor a ser convertido de dolar para real: ");
    // scanf("%f",& dolar);

    // calculo = dolar * 5.16;

    // printf("O valor convertido é %.2f.", calculo);

    int num1;
    int num2;
    int num3;
    int num4;
    int soma;

    printf("Digite o valor de um numero para ser elevado ao quadrado: ");
    scanf("%d",& num1);

    printf("Digite o valor do segundo numero para ser elevado ao quadrado: ");
    scanf("%d",& num2);

    printf("Digite o valor do terceiro numero para ser elevado ao quadrado: ");
    scanf("%d",& num3);

    printf("Digite o valor do quarto numero para ser elevado ao quadrado: ");
    scanf("%d",& num4);

    soma = (num1 * num1) + (num2 * num2) + (num3 * num3) + (num4 * num4);

    printf("A soma dos numeros %d, %d, %d, %d ao quadrado é: %d", num1, num2, num3, num4, soma);

}
