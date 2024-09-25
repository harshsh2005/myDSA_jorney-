#include<iostream>
using namespace std;
void print_rectangle_pattern()
{
    int i,j,n=0;
    for(i=1;i<=5;i++)
    {
         
        for(j=1;j<=5;j++)
        {
            n++;
        cout<<n<<" ";
    }
    cout<<endl;
}
}
int main()
{
    print_rectangle_pattern();
}