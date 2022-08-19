#include <stdio.h>
void bubbleSort(int a[], int n)        //sorting function
{

  for (int i = 0; i < n; ++i) 
  {
    for (int j = 0; j < n - 1; ++j) 
    {
      if (a[j] > a[j + 1]) 
      {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

void printArray(int a[], int n)        //function to print a
{
  for (int j = 0; j < n; ++j) {
    printf("%d  ", a[j]);
  }
  printf("\n");
}

int main()                                    //driver code
{
  int j, data[20], n;
  printf("Enter size of array : ");
  scanf("%d",&n);
  printf("Enter elements in array : \n");
  for(j=0; j<n; j++)
  {
    scanf("%d",&data[j]);
  }
  bubbleSort(data, n);
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, n);
}