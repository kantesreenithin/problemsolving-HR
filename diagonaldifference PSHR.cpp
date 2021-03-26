//https://www.hackerrank.com/challenges/diagonal-difference/problem
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    
    }
        
    }
    int leftdsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
      if(i-j==0)
      leftdsum+=arr[i][j];
    
    }
