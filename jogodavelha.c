#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	char jogo[3][3];
	int i, j, p1 = 0, p2 = 0;
	
	printf("BEM VINDO AO JOGO DA VELHA\n\n");
	
	for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
				
				jogo[i][j] = '_';
				printf("%c ", jogo[i][j]);
				
				if (j == 2){
					puts("\n");
				}
				
			}
			
		}
	
	while(1){
		
		int cont = 0;
		
		if (p1 == p2){
			
			printf("\nPlayer 1, qual linha deseja colocar o X? ");
			scanf("%d", &i);
		
			printf("\nPlayer 1, qual coluna deseja colocar o X? ");
			scanf("%d", &j);
			
			p1++;
			
			system("cls");
		}
		else {
			
			printf("\nPlayer 2, qual linha deseja colocar o O? ");
			scanf("%d", &i);
		
			printf("\nPlayer 2, qual coluna deseja colocar o O? ");
			scanf("%d", &j);
			
			p2++;
			
			system("cls");
		}
		
		if(jogo[i][j] == '_' && p1 > p2){
			
			jogo[i][j] = 'X';
			
			puts("\n");
			
			for (i = 0; i < 3; i++){
				for (j = 0; j < 3; j++){
					
					printf("%c ", jogo[i][j]);
					
					if(j == 2){
						puts("\n");
					}
					
				}
			}
			
			if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][02] == 'X' || jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' || jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X' || jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X' || jogo[2][0] == 'X' && jogo[1][1] == 'X' && jogo[0][2] == 'X' || jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' || jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' || jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
					
				printf("O JOGOADOR PLAYER 1 VENCEU, PARABÉNS!!\n");
				printf("\nGAME OVER\n\n");
				
				break;
						
			}
				
		}
		else if(jogo[i][j] == '_' && p1 == p2){

			jogo[i][j] = 'O';
			
			puts("\n");
			
			for (i = 0; i < 3; i++){
				for (j = 0; j < 3; j++){
					
					printf("%c ", jogo[i][j]);
					
					if(j == 2){
						puts("\n");
					}
				}
			}
			
			if(jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][02] == 'O' || jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O' || jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O' || jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O' || jogo[2][0] == 'O' && jogo[1][1] == 'O' && jogo[0][2] == 'O' || jogo[0][0] == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O' || jogo[0][1] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O' || jogo[0][2] == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O'){
					
				printf("O JOGOADOR PLAYER 2 VENCEU, PARABÉNS!!\n");
				printf("\nGAME OVER\n\n");
				
				break;
						
			}
			
		}
		else{
			puts("Essa posição já está ocupada, tente novamente.");
			
			if (p1 == p2){
				p2--;
			}
			else {
				p1--;
			}
			
		}
		
		for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
				if (jogo[i][j] != '_'){
					cont++;
				}
			}
		}
		
		if (cont == 9){
					printf("\nO JOOGO EMPATOU, DEU VELHA.\n");
					printf("\nGAME OVER\n\n");
					
					break;
				}
		
	}
	
	system("pause");
	
}
