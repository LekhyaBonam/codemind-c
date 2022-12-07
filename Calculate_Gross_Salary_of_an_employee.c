#include<stdio.h>
int main ()
{
    float gs,pf,hra,da,bs;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    gs=pf+hra+da+bs;
    printf("%.2f
%.2f",pf,gs);
}