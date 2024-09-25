#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number";
    int n,x;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i!=0)
        {
            x=1;
        }
    
    }
    if(x=1)
    cout<<"prime";
else
cout<<"not prime";
       
}