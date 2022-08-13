#include<stdio.h>
#include<stdlib.h>

//Print array
void printArray(int * inputArray, int size)
{
    printf("Elements in the array: ");
    for(int i = 0; i< size; i++)
        printf(" %d",inputArray[i]);
}

// Implementation of insertion sort algorithm
void insertionSortArray(int * inputArray, int size)
{
    int i, j, temp;
    //  and we consider 1 = 0 as sorted i !=0 because we consider the element in the index as unsorted 
   for(i=1;i<size;i++)
   { 
      temp=inputArray[i];
      j=i-1;
      while((temp<inputArray[j])&&(j>=0))
      {
         inputArray[j+1]=inputArray[j];
         j=j-1;
      }
      inputArray[j+1]=temp;
   }
}

int main()
{
   int i, n;
   
   // Prompting for number of elements
   printf("How many numbers to enter?:\n");
   scanf("%d",&n);
   if(n<=0)
   {
       printf("the number of elements must be greater than 0\n");
       return 0;
   }
   
   
   int * arr = (int *)malloc(sizeof(int)*n);
   
   // Getting 'n' elements from cmd line
   printf("Enter %d elements:\n",n);
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
   //print original entered array
   printf("Entered array:\n");
   printArray(&arr[0], n);
   
   //perform insertion sort
   insertionSortArray(arr, n);
   
   //print the sorted array
   printf("\nSorted array:\n");
   printArray(&arr[0], n);

    //free the memory for pointer
    free(arr);
   return 0;
}