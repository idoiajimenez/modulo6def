/**
 * Implementación de un stack de enteros 
 * @file
 */

# ifndef STACK_H
# define STACK_H

/**
 * Índice del último elemento del stack
 */
extern int top;


 /**
 * Añade un elemento al stack
 */
void push(int);

/**
 * Saca el último elemento del stack
 */
int pop();
# endif