#include<iostream>
using namespace std;
int main()
{
    int a=10;
    char b='c';
    a=b;//type casting 
    int x=10021;
    char y;
    y=x;//concept of data loss bcz number is very high and cant store in small data type
    cout<<y;
    cout<<a;
}