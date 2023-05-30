#include "main.h"

/**
* print_strings - Entry point
* Description: to check if letter is uppercase
* @s: param
* Return: int
*/

int print_strings(char *s)
{
        char *z = "(null)";
        int i = 0;
        int n = 0;
        if (s == NULL)
                while (z[i])
                {
                        n += _putchar(z[i]);
                        i++;
                }
        else
                while (s[i])
                {
                        n += _putchar(s[i]);
                        i++;
                }
        return (n);
}
