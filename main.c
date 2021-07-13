#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int Classe, Forca, Destreza, Inteligencia, Vitalidade;
	char nome[10];
	
	printf ("\ninsira o nome no seu personagem:\n");
	gets (nome);
	printf ("o nome do personagem e %s", nome);
	
	printf("escolha a classe do personagem:\n");
	printf("1 para ladino\n");
	printf("2 para guerreiro\n");
	printf("3 para mago\n");
	scanf ("%d", &Classe);
	
	switch (Classe){
		case 1: 	printf ("voce escolheu ladino, atributos:\nforca %d, destreza %d, inteligencia %d, vitalidade %d", Forca = 6, Destreza = 14, Inteligencia = 10, Vitalidade = 8,"\n");
			break;
		case 2: 	printf ("voce escolheu guerreiro, atributos:\nforca %d, destreza %d, inteligencia %d, vitalidade %d", Forca = 14, Destreza = 6, Inteligencia = 6, Vitalidade = 12,"\n");
			break;
		case 3: 	printf ("voce escolheu mago, atributos:\nforca %d, destreza %d, inteligencia %d, vitalidade %d", Forca = 6, Destreza = 8, Inteligencia = 16, Vitalidade = 6,"\n");
			break;
		default: 	printf ("escolha uma opcao valida meu amigo\n"); break;

}


char aventura(){
	char direcao;
	
	printf("voce desembarcou de um barco e andou alguns metros, ate chegar em uma encruziliada vindo pelo Sul\n");	
	printf ("digite a direcao que deseja ir\n"	  	 );
	printf ("voce deseja ir para o leste digite L \n");
	printf ("voce deseja ir para o oeste digite O\n" );
	printf ("voce deseja ir para o sul digite S\n"   );
	printf ("voce deseja ir para o norte digite N\n" );
	
	scanf ("%c", &direcao);
	
	switch(direcao){
		case 'l': printf ("voce foi para o leste"); break;
		case 'o': printf ("voce foi para o oeste"); break;
		case 's': printf ("voce foi para o sul"); break;
		case 'n': printf ("voce foi para o norte"); break;
		default : printf ("digite uma das opcoes validas"); break;
	}
			
}
}

