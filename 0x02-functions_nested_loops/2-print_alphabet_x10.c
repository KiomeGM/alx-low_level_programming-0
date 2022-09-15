#include "main.h"

/**
 * print_alphabet_x10 - function prints the alphabet 10 times
 * @void: no parameters
 *
 * Description: utilises nested for loop
 * Return: does not return
 */
 void print_alphabet_x10(void)
 {
     char ch;
     int i;

     for (i = 1; i <= 10; i++)
     {
         for (chr = 'a'; ch <= 'z'; ch++)
         {
             putchar(ch)
         }
         putchar('\n')
     }
 }
