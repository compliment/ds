#include<bits/stdc++.h>
#define max 100
using namespace std;
template <class T>
class Stack
{
    int top=-1;
    T st[max];
public:
    int IsFull()
    {
        return (top==max-1)?1:0;
    }
    int IsEmpty()
    {
        return (top==-1)?1:0;
    }
    void push(T ele)
    {
        if(IsFull())
            cout<<"Stack Overflow \n";
        else
            st[++top]=ele;
    }
    T pop()
    {
        if(IsEmpty())
        {
            cout<<"Stack Underflow \n";
            return -99;
        }
        else
            return st[top--];
    }
    void display()
    {
        for(int i=top;i>=0;i--)
            cout<<st[i]<<"\n";
    }
};
