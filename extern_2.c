#include<stdio.h>
#include"extern.c"
int main()
{
    extern int a;
    printf("%d",a);
    return 0;
}