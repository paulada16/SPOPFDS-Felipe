#include <stdio.h>//exemplo
int main()
{
   int AN, AT, PROX, CONT;
    	AT = 0;
    	PROX = 1;
    	CONT = 1;
PontoControle:    
    	if (CONT<16)
    	{
        	printf("%d\n", AT);
        	AN = AT;
        	AT = PROX;
        	PROX = AN+AT;
        	CONT= (CONT+1);
        	goto PontoControle;         	 
    	}
return 0;
}
