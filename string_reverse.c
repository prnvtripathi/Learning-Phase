#include<stdio.h>
#include<string.h>

void reverse(char * str)
{
    int length = strlen(str);
    for (int i = 0; i < length/2; i++)
    {
        char temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }
}

int main()
{
    char str1[500], str2[500];
    printf("enter string : ");
    scanf("%s", str1);
    reverse(str1);
    printf("Your string is reversed now : %s", str1);
}