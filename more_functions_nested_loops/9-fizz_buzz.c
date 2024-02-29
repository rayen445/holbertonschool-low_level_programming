#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 1 to 100, replacing multiples of 3 with "Fizz",
 * multiples of 5 with "Buzz", and multiples of both 3 and 5 with "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i; // Counter for the loop

	// Loop through numbers from 1 to 100
	for (i = 1; i <= 100; i++)
	{
		// Check if the number is divisible by both 3 and 5
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz"); // Print "FizzBuzz" if divisible by both
		}
		// Check if the number is divisible by 3
		else if (i % 3 == 0)
		{
			printf("Fizz"); // Print "Fizz" if divisible by 3
		}
		// Check if the number is divisible by 5
		else if (i % 5 == 0)
		{
			printf("Buzz"); // Print "Buzz" if divisible by 5
		}
		else
		{
			printf("%d", i); // Print the number if not divisible by 3 or 5
		}

		// Add space after each number or word, except for the last one
		if (i != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n"); // Add newline after printing all numbers
		}
	}

	return (0);
}
