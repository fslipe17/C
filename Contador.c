#include <stdio.h>

// Luiz Felipe da Silva

int main() {
    // V1
    
    // int num = 1;
    
    // while(num <= 10){
    //     printf("Numero: %d \n", num);
    //     num = num + 1;
    // }
    
    // V2) usuário escolhe até qual numero deve mostrar na tela.
    
    // int num = 1;
    // int numero;
    
    // printf("Digite um numero para começar a contagem: ");
    // scanf("%d", &numero);
    
    // while(num <= numero){
    //     printf("Numero: %d \n", num);
    //     num = num + 1;
    // }
    
    //V3) usuário determina numero inicial e final da exibição.
    
    // int num = 1;
    // int numero;
    // int numero2;
    
    // printf("Digite um numero para começar a contagem: ");
    // scanf("%d", &numero);
    
    // num = numero;
    
    // printf("Digite um numero para terminar a contagem: ");
    // scanf("%d", &numero2);
    
    // while(num <= numero2){
    //     printf("Numero: %d \n", num);
    //     num = num + 1;
    // }
    
    //V4) o programa repete a execução enquanto o usuario decidir continuar repitindo
    
    // int numero = 1;
    // int numero2;
    // int decisao;
    
    // printf("Digite um numero para começar a contagem: ");
    // scanf("%d", &numero);
    
    // printf("Digite um numero para terminar a contagem: ");
    // scanf("%d", &numero2);
    
    // while(numero <= numero2){
    //     printf("Numero: %d \n", numero);
    //     numero = numero + 1;
    // }
    
    // decisao = 1;
        
    // while(decisao == 1){
    //     printf("Deseja continuar? Se Sim ( Digite: 1 ) Se Não ( Digite 2 )");
    //     scanf("%d", &decisao);
        
    //     if(decisao == 1){
    //         printf("Digite um numero para começar a contagem: ");
    //         scanf("%d", &numero);
            
    //         printf("Digite um numero para terminar a contagem: ");
    //         scanf("%d", &numero2);
            
    //         while(numero <= numero2){
    //             printf("Numero: %d \n", numero);
    //             numero = numero + 1;
    //         }
    //     } else if(decisao == 2){
    //         printf("Até breve..");
    //     }
    // }
    
    //V5) Se o usuario digitar o numero inicial maior que o final
    
    int numero = 1;
    int numero2;
    int decisao;
    
    printf("Digite um numero para começar a contagem: ");
    scanf("%d", &numero);
    
    printf("Digite um numero para terminar a contagem: ");
    scanf("%d", &numero2);
    
    while(numero <= numero2){
        printf("Numero: %d \n", numero);
        numero = numero + 1;
    }
    
    decisao = 1;
    
    do{
        printf("Deseja continuar? Se Sim ( Digite: 1 ) Se Não ( Digite 2 )");
        scanf("%d", &decisao);
        
        if(decisao == 1){
            printf("Digite um numero para começar a contagem: ");
            scanf("%d", &numero);
            
            printf("Digite um numero para terminar a contagem: ");
            scanf("%d", &numero2);
            
            while(numero <= numero2){
                printf("Numero: %d \n", numero);
                numero = numero + 1;
            }
        } else if(decisao == 2){
            printf("Até breve..");
        }
        
    }while(decisao == 1);

    return 0;
}
