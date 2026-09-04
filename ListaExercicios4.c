#include <stdio.h>

// Luiz Felipe da Silva

int main()
{
    // int cont;
    
    // do{
    //     for(cont = 1; cont <= 5; cont = cont + 1){
    //         printf("%d", cont);
    //     }
    // } while(cont < 100);
    
    // a) Elaborar um programa que apresente os quadrados dos números inteiros existentes na faixa de valores de
    //     15 a 200.
    
    // int num;
    // int cont = 15;
    
    // for(num = 15; num <= 200; num++){
    //     printf("%d \n", num * num);
    // }
    
    // b) Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a qual deve ser
    // apresentada de acordo com sua forma tradicional. Ex.: 1x1 = 1 1x2 = 2
    
    // int numero = 1;
    // int multiplicado = 0;
    // int resultado;
    // int Break;
    
    // for(Break = 1; Break <= 10; Break = Break + 1){
    //     multiplicado = multiplicado + 1;
        
    //     resultado = numero * multiplicado;
        
    //     printf("%d x %d = %d \n", numero, multiplicado, resultado);
    // }
    
    // c) Construir um programa que apresente a soma dos cem primeiros números naturais: (1+2+3+
    // ...+98+99+100).
    
    // int numero = 0;
    // int multiplicado = 0;
    // int resultado;
    // int Break;
    
    // for(Break = 1; Break <= 100; Break = Break + 1){
    //     multiplicado = multiplicado + 1;
        
    //     resultado = numero + multiplicado;
        
    //     printf("%d \n", resultado);
    // }

    // d) Escrever um programa que apresente como resultado a potência de uma base qualquer elevada a um
    // expoente qualquer, ou seja, de BS^EX, em que BS é o valor da base e EX o valor do expoente. Considere
    // apenas a entrada de valores inteiros e positivos, ou seja, de valores naturais. Use a técnica de laço de
    // repetição, em que o valor da base deve ser multiplicado o número de vezes determinado no expoente.
    
    // int bs;
    // int ex;
    // int resultado = 1;

    // printf("Digite a base: ");
    // scanf("%d", &bs);

    // printf("Digite o expoente: ");
    // scanf("%d", &ex);

    // for (int i = 1; i <= ex; i++) {
    //     resultado = resultado * bs;
    // }

    // printf("%d^%d = %d\n", bs, ex, resultado);
    
    // e) Escrever um programa que apresente os valores da sequência numérica de Fibonacci até o décimo quinto
    // termo. A sequência de Fibonacci é formada por 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ... etc.,
    // obtendo-se o próximo termo a partir da soma do termo atual com o anterior sucessivamente até o infinito se
    // a sequência não for interrompida
    
    // int numAnterior = 0;
    // int numAtual = 1;
    // int proximo;
    // int cont;

    // for (cont = 1; cont <= 10000000000000000000000000000000; cont++) {
    //     printf("%d ", numAnterior);

    //     proximo = numAnterior + numAtual;
    //     numAnterior = numAtual;
    //     numAtual = proximo;
    // }
    
    // e.1 Permitir que o usuário escolha a quantidade
    
    int numAnterior = 0;
    int numAtual = 1;
    int proximo;
    int cont;

    for (cont = 1; cont <= 10000000000000000000000000000000; cont++) {
        printf("%d ", numAnterior);

        proximo = numAnterior + numAtual;
        numAnterior = numAtual;
        numAtual = proximo;
    }
    
    return 0;
}
