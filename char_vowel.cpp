#include<iostream>
using namespace std;
int main()
{
  char s;
  cout<<"Enter the character";
  cin>>s;
  if(s=='a'||s=='e'||s=='i'||s=='0'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
  cout<<"Character is vowel";
else
cout<<"Character is not vowel";  
}