#include <stdio.h>
//function declaration and definition
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return ++i;
    return -1;
}
 
// Driver code
void main()
{
    int arr[10], i, n, x;
    printf("enter no of elements (max 10) : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the number you want to search for : ");
    scanf("%d",&x);
    // Function call
    int result = search(arr, n, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at location %d", result);
}