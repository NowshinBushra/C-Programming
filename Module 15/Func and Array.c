#include <stdio.h>

void func( int ar[], int sz)    //void func( int *ar, int sz)
{
    for(int i=0; i<sz; i++){
        printf("%d ", ar[i]);
    }
}
int main()
{

    int ar[5] = {10, 20, 30, 40, 50};

    func(ar, 5);
    return 0;
}

