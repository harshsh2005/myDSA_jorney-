#include<iostream>
using namespace std;
int main()
{
cout<<"enter the number ";
int n;
cin>>n;
int s=1;
if(n==1 || n==0)
{
   s=1;
}
else
{
for(int i=1;i<=n;i++)
{
 s=s*n;
 n--;
}
}
cout<<s;

}