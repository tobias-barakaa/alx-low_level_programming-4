#include "holberton.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 */
int main(void)
{
int num;

srand(time(0));
num = (rand() * 15 + 1);
printf("%i\n", num);
return (0);
}
