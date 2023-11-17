#ifndef STACKS_H
#define STACKS_H

#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include  <stdlib.h>
#include <ctype.h>

extern int data;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;




/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;







void trim_ep(char *string);
void read_ep(char *buffer_ep);
char **read1_ep(char *buffer_ep);
size_t len_ep(stack_t *stack);
bool check_string_ep(char *string);
void end_ep(stack_t **stack);
void check_ep(stack_t **top_ep, char **arr_ep, bool error_ep,bool *mode_ep, unsigned int line_ep);
void nothing_ep(stack_t **stack, unsigned int line_number);
void print_all_ep(stack_t **stack, unsigned int line_number);
void push_top_ep(stack_t **stack, unsigned int line_number);
void print_top_ep(stack_t **stack, unsigned int line_number);
void pop_top_ep(stack_t **stack, unsigned int line_number);
void swap_data_ep(stack_t **stack, unsigned int line_number);
void add_data_ep(stack_t **stack, unsigned int line_number);
void sub_data_ep(stack_t **stack, unsigned int line_number);
void div_data_ep(stack_t **stack, unsigned int line_number);
void mul_data_ep(stack_t **stack, unsigned int line_number);
void mod_data_ep(stack_t **stack, unsigned int line_number);
void print_top_char_ep(stack_t **stack, unsigned int line_number);
void print_string_ep(stack_t **stack, unsigned int line_number);
void rotl_stack_ep(stack_t **stack, unsigned int line_number);
void rotr_stack_ep(stack_t **stack, unsigned int line_number);
void queue_mode_ep(stack_t **stack, unsigned int line_number);
void stack_mode_ep(stack_t **stack, unsigned int line_number);
void free_stack_ep(stack_t *top_ep);

#endif
