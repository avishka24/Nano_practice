#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n][n];
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                   arr[i][j] = -1;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i ==j)
                    {
                        arr[i][j] = -1;
                    }
                    else
                    {
                        arr[i][j] = 1;
                    }
                }
            }
        }
        
        for (int i= 0; i < n; i++)
        {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
        }
    }
}
