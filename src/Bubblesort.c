/* Implementing Bubble sort in a C Program*/
#include<stdio.h>
int main()
{
   int n, temp, i, j, a[30];

   printf("How many numbers are u going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d numbers: ",n);
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);

   /* This is the main logic of bubble sort algorithm*/
   for(i=n-2;i>=0;i--)
   {
      for(j=0;j<=i;j++)
      {
        if(a[j]>a[j+1])
        {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
        }
      }
   }
   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);

   return 0;
}
