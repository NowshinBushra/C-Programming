#include <stdio.h>
int main()
{

    int ar[5] = {10, 20, 30, 40, 50};

    printf("0th index er address - %p\n", &ar[0] );
    printf("0th index er address - %p\n", ar );

    printf("0th index er value - %p\n", ar[0] );
    printf("0th index er value - %p\n\n", *ar );

    printf("1st index er value - %p\n", ar[1] );
    printf("1st index er value - %p\n", *(ar+1));
    printf("1st index er value - %p\n", *(1+ar));
    printf("1st index er value - %p\n", 1[ar] );

    /*
      ar[1] = *(ar+1)
     *(ar+1) = ar[1]
     *(1+ar) =  ar[1] / 1[ar]
                                     */
    return 0;
}

