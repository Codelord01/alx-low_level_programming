#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
/**
 * main - the main function for execution
 * @argc: stores the number of arguments
 * @argv: stores the arguments
 * Return: returns an integer 0
 **/

int main(int argc, char *argv[])
{
int sum;
int count;
int i;

count = 1;
sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (count < argc)
{
for (i = 0; argv[count][i] != '\0'; i++)
{
if (!(isdigit(argv[count][i])))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[count]);
count++;
}
printf("%d\n", sum);
return (0);

}
