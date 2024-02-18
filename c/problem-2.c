#include <stdio.h>

int main(void){

    int fibA = 1;
    int fibB = 2;
    int fibTemp = 0;

    int total = 0;

    while (fibB <= 4000000)
        {
            if (fibB % 2 == 0)
            {
                total += fibB;
            }
            fibTemp = fibA + fibB;
            fibA = fibB;
            fibB = fibTemp;
        }
    
    printf("Final total: %i\n",total);
}
