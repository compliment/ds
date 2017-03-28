#include<bits/stdc++.h>
using namespace std;
class Quadratic
{
    int a,b,c;
    public:
    void getdata()
    {
        cout<<"Enter the co-effecients of the quadratic equation \n";
        cin>>a>>b>>c;
    }
    void ComputeRoots()
    {
        double d=b*b-4*a*c,r1,r2;
        if(d<0)
        {
            cout<<"Roots are imaginary \n";
            r1=-b/(2*a);
            r2=sqrt(-d)/(2*a);
            putdata(r1,r2,d);
        }
        else if(d==0)
        {
            cout<<"Roots are real and equal \n";
            r1=-b/(2*a);
            r2=r1;
            putdata(r1,r2,d);
        }
        else
        {
            cout<<"Roots are real and unequal \n";
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            putdata(r1,r2,d);
        }
    }
    void putdata(double r1,double r2,double d)
    {
        if(d<0)
        {
            cout<<"Root 1= "<<r1<<"+i"<<r2<<"\n";
            cout<<"Root 2= "<<r1<<"-i"<<r2;
        }
        else
        {
            cout<<"Root 1= "<<r1<<"\n";
            cout<<"Root 2= "<<r2;
        }
    }
};
int main()
{
    Quadratic ob1;
    ob1.getdata();
    ob1.ComputeRoots();
}
