#include <stdio.h>

void bubbleSort(int arr[], int n)
{
   int a, b, swap[n], sub;
   for (a = 0; a < n; a++)
      swap[a] = 0;
   for (a = 0; a < n - 1; a++)
   {
       for (b = 0; b < n - a - 1; b++)
       {
           if (arr[b] > arr[b + 1])
           {
              sub = arr[b];
              arr[b] = arr[b + 1];
              arr[b + 1] = sub;
              swap[b]++;
           }
       }
   }
   for (a = 0; a < n; a++)
      printf("Number of swaps needed for index %d: %d\n", a, swap[a]);
}

int main()
{
   int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
   int n = sizeof(arr) / sizeof(arr[0]);
   bubbleSort(arr, n);
   
   return 0;
}

