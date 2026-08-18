#include <stdio.h>
#include <stdlib.h>

int main(){
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

    system("pause");
    
    return 0;
}