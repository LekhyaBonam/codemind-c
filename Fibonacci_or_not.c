#include<stdio.h>
int main ()
{
      int n,m,a=0,b=1,cnt=0;
      scanf("%d",&n);
      for(int i=1;i<n+1;i++)
      {
          int c=a+b;
          if(c==n)
          {
              cnt++;
              break;
          }
          a=b;
          b=c;
      }
      if(cnt==0)
      printf("False");
      else
      printf("True");
      
      
}