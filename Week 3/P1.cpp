
#include <stdio.h>
 
int main()
{
    int n,size,i,k;
    //printf("Enter test case \n");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
    // printf("Enter loop\n");
        //printf("Enter size of array");
        scanf("%d",&size);
        int arr[size];
        for(i=0;i<size;i++)
        {
            //printf("Enter element");
            scanf("%d",&arr[i]);
        }

      int key, j,comp=0,shift=0;
     for (i = 1; i < size; i++) 
     {
        key = arr[i];
        j = i - 1;
 
        shift++;
        while (j >= 0 && arr[j] > key)
        {
            comp++;
            arr[j + 1] = arr[j];
            shift++;
            j = j - 1;
        }
        arr[j + 1] = key;
     }
    

 

    
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("comparisions=%d\n",comp);
    printf("shifts=%d\n",shift);
 } 
    
    return 0;
}
