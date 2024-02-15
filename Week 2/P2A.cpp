#include <iostream>

using namespace std;

int main()
{
    int n, size, i, j, k, flag = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        flag = 0;
        cin >> size;
      int a[size];
        for(i = 0; i < size; i++)
        {
            cin >> a[i];
        }
        for(i = size - 1; i >= 0; i--)
        {
            for(j = 0; j < i; j++)
            {
                for(k = j + 1; k < i; k++)
                {
                    if(a[j] + a[k] == a[i])
                    {
                        cout << j + 1 << "," << k + 1 << "," << i + 1 << " \n";
                        flag = 1;
                    }
                }
            }
        }
        if(flag == 0)
            cout << "No sequence found\n";
    }
    return 0;
}


