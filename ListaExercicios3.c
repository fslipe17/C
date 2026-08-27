#include <stdio.h>
#include <stdlib.h>
                    //  ESTRUTURA CONDICIONAL E DE MULTIPLA ESCOLHA

// Nome: Luiz Felipe da Silva

int main(){
    
            // a) Efetuar leitura de dois valores numéricos inteiros e apresentar o resultado da diferença do maior valor pelo
            //     menor valor
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

    // b) Ler os valores de quatro notas escolares bimestrais de um aluno. Calcular a média aritmética desse aluno e
        // apresentar a mensagem "Aprovado" se a média obtida for maior ou igual a 7; caso contrário, o programa deve
        // solicitar a quinta nota (nota de exame) do aluno e calcular uma nova média aritmética entre a nota de exame e
        // a primeira média aritmética. Se o valor da nova média for maior ou igual a sete, apresentar a mensagem
        // "Aprovado em exame"; caso contrário, apresentar a mensagem "Reprovado". Informar também, após a
        // apresentação das mensagens, o valor da média obtida pelo aluno

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

    // c) Efetuar a leitura de três valores numéricos e processar o cálculo da equação completa de segundo grau,
        // utilizando a fórmula de Bhaskara (considerar para a solução do problema todas as possíveis condições para
        // delta: delta < 0 - não há solução real, delta > 0 - há duas soluções reais e diferentes e delta = 0 - há apenas
        // uma solução real). Lembre-se de que é completa a equação de segundo grau que possui todos os coeficientes
        // A, B e C diferentes de zero. O programa deve apresentar respostas para todas as condições estabelecidas para
        // delta.

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

    // d) Ler três valores inteiros e apresentar os valores lidos dispostos em ordem crescente.

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

    // e) Fazer a leitura de 4 valores numéricos inteiros. Apresentar apenas os valores que sejam divisíveis por 2 e 3.

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

    // f) Ler cinco valores numéricos inteiros, identificar e apresentar o maior e o menor valores informados.

    // int num1;
    // int num2;
    // int num3;
    // int num4;
    // int num5;
    // int maior, menor;

    // printf("Digite o primeiro valor: ");
    // scanf("%d", &num1);

    // printf("Digite o segundo valor: ");
    // scanf("%d", &num2);

    // printf("Digite o terceiro valor: ");
    // scanf("%d", &num3);

    // printf("Digite o quarto valor: ");
    // scanf("%d", &num4);

    // printf("Digite o quinto valor: ");
    // scanf("%d", &num5);
    
    // maior = num1;
    // menor = num1;
    
    // if(num2 > maior){
    //     maior = num2;
    // } else if(num3 > maior){
    //     maior = num3;
    // } else if(num4 > maior){
    //     maior = num4;
    // } else if(num5 > maior){
    //     maior = num5;
    // }
    
    // if(num2 < menor){
    //     menor = num2;
    // } else if(num3 < menor){
    //     menor = num3;
    // } else if(num4 < menor){
    //     menor = num4;
    // } else if(num5 < menor){
    //     menor = num5;
    // }
    
    // printf("\nTodos os numeros: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);

    // printf("Maior valor: %d\n", maior);
    // printf("Menor valor: %d\n", menor);
    
    // g) Ler um valor numérico inteiro, apresentar uma mensagem informando se o valor fornecido é par ou ímpar.

    // int num;
    
    // printf("Digite um valor inteiro: ");
    // scanf("%d", &num);
    
    // if(num % 2){
    //     printf("Este numero é impar");
    // } else if(num % 3){
    //     printf("Este numero é par");
    // }


    
    // h) Efetuar a leitura de um valor numérico inteiro que esteja na faixa de valores de 1 até 9. O programa deve
    // apresentar a mensagem "O valor está na faixa permitida", caso o valor informado esteja entre 1 e 9. Se o valor
    // estiver fora da faixa, o programa deve apresentar a mensagem "O valor está fora da faixa permitida".


    
    // i) Efetuar a leitura do sexo de uma pessoa e apresentar como saída uma das seguintes mensagens:
    // "Excelentíssimo Senhor,", caso seja informado o sexo masculino, ou " Excelentíssimo Senhora", caso seja
    // informado o sexo feminino. O programa deve, após a entrada do sexo, verificar primeiramente se o sexo
    // fornecido é realmente válido, ou seja, se é igual a "M" ou a "F". Não sendo essa condição verdadeira, o programa
    // deve apresentar a mensagem "Sexo informado inválido".


    
    // j) Efetuar a leitura de três valores inteiros desconhecidos, somar os valores fornecidos e apresentar o resultado
    // somente se for maior ou igual a 100.


    
    // k) Escreva um programa utilizando estruturas de múltipla escolha que imprima na tela o mês de acordo com o
    // número digitado pelo usuário. Exemplo: Se escolhido 2 irá imprimir Fevereiro.


        
    // l) Crie um algoritmo, utilizando estruturas de múltipla escolha, que imprima na tela o sexo (Masculino ou Feminino)
    // de uma pessoa. Utilize caracteres (M ou F) como entrada.
    // m) As taxas de natalidade e mortalidade representam indicadores de desenvolvimento humano que analisam tanto
    // o aumento da população quanto o seu declínio. Permitem analisar a dinâmica de uma população, segundo as
    // variáveis que as influenciam, como qualidade de vida, renda, nível de desenvolvimento do país ou unidade
    // federativa em questão. (Escola Kids, 2020).
    // Sabendo disto, faça um programa, utilizando estruturas de múltipla escolha, que solicite ao usuário qual cálculo
    // de taxa ele quer realizar. Utilize as fórmulas abaixo para o cálculo, sendo:


    
    // n) Uma escola fornece 5% de desconto para pagamento da mensalidade em dia. A escola ainda fornece, além
    // deste desconto, um desconto adicional de 50% na mensalidade para filhos de funcionários. Faça um programa
    // que receba os dados de matrícula, valor da mensalidade e se o pagamento foi feito em dia ou não. Após isto
    // calcule o programa deverá ler um código que identifique se o aluno é filho de funcionário (1) ou aluno comum
    // (2) e com base nisso, utilize uma estrutura de múltipla escolha para calcular o valor a ser pago na mensalidade

    
    
    return 0;

    
}
