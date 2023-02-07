#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(int candles[],int n)
{
    int maxHeight = candles[0],count=0;
    for(int i=0; i<n; i++)
    {
        if(candles[i]>maxHeight)
        {
            maxHeight=candles[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(candles[i]==maxHeight)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int size;
    cin>>size;

    int array[size];
    
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    cout<<birthdayCakeCandles(array,size);
}