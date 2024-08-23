#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);

    strcpy(a,b);
////OR,,
   /*   for( int i=0; i<=6; i++){
         a[i]=b[i];
       }     */
    printf("%s %s", a,b);

    return 0;
}
