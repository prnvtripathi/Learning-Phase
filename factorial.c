#include<stdio.h> //preprocessor

int main() //maincode
{
    int fact = 1, n; //variabale declaration
    printf("Enter the number you want the factorial of : ");
    scanf("%i", &n); //getting value from user

    for(int i = 1; i<=n; i++)
    {
        fact = fact * i; //using loop to make it easier
    }
    printf("factorial of %i  = %i",n ,fact); //here is the output
}