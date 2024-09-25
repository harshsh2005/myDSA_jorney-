#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"enter the number";
cin>>n;
int pow;
cout<<"enter the power";
cin>>pow;
int s=1;
for(int i=1;i<=pow;i++)
{
s=s*n;
}

cout<<s;
}