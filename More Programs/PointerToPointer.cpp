#include<iostream>
using namespace std;
int ** modify(int **q)
{  cout<<"   *q"<< "   "<<*q <<"\n";
    (*(*q))++;
    return q;
}
int main()
{
    int a,*p,**r;
    cout<<"Enter a value for a \n";
    cin>>a;
    p=&a;
    cout<<"  p"<<p<<"   "<<"\n";
    r=modify(&p);
    cout<<"     *r"<<*r<<"\n";
    cout<<"Modified value ="<<**r;

}
