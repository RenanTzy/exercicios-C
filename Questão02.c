/*
	2.Faça um programa que calcule e mostre a área de um trapézio.
	Sabe-se que: A = (base maior + base menor) * altura)/2
	
*/

#include <stdio.h>

void main()
{
    float baseM, basem, h, area;
    
    printf("Digite o valor da base maior: ");
    scanf("%f", &baseM);
    printf("Digite o valor da base menor: ");
    scanf("%f", &basem);
    printf("Digite o valor da base maior: ");
    scanf("%f", &h);
    
    area = (baseM + basem) * h / 2;
    
    printf("A area do trapezio é %.2f", area);
    
}


