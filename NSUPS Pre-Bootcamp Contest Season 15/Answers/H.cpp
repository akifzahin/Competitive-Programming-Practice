#include <bits/stdc++.h>
using namespace std;

void insertionSort(long long int arr[5])
{
    int value, j;
    for (int i = 0; i < 5; i++)
    {
        value = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > value)
        {
            // arr[j+1] = arr[j];
            swap(arr[j], arr[j + 1]);
            j = j - 1;
        }
        arr[j + 1] = value;
    }
}

void miniMaxSum(long long int arr[5])
{
    
    long long int maxSum=0,minSum=0;
    for(int i=0; i<4; i++)
    {
        minSum+=arr[i];
    }
    cout<<"\n";
    for(int i=1; i<5; i++)
    {
        maxSum+=arr[i];
    }
    cout<<minSum<<"\n"<<maxSum<<"\n";
}
void printArray(int arr[5])
{
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    long long int array[5];
    for(int i=0; i<5; i++)
    {
        cin>>array[i];
    }
    insertionSort(array);
    miniMaxSum(array);
}