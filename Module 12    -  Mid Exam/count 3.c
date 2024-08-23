#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d", &test);
    for( int t=1; t<=test && t <= 1000; t++){


            char S[10000];
            scanf("%s", S);
            int length= strlen(S);

            int capital=0, small=0, digit=0;
            for(int i=0; i<length; i++){

                if(S[i]>='A' && S[i]<='Z'){
                  capital++;  }

                 else if(S[i]>='a' && S[i]<='z'){
                  small++;  }

                 else if(S[i]>='0' && S[i]<='9'){
                  digit++;  }
            }
            printf("%d %d %d", capital, small, digit);
            printf("\n");

}
    return 0;
}

