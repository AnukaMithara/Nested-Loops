#include<iostream>

using namespace std;

void calc(double a,char b,double c)
{
if (b == '+')
{
    cout<<a+c;
}
if (b == '-')
{
    cout<<a-c;
}
if (b == '*')
{
    cout<<a*c;
}
if (b == '/')
{
    cout<<a/c;
}
}

int main()
{
int A,C;
char B;

cout<<"input 1st number \t: ";
cin>>A;
cout<<"input operator \t\t: ";
cin>>B;
cout<<"input 2nd number \t: ";
cin>>C;
cout<<endl;
cout<<"The answer is  ";
calc(A,B,C);
cout<<endl;
return 0;
}

