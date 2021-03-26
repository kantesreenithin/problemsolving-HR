//https://www.hackerrank.com/challenges/plus-minus/problem
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count1=0,count2=0,count3=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        count1++;
        else if(a[i]<0)
        count2++;
        else
        count3++;
        
    }
    cout<<setprecision(7)<<float(count1)/n<<endl; 
     cout<<setprecision(7)<<float(count2)/n<<endl;
    cout<<setprecision(7)<<float(count3)/n<<endl;
                                                 //here typecasting is important 
                                                 //becuase their is diff return type 
                                                 // we want float to return but they are                                                       //int 
}
