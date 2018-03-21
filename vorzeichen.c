
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv) 
{
  float x = 1;
  x = atof(argv[1]);

if (x > 0) 
{    printf("x ist possitv 0!\n");
}
else if (x < 0) {
   printf("x ist negativ 0!\n");
}
else 
{   printf("x ist = 0!\n");
}
  return 0;
}
