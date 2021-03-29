//https://www.hackerrank.com/challenges/array-left-rotation/problem
#include<iostream>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     q=q%n;
     for(int i=q;i<n;i++)
     cout<<a[i]<<" ";
     for(int i=0;i<q;i++)
       cout<<a[i]<<" ";
    
    
}

