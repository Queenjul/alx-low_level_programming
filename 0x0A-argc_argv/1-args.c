#include <stdio.h>
#include <stdlib.h>
/**
 * main - write a program that print the number of arguments passed 
 * followed by a new line
 * @argc : number of command-line arguments
 * @argv : string of argumenst passed to main function
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
