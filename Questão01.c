/*
	1. A imobiliária Imóbilis vende apenas terrenos retangulares.
	Faça um algoritmo para ler as dimensões de um terreno e depois exibir a área do terreno.
	
*/

#include <stdio.h>

void main()
{
    float lar, com, area;
    
    printf("Digite o comprimento: ");
    scanf("%f", &com);
    printf("Digite a lagura: ");
    scanf("%f", &lar);
    
    area = lar * com;
    
    printf("A area do terreno é igual a %2.f m", area);
    
}

