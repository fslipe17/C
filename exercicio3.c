#include <stdio.h>
#include <stdlib.h>

int main(){
    // exercicio 1
    int valor1;
    int valor2;
    int result;

    printf("Digite um valor: ");
    scanf("%d", &valor1);

    printf("Digite outro valor: ");
    scanf("%d", &valor2);

    if(valor1 > valor2){
        result = valor1 - valor2;
        printf("O resultado da diferença entre os numeros %d, %d é: %d", valor1, valor2, result);
    } else if (valor2 > valor1){
        result = valor2 - valor1;
        printf("O resultado da diferença entre os numeros %d, %d é: %d", valor1, valor2, result);
    }

    // exercicio 2

    // int valorNota1;
    // int valorNota2;
    // int valorNota3;
    // int valorNota4;
    // int valorExame;
    // int media;
    // int mediaResult;
    // int mediaResult2;
    // int result;

    // printf("Digite a primeira nota do bimestre de 0 á 10: ");
    // scanf("%d", &valorNota1);
    
    // printf("%d", valorNota1);


    // printf("\nDigite a segunda nota do bimestre de 0 á 10: ");
    // scanf("%d", &valorNota2);
    
    // printf("%d", valorNota2);
    
    // printf("\nDigite a terceira nota do bimestre de 0 á 10: ");
    // scanf("%d", &valorNota3);
    
    // printf("%d", valorNota3);
    
    // printf("\nDigite a quarta nota do bimestre de 0 á 10: ");
    // scanf("%d", &valorNota4);
    
    // printf("%d", valorNota4);
    
    // printf("\nDigite quantas notas vc inseriu: ");
    // scanf("%d", &media);
    
    // mediaResult = valorNota1 + valorNota2 + valorNota3 + valorNota4;
    
    // printf("%d", mediaResult);
    
    // mediaResult2 = mediaResult / media;
    
    // if(mediaResult >= 7){
    //     printf("\nParabéns!! Você foi aprovado com uma media de %d", mediaResult2);
    // } else if(mediaResult < 7){
    //     printf("\nOpss. Sua média foi menor que o esperado, você ficou de recuperação com média de %d.", mediaResult2);
    //     printf("\nPor favor.. Digite a sua nota da sua recuperação: ");
    //     scanf("%d", &valorExame);
        
    //     if(valorExame >= 7){
    //         printf("\nParabéns!! Você foi aprovado com um pequeno atraso, mas sua nota foi %d", valorExame);
    //     } else if(valorExame < 7){
    //         printf("\nOpss. O resultado da sua prova foi menor que o esperado, Você reprovou!!");
    //     }
    // }

    //exercicio 3

    //float a;
    // float b;
    // float c;
    // float delta;
    // float x1;
    // float x2;

    // printf("Digite o valor de A: ");
    // scanf("%f", &a);

    // printf("Digite o valor de B: ");
    // scanf("%f", &b);

    // printf("Digite o valor de C: ");
    // scanf("%f", &c);

    
    // if (a == 0 ) {
    //     printf("\nA equacao nao é completa de segundo grau.\n");
    // } else if (b == 0){
    //     printf("\nA equacao nao é completa de segundo grau.\n");
    // } else if(c == 0){
    //     printf("\nA equacao nao é completa de segundo grau.\n");
    // }
    // else {
    //     // Calcula o delta
    //     delta = (b * b) - (4 * a * c);

    //     printf("\nDelta = %.2f\n", delta);

    //     // Delta menor que zero
    //     if (delta < 0) {
    //         printf("Delta menor que zero.\n");
    //         printf("Nao existem solucoes reais.\n");
    //     }

    //     // Delta igual a zero
    //     else if (delta == 0) {
    //         x1 = -b / (2 * a);

    //         printf("Delta igual a zero.\n");
    //         printf("Existe apenas uma solucao real.\n");
    //         printf("X = %.2f\n", x1);
    //     }

    //     // Delta maior que zero
    //     else {
    //         x1 = (-b + sqrt(delta)) / (2 * b);
    //         x2 = (-b - sqrt(delta)) / (2 * b);

    //         printf("Delta maior que zero.\n");
    //         printf("Existem duas solucoes reais diferentes.\n");
    //         printf("X1 = %.2f\n", x1);
    //         printf("X2 = %.2f\n", x2);
    //     }
    // }

    // exercicio 4

    // int a;
    // int b;
    // int c;
    // int ordem;
    
    // printf("Digite um valor: ");
    // scanf("%d", &a);
    
    // printf("\nDigite um valor: ");
    // scanf("%d", &b);

    // printf("\nDigite um valor: ");
    // scanf("%d", &c);
    
    // if (a <= b) {
    //     if (b <= c) {
    //         printf("%d %d %d", a, b, c);
    //     } else if (a <= c) {
    //         printf("%d %d %d", a, c, b);
    //     } else {
    //         printf("%d %d %d", c, a, b);
    //     }
    // } else {
    //     if (a <= c) {
    //         printf("%d %d %d", b, a, c);
    //     } else if (b <= c) {
    //         printf("%d %d %d", b, c, a);
    //     } else {
    //         printf("%d %d %d", c, b, a);
    //     }
    // }

    // exercicio 5

    // int a;
    // int b;
    // int c;
    // int d;
    // int apresentar;

    
    // printf("Digite um valor: ");
    // scanf("%d", &a);
    
    // printf("\nDigite um valor: ");
    // scanf("%d", &b);

    // printf("\nDigite um valor: ");
    // scanf("%d", &c);
    
    // printf("\nDigite um valor: ");
    // scanf("%d", &d);
    
    // printf("\nValores divisiveis por 2 e 3:\n");

    // if (a % 2 == 0) {
    //     printf("%d ", a);
    // } else if (a % 3 == 0) {
    //     printf("%d ", a);
    // }

    // if (b % 2 == 0) {
    //     printf("%d ", b);
    // } else if (b % 3 == 0) {
    //     printf("%d ", b);
    // }

    // if (c % 2 == 0) {
    //     printf("%d ", c);
    // } else if (c % 3 == 0) {
    //     printf("%d ", c);
    // }

    // if (d % 2 == 0) {
    //     printf("%d ", d);
    // } else if (d % 3 == 0) {
    //     printf("%d ", d);
    // }

    //exercicio 6

    
    
    return 0;

    
}
