/** 
 * Programa que comprueba si un número es un número de Armstrong.
 *
 * @file
 *
 */


# include <stdio.h>
# include "armstrong.h"


int main(){   
	int n;   
	printf("Introduce un número entero");   
	scanf("%d",&n);   
	if (is_armstrong_number(n))      
		printf("%d es un número de armstrong \U0001F60E \n", n);   
	else printf("%d no es un número de armstrong \U0001F622 \n", n);
	return 0;
}


