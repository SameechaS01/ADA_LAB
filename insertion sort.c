#include <stdio.h>  
#include<time.h>

void insertSorting(int arr[], int num)
{  
    int i, j, temp;  
    for (i = 1; i < num; i++) {  
        temp = arr[i];  
        j = i - 1;  
 
        while(j>=0 && temp <= arr[j])
        {    
            arr[j+1] = arr[j];    
            j = j-1;    
        }    
        arr[j+1] = temp;    
    }  
}  
 
void main()  
{
    clock_t start, end;
    double time;
    int arr[10000],num,i;
    int choice;
    printf("Enter 1 for user entry & 2 for random entry");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    printf("Enter the number of elements:\n");
    scanf("%d",&num);
    printf("Enter the array elements:\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
   
    case 2:    
    printf("Enter the number of values : ");
           scanf("%d", &num);
           for(int i=0;i<num;i++){
               arr[i]=num-i;
           }
    }
    start= clock();
    insertSorting(arr, num);
    end= clock();
    printf("\nAfter sorting the array elements are: \n");
    for (i = 0; i < num; i++)  
        printf("%d ", arr[i]);
    time= (((double)(end-start))/CLOCKS_PER_SEC);
    printf("\nThe time taken to sort the of elements is %f",time);
}    
