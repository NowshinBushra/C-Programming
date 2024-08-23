#include<stdio.h>

int main()
{
    int test;
    scanf("%d",&test);

    while(test--)
    {
       long long int M;
       int a,b,c;
       scanf("%lld %d %d %d", &M, &a,&b,&c);

       long long missing_num = -1;

      int M2 = a*b*c;
      if(a>=1 && b>=1 && c>=1 )
      {
        long long d=M/M2;
        if(M%M2==0)
        {
            missing_num = d;
        }
      }

      printf("%lld\n", missing_num);
    }
    return 0;
}
