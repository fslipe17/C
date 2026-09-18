/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Bem-Vindo ao Programa !!\n");
    
	int rgm[5];
	float notas[5][3];

    int numAluno = 1;
    
    int cont = 0;
    
    int aluno = 0;
    
	for(cont = 0; cont < 5; cont++){
		printf("\nDigite o RGM do %d° aluno: \n", numAluno);
		scanf("%d", &rgm[cont]);
		
		printf("Digite Nota A1 do %d° aluno: \n", numAluno);
		scanf("%f", &notas[cont][0]);
		
		printf("Digite Nota A2 do %d° aluno: \n", numAluno);
		scanf("%f", &notas[cont][1]);
		
		numAluno++;
	}
	
	for(aluno = 0; aluno < 5; aluno++){
	    notas[aluno][2] = notas[aluno][0] + notas[aluno][1];
	}
	
	for(aluno = 0; aluno < 5; aluno++){
	    printf("\nRGM: %d \n", rgm[aluno]);
	    printf("Nota: %.1f \n", notas[aluno][0]);
	    printf("Nota: %.1f \n", notas[aluno][1]);
	    
	    if(notas[aluno][2] >= 6){
	        printf("Média: %.1f", notas[aluno][2]);
	        printf("vc passou");
	    }
	    
	    
	}
	
	return 0;
}
