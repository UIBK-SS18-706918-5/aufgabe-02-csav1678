#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {

  int zahl;
  int fakultaet;
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
printf("Die Fakultät %i von ist 1\n");
}
else{ 
fakultaet = 1;
for(loop=zahl; loop>=1; loop--) 
{
fakultaet *= loop; 
} 

printf("\nDie Fakultaet von %d ist %i\n", zahl , fakultaet);
printf("Anzahl der Bytes von zahl: %i\n", sizeof(zahl)); 
}

//Ab Zahlen größer 12 funktioniert dieses Programm nicht mehr!

return  0;
}


 
 


 













