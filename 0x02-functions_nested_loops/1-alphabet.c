#include "main.h"

/**
 * main -> This is the entry point of the code
 *
 * Return: success always 0
 */
int main(void){
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++ ){
		print_alphabet(alphabet);
	}
	_putchar('\n')
	
	return (0)
}
