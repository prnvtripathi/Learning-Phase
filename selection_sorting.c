#include<stdio.h>
void selection(int *a, int n)
{
    int i, j, min, temp;
    for(i=0;i<=n-2;i++)
    {
        min=i;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
void main()
{
    int a[10], i, n;
    printf("enter number of elements : ");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selection(a,n);
    printf("sorted array");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}