#include <bits/stdc++.h>
using namespace std;
void arrayRatio(int *arr,int size)
{
   
    double positiveRatio, negativeRatio, zeroRatio;
    double positiveCount = 0, negativeCount = 0, zeroCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            positiveCount++;
        }
        else if (arr[i] < 0)
        {
            negativeCount++;
        }
        else if(arr[i]==0)
        {
            zeroCount++;
        }
    }

    positiveRatio = positiveCount / size;
    negativeRatio = negativeCount / size;
    zeroRatio = zeroCount / size;

    cout<<setprecision(6);

    printf("%f\n%f\n%f",positiveRatio,negativeRatio,zeroRatio);
}
int main()
{
    int arraySize;
    cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }
    arrayRatio(array,arraySize);
}