#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int datanasc,anoatual,idade1,idade2;
	
	printf("\n Digite sua data de nascimento: ");
	scanf("%d", &datanasc);
	system ("CLS");
	printf("\n Digite o ano atual: ");
	scanf("%d", &anoatual);
	system("CLS");
	idade1 = anoatual - datanasc;
	idade2 = 2050 -  datanasc;
	printf ("\nSua idade e de: %d e em 2050 sua idade sera de: %d",idade1, idade2);
	system ("PAUSE");
	  return 0;
}
