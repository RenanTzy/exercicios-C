/*
	3.Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.
	
*/

#include <stdio.h>

void main()
{
    int x, cav;
    
    printf("Quantos cavalos foram comprados? ");
    scanf("%d", &cav);
    
    x = cav * 4;
    
    printf("Será necessarias %d ferraduras para equipar todos os %d cavalos.", x, cav);
    
}

