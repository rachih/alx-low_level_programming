#include <unistd.h>

/**
* main - A program that prints a specific message to the standard error
* Return: 1 (error)
*/
int main(void)
{
const char *message =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 59);
return (1);
}
