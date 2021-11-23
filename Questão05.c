/*
	5. A padaria Hotpão vende certa quantidade de pães franceses e uma quantidade de broas a cada dia.
	Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas
	(juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado).
	Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de 
	broas, e depois calcular os dados solicitados.
	
*/

#include <stdio.h>

void main()
{
    int pao, broa;
    float calP, cal,t;
    
    printf("Quantidade de pães vendidos: ");
    scanf("%d", &pao);
    printf("Quantidade de broas vendidas: ");
    scanf("%d", &broa);
    
    cal = (pao * 0.12) + (broa * 1.5);
    calP = cal * 0.1;
    
    printf("Foi arrecadado R$ %.2f\n", cal);
    printf("Será guardado na poupança R$ %.2f",calP);
    
}

