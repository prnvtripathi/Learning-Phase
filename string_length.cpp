#include<stdio.h> //preprocessor

int string_length(char * str) //function declared
{
    int offset = 0;
    while(str[offset] != 0)
    {
        offset++;
    }
    return offset;
}

int main()  //main program
{
    char str[50];
    printf("Enter string : ");
    scanf("%s",str);
    printf("%s \a \n",str);
    printf("The string %s has length of %i bytes", str, string_length(str));
}