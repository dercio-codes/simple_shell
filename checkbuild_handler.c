#include "header.h"

/**
 * checkbuild - checks if the command is a built-in
 * @args: array of arguments
 * Return: pointer to function that takes args and returns void
 */

void (*checkbuild(char **args))(char **args)
{
int i, j;

for (i = 0; builtins[i].name != NULL; i++)
{
j = 0;
while (builtins[i].name[j] == args[0][j])
{
if (builtins[i].name[j] == '\0' && args[0][j] == '\0')
return (builtins[i].func);
j++;
}
}
return (NULL);
}
