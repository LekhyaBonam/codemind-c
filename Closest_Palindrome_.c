#include<stdio.h>
int main()
{
    int n,i,j,r,cp,sp,d,e;
    scanf("%d",&n);
    for(i=n-1;i>=n-20;i--)
    {
        j=i;
        r=0;
        while(j>0)
        {
            r=r*10+j%10;
            j/=10;
            
        }
        if(r==i)
        {
            cp=i;
            break;
        }
    }
    for(i=n+1;i<=n+20;i++)
    {
        j=i;
        r=0;
        while(j>0)
        {
            r=r*10+j%10;
            j/=10;
        }
        if(r==i)
        {
            sp=i;
            break;
        }
    }
    d=n-cp;
    e=sp-n;
    if(d<e)
    {
        printf("%d",cp);
    }
    else if(d==e)
    {
        printf("%d %d",cp,sp);
    }
    else
    {
        printf("%d",sp);
    }
}