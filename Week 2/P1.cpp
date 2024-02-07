#include <iostream>
using namespace std;
int main()
{ 
    int n,key,i,j,size,k;
   // cout<<"Enter test case\n";
    cin>>n;
    int t[n];
    for(k=0;k<n;k++)
    {
        int c=0;
       // cout<<"Enter array size\n";
       cin>>size;
        int a[size];
        for(i=0;i<size;i++)
        {
          //   cout<<"Enter element\n";
               cin>>a[i];
        }
        // cout<<"Enter key\n";
        cin>>key;
        for(i=0;i<size;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(((a[i]-a[j])==key)||((a[j]-a[i])==key))
                c++;
            }
        }
        //cout<<"count\n";
        t[k]=c;

    }
    for(i=0;i<n;i++)
    cout<<t[i];
}
