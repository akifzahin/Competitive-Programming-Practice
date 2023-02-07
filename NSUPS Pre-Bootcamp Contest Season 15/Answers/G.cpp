#include <bits/stdc++.h>
using namespace std;

void staircase(int n)
{
    int arr[n][n];
    for (int i = 0; i <= n; i++)
    {
        for (int j=i; j <= n; j++)
        {
            
           cout<<" ";
            
        }
        for (int j =0; j < i; j++)
        {
            
           cout<<"#";
            
        }

        cout << "\n";
    }
}
int main()
{
    int size;
    cin >> size;
    staircase(size);
}