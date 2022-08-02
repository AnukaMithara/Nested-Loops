#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int num,newn ;

    for(int i=1;i<=500;i++)
    {
        int t = 0;
        num = i;
        while(num!=0)
        {
          newn = num%10;
          t = t + pow(newn,3);
          num = num/10;
        }
    if (t == i)
    {
        cout<<"\t"<<i<<endl;
    }
    }
}
