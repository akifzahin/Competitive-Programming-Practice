#include <bits/stdc++.h>
using namespace std;
void compareTriplets(int a[3], int b[3])
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

    int returnArray[2] = {alicePoints, bobPoints};
    for (int i = 0; i < 2; i++)
    {
        cout << returnArray[i] << " ";
    }
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
    compareTriplets(alice, bob);
}