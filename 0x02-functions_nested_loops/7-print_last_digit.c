#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 * @n: The number for which the last digit is to be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit = n % 10; // Calculate the last digit

    // Ensure the last digit is positive
    if (last_digit < 0)
        last_digit = -last_digit;

    _putchar(last_digit + '0'); // Print the last digit as a character
    return last_digit; // Return the value of the last digit
}
