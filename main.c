#include <stdio.h>
#include <stdlib.h>

/*justc */

int mult(int x, int y);
int getoper();

int main(int argc, char** argv) {

    int x;
    int y;
    int z;
    printf("Hello World justc\n");
    x = getoper();
    y = getoper();
    z = mult(x, y);
    printf("Program Completed! %d\n", z);
    return (EXIT_SUCCESS);
}
