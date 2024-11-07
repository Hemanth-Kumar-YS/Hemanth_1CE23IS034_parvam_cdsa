#include<stdio.h>

void myfank();
int main()
{
    printf("Hello world\n");
    myfank();
    printf("Hello world2\n");
    myfank();
    printf("Hello world3\n");
    myfank();
    return 0;
}
void myfank()
{
    int x=5;
    printf("%d\n",x);
    x++;
}
