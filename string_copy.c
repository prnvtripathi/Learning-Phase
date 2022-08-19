#include<stdio.h>
#include<string.h>

void string_copy(char * from, char * to)
{
    int offset = 0;
    while (from[offset] != 0)
    {
        to[offset] = from[offset];
        offset++;
    }
    to[offset] = 0;

}

int main()
{
    char str1[500], str2[500];
    printf("enter string : ");
    scanf("%s", str1);
    string_copy(str1, str2);
    strcpy(str1, str2);
    printf("Your string is copied to new string : %s",str2);
}