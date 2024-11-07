#include<stdio.h>
long fact(int);
int main()
{
    int n=0,fact1;
    scanf("%d",&n);  
    printf("using for loop\n");
    printf(" fact = %ld\n",fact1);
    printf("using recursion\n");

    printf("fact rec = %ld\n",fact(n));
    return 0;
}
long fact(int no){
    if(no<=1)return (long)1;
    return (long)no*fact(no-1);
}
