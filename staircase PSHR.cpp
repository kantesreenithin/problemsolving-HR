//https://www.hackerrank.com/challenges/staircase/problem
/*#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
        for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
}
