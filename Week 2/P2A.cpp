#include <stdio.h>
int main()
{
    int n,size,i,j,k,flag=0;
    //printf("Enter test case \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        flag=0;
        //printf("Enter size of array");
        scanf("%d",&size);
        int a[size];
        for(i=0;i<size;i++)
        {
            //printf("Enter element");
            scanf("%d",&a[i]);
        }
        for(i=size-1;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                for(k=j+1;k<i;k++)
                {
                    if(a[j]+a[k]==a[i])
                     {
                         printf("%d,%d,%d \n",j+1,k+1,i+1);
                     flag=1;
                     }
                }
            }
        }
        
        if(flag==0)
        printf("No sequence found\n");
    }
}
