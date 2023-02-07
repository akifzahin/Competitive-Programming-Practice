#include <bits/stdc++.h>
using namespace std;
int* compareTriplets(int a[3], int b[3])
{
    int alicePoints = 0, bobPoints = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            alicePoints++;
                }
        else if (a[i] < b[i])
        {
            bobPoints++;
        }
    }

    static int returnArray[2] = {alicePoints, bobPoints};
    return returnArray;
    
}
int main()
{
    int alice[3], bob[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> alice[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> bob[i];
    }
    int* result= compareTriplets(alice, bob);
    for (int i = 0; i < 2; i++)
    {
        cout << result[i] << " ";
    }
}