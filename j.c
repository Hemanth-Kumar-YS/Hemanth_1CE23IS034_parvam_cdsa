#include<stdio.h>
int main()
{
    int a[10]={7,8,9,6,5,4,6,7,2,1},*p=a;
    for(int i=0;i<10;printf("%d\n",a[i++]));

    printf("afterloop:%d\n",*p);
    
    return 0;
}