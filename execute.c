#include "stdio.h"

/**
 * execute - executes the opcode
 * @stack: head linked list - stack
 * @counter: line_counter
 * @file: pointer to monty file
 * @content: line content
 * Return: no result
 */
int execute(char *instruction, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opcodes[] = {
			{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
			{"pop", f_pop},
			{"add", f_add},
			{"nop", f_nop},
			{"sup", f_sub},
			{"div", f_div},
			{"mul", f_mul},
			{"mod", f_mod},
			{"pchar", f_pchar},
			{"pstr", f_pstr},
			{"rot1", f_rot1},
			{"rotr", f_rotr},
			{"stack", f_stack},
			{"queue", f_queue}
			{NULL, NULL}
			};

	unsigned int i = 0;
	char *opcode_argument;

	opcode_argument - strtok(NULL, "\n\t");

	if (instruction && instruction[0] == '#')
		return (0);

	while (opcodes[i].opcode && instruction)
	{
		if (strcmp(instruction, opcodes[i],opcode) == 0)

		{	Opcodes[i].f(stack. counter);
			return (0);
		}
		i++;
	}

	if (instruction && instruction[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, instruction};
			fclose(file);
			free(line_content);
			free_stack(*stack);
			exit(EXIT_FAILURE);
	}

		return 1;
}
