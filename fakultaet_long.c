#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {

  int zahl;
  long fakultaet;
  int loop;
  

// Einlesen des Paramters

zahl = atof(argv[1]);

//Operation
if(zahl < 0) 
{
printf("Für negative Zahlen ist die Fakultät nicht definiert!\n");
}
else if(zahl == 0)
{
printf("Die Fakultät %i von ist 1\n",zahl);
}
else{ 
fakultaet = 1;
for(loop=zahl; loop>=1; loop--) 
{
fakultaet *= loop; 
} 

printf("\nDie Fakultaet von %d ist %li\n", zahl , fakultaet);
printf("Anzahl der Bytes von zahl: %lu\n", sizeof(fakultaet)); 
}

//Ab Zahlen größer 20 funktioniert dieses Programm nicht mehr! Die Anzahl der Bytes hat sich von 4 auf 8 erhöht.

return  0;
}


