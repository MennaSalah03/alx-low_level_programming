#ifndef CALC_H
#define CALC_H

/**
 * struct -struct op
 *
 * @op: the opperator as a string (not char for some reason)
 * @f: function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int, int b);
} op_t;

/*Prototypes*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
