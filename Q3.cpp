#include<iostream>

using namespace std;

int main()
{
    int n;

cout<<"Input the number upto: ";
cin>>n;
cout<<"\n\  Multiplication table from 1 to "<<n<<endl;
cout<<endl;
     for(int i=1;i<=12;i++)
     {
        for(int j=1;j<=n;j++)
            {
            cout<<j<<"x"<<i<<"="<<i*j<<"\t\t";
            }
            cout<<endl;
     }
     cout<<endl;
}
