#include <bits/stdc++.h>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    string answer = "/0";
    int firstSum=0,secondSum=0;

    if(x2>x1 && v2>v1)
    {
        answer = "NO";
    }
    else
    {
        while(x1>=0||v1>=0||x2>=0||v2>=0)
        {
            x1+=v1;
            x2+=v2;
            if(x1==x2)
            {
                answer = "YES";
                break;
            }

        }
    }
    return answer;
}
int main()
{
    int d1,s1,d2,s2;
    cin>>d1>>s1>>d2>>s2;

    cout<<kangaroo(d1,s1,d2,s2);
}