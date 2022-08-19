#include<stdio.h>

int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        max = arr[i];
    }
    return max;
}

void main()
{
    int arr[5], n = 5;
    printf("Enter 5 values : \n-");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The largest number in the array is : %d", max(arr, n));
}