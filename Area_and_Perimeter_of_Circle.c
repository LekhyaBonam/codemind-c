#include<stdio.h>
int main ()
{
    int r;
    float area,per;
    scanf("%d",&r);
    area=3.14*r*r;
    per=2*3.14*r;
    printf("%.2f
%.2f",area,per);
}