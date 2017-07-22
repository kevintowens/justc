#include <stdio.h>
#include <stdlib.h>

/* justc */

int mult( int x, int y ){
  printf("...entering mult\n");
  return x*y*10;
}
int getoper(){
  int x;
  printf("...entering getoper\n");
  printf( "Enter a number: " );
  scanf( "%d", &x );
  getchar();
  return x;
}
