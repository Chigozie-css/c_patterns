#include <stdio.h>

int main(void)
{
   int a, b;

   for (a = 1; a <= 5; a++)
   {
      for (b = 1; b <= 6; b++)
      {
      printf("%c ", a+64);
      }
      printf("\n");
   }
}