/**
 * Funciones relacionadas con los números de Armstrong 
 * @file
 */

# ifndef ARMSTRONG_H
# define ARMSTRONG_H
# include <math.h>
# include "stack.h"

/**
 * Verifica si un número es de Armstrong o no
 *
 * @param numb El número que queremos comprobar
 *
 * @return int 0 si es de Armstrong y 1 si no lo es
 */
int is_armstrong_number(int numb);

# endif