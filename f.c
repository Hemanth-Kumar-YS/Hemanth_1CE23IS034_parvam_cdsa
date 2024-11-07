#include<stdio.h>
int Sod(int );
int main()
{
    int n=0;
    scanf("%d",&no);
    printf("Sum of digit of no %d is %d",no,Sod(no));
    return 0;
}
int Sod(int n)
{
    if(no<=0)return 0;
    if(no==1)return 1;
    return (no%1)+Sod(n/10)
}
