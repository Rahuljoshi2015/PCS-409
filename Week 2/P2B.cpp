#include <stdio.h>
int main()
{
    int n,size,i,l,r,flag=0;
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
            l=0;
            r=i-1;
            while(l<r)
            {
                 if(a[l]+a[r]==a[i])
                  {
                     printf("%d,%d,%d \n",l+1,r+1,i+1);
                     flag=1;
                     break;
                  }
                 else if(a[l]+a[r]<a[i])
                  l++;
                 else
                  r--;
            }
        }
        if(flag==0)
        printf("No sequence found\n");
    }
}
