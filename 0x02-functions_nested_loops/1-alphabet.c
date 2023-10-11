#include "main.h"


	/**
	 * print_alphabet - print all alphabet in lowercase
	 * folloed by new line
	 * Description:  function that prints the alphabet, in lowercase
	 * Return: void
	 */


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}
