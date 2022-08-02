#include<iostream>
#include <cmath>

using namespace std;
void fun(int a,int b,int c)
{
   cout<<"Number"<<"\t"<<"Square\t"<<"Cubes"<<endl;

while (a<=b)
    {
    cout<<a<<"\t"<<pow(a,2)<<"\t"<<pow(a,3)<<endl;
    a+=c;
}

}

int main()
{
    int start,endn,incn;
    cout<<"Enter the starting number : ";
    cin>>start;
    cout<<"Enter the ending number : ";
    cin>>endn;
    cout<<"Enter the increment between the starting and ending numbers : ";
    cin>>incn;
    cout<<endl;
    fun(start,endn,incn);
    cout<<endl;
}

