#include <stdio.h>

int main()
{
	
	int num[10], res[9], resp[10];
	int resul1, mod1, resul2, mod2, total1, total2;
	
	printf("Validador de CPF:\n");
	
	
	printf("*************************************\n\n\n");
	
	printf("Digite o numero de CPF (sem pontuacao, dando enter a cada numero.):\n\n");
	printf("\n");
	
	printf("1-");
	scanf("%d", &num[0]);
	
	printf("2-");
	scanf("%d", &num[1]);
	
	printf("3-");
	scanf("%d", &num[2]);
	
	printf("4-");
	scanf("%d", &num[3]);
	
	printf("5-");
	scanf("%d", &num[4]);
	
	printf("6-");
	scanf("%d", &num[5]);
	
	printf("7-");
	scanf("%d", &num[6]);
	
	printf("8-");
	scanf("%d", &num[7]);
	
	printf("9-");
	scanf("%d", &num[8]);
	
	printf("10-");
	scanf("%d", &num[9]);
	
	printf("11-");
	scanf("%d", &num[10]);
	printf("\n");
	
	printf("*************************************\n\n\n");


	// Verificador 1
		
	res[0]=num[0]*10;
	res[1]=num[1]*9;
	res[2]=num[2]*8;
	res[3]=num[3]*7;
	res[4]=num[4]*6;
	res[5]=num[5]*5;
	res[6]=num[6]*4;
	res[7]=num[7]*3;
	res[8]=num[8]*2;
	
	resul1=res[0]+res[1]+res[2]+res[3]+res[4]+res[5]+res[6]+res[7]+res[8];
	
	mod1=resul1%11;
	
	if (mod1<2)
	{
		
		res[9]=0;
	
	}
	
	else
	{
	
		res[9]=11-mod1;
		
	}
	
	
	// Verificador 2
	
	resp[0]=num[0]*11;
	resp[1]=num[1]*10;
	resp[2]=num[2]*9;
	resp[3]=num[3]*8;
	resp[4]=num[4]*7;
	resp[5]=num[5]*6;
	resp[6]=num[6]*5;
	resp[7]=num[7]*4;
	resp[8]=num[8]*3;
	resp[9]=num[9]*2;
	
	resul2=resp[0]+resp[1]+resp[2]+resp[3]+resp[4]+resp[5]+resp[6]+resp[7]+resp[8]+resp[9];
	
	mod2=resul2%11;
	
	if (mod2<2)
	{
		
		resp[10]=0;
	
	}
	
	else
	{
	
		resp[10]=11-mod2;
		
	}
	
	total1=res[9]+resp[10];
	total2=num[9]+num[10];
	
	
	if (total1==total2)
	{
		
			printf("Seu CPF e valido. \n\n");
		
	}
	
	else
	{
		
		printf("Seu CPF e invalido. \n\n");
		
	}
	
}
	
