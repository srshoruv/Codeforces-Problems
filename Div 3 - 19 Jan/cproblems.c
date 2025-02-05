/* Write a C program that can input a string
(white space included) and output the charaters
in reverse order*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    strrev(str);
    printf("%s\n", str);
}