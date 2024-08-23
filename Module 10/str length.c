#include<stdio.h>
#include<string.h>              /*  strlen type string er function gulo use korte
                                     string.h header file use korte hobe   */

int main(){
    char a[100];
    scanf("%s", a);

    int lenght=strlen(a);
    printf("%d", lenght);



/* OR,,    int count=0;
          for(int i=0; a[i]!='\o'; i++){
           count++;
          }
          printf("%d", count);*/


    return 0;
}
