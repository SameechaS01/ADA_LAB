#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
   
    for (i = 0; i < n-1; i++)
    {
       
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
       
        swap(&arr[min_idx], &arr[i]);
    }
}
 

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
    int s,ch;
    clock_t start,end;
    printf("1:Manual entry 2:Random entry\n");
    scanf("%d",&ch);
    switch(ch)
    {
       
    case 1:
    {printf("Enter size of array ");
    scanf("%d",&s);
    int arr[s];
    for(int i =0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]);
   
    start=clock();
    selectionSort(arr, n);
     
    printf("Sorted array 1 : \n");
   
    printArray(arr,  n);
   end=clock();
   printf ("\nTime taken: %f", (double)(end - start)/(CLOCKS_PER_SEC));
     break;
    }
     
    case 2:
    {
    int arr2[]={34,56,23,45,98,12};
    int n1 = sizeof(arr2)/sizeof(arr2[0]);
    start = clock();
    selectionSort(arr2,n1);
    printf("Sorted array 2 : \n");
    printArray(arr2,n1);
    end=clock();
   printf ("\nTime taken: %f", (double)(end - start)/(CLOCKS_PER_SEC));
     break;
    }
    }
    return 0;
}
