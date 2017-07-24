#include <stdio.h>
#include <stdlib.h>

/*
 * justc.main 
 *
*/

int mult(int x, int y);
int getoper();
int mcreate();

int main(int argc, char** argv) {

    int x;
    int y;
    int z;
    printf("Hello World justc\n");
    x = mcreate();
    x = getoper();
    y = getoper();
    z = mult(x, y);
    printf("Program Completed! %d\n", z);
    return (EXIT_SUCCESS);
}
