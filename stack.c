# include "stack.h"

//! Número máximo de elementos del stack
#define max 10

//! Índice de la último elemento del stack
int top=-1;

//! El stack...
int stack[max];

void push(int m){   
	top++;   
	stack[top]=m;
}

int pop(){   
	if(top==-1)
		return(top);   
	else   
	{      
		int j;   
		j=stack[top];      
		top--;      
		return(j);   
	}
}