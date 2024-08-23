#include<stdio.h>
int main(){
                            //scanf er alternatives gets() , fgets()
    char a[5];
    gets( a);
    //OR,,
    char b[100];
    fgets(a, 10, stdin);


    printf("%s %s", a, b);

    return 0;
}
