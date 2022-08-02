#include<iostream>

using namespace std;

double cylindervolume(double r,double h)
{
    double pi = 3.14,V;
    V = (pi*r*r*h);

    cout<<V;
}

int main()
{
    double R,H;

     cout<<"The radius of the round surface : ";
     cin>>R;
     cout<<"The height of the cylinder : ";
     cin>>H;
     cout<<endl;
     cout<<"The volume of the cylinder is ";
     cylindervolume(R,H);
     cout<<endl;

}
