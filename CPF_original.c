#include <stdio.h>

int main()
{
	
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11;
	int res1, res2, res3, res4, res5, res6, res7, res8, res9, res10;
	int resp1, resp2, resp3, resp4, resp5, resp6, resp7, resp8, resp9, resp10, resp11;
	int resul1, mod1, resul2, mod2, total1, total2;
	
	printf("Validador de CPF:\n");
	
	
	printf("*************************************\n\n\n");
	
	printf("Digite o numero de CPF (sem pontuacao, dando enter a cada numero.):\n\n");
	printf("\n");
	
	printf("1-");
	scanf("%d", &num1);
	
	printf("2-");
	scanf("%d", &num2);
	
	printf("3-");
	scanf("%d", &num3);
	
	printf("4-");
	scanf("%d", &num4);
	
	printf("5-");
	scanf("%d", &num5);
	
	printf("6-");
	scanf("%d", &num6);
	
	printf("7-");
	scanf("%d", &num7);
	
	printf("8-");
	scanf("%d", &num8);
	
	printf("9-");
	scanf("%d", &num9);
	
	printf("10-");
	scanf("%d", &num10);
	
	printf("11-");
	scanf("%d", &num11);
	printf("\n");
	
	printf("*************************************\n\n\n");


	// Verificador 1
		
	res1=num1*10;
	res2=num2*9;
	res3=num3*8;
	res4=num4*7;
	res5=num5*6;
	res6=num6*5;
	res7=num7*4;
	res8=num8*3;
	res9=num9*2;
	
	resul1=res1+res2+res3+res4+res5+res6+res7+res8+res9;
	
	mod1=resul1%11;
	
	if (mod1<2)
	{
		
		res10=0;
	
	}
	
	else
	{
	
		res10=11-mod1;
		
	}
	
	
	// Verificador 2
	
	resp1=num1*11;
	resp2=num2*10;
	resp3=num3*9;
	resp4=num4*8;
	resp5=num5*7;
	resp6=num6*6;
	resp7=num7*5;
	resp8=num8*4;
	resp9=num9*3;
	resp10=num10*2;
	
	resul2=resp1+resp2+resp3+resp4+resp5+resp6+resp7+resp8+resp9+resp10;
	
	mod2=resul2%11;
	
	if (mod2<2)
	{
		
		resp11=0;
	
	}
	
	else
	{
	
		resp11=11-mod2;
		
	}
	
	total1=res10+resp11;
	total2=num10+num11;
	
	
	if (total1==total2)
	{
		
			printf("Seu CPF e valido. \n\n");
		
	}
	
	else
	{
		
		printf("Seu CPF e invalido. \n\n");
		
	}
	
}
	
	
