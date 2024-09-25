#include<iostream>
using namespace std;
int main(){
int n;
int s;
cin>>n;
while(n!=0)
{
    s=n%10;
    cout<<s;
    n=n/10;
}
}
