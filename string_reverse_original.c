#include<stdio.h>
#include<string.h>

void reverse1(char * str1, char * str2)
{
   int i, j, len = strlen(str1);
   for (i = len-1, j = 0; i>=0; i--, j++)
   {
       str2[j] = str1[i];
   }
   str2[j] = '\0';
}

int main()
{
    char str1[500], str2[500];
    printf("Enter string : ");
    scanf("%s", str1);
    reverse1(str1, str2);
    printf("The string %s is reversed now : %s", str1, str2);
}