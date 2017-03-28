#include<iostream>
using namespace std;
int * modify(int *q)
{
    (*q)++;
    return q;
}
int main()
{
    int a,*p,*r;
    cout<<"Enter a value for a \n";
    cin>>a;
    p=&a;
    r=modify(p);
    cout<<*r;

}
