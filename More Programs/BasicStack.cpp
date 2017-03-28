#include<bits/stdc++.h>
#define max 5
using namespace std;
class BasicStack
{
    int top=-1;
    int st[max];
public:
    int IsFull()
    {
        return (top==max-1)?1:0;
    }
    int IsEmpty()
    {
        return (top==-1)?1:0;
    }
    void push(int ele)
    {
        if(IsFull())
            cout<<"Stack Overflow \n";
        else
            st[++top]=ele;
    }
    int pop()
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
int main()
{
    BasicStack ob1;
    int op,ele,ans=1;
    cout<<"Operations: \n 1.push \n 2.pop \n 3.display \n 4.Exit \n";
    do
    {
        cout<<"Enter an option \n";
        cin>>op;
        switch(op)
        {
            case 1: cout<<"Enter an element to be pushed\n";
                    cin>>ele;
                    ob1.push(ele);
                    break;
            case 2: cout<<"Pop element \n";
                    cout<<ob1.pop()<<"\n";break;
            case 3:ob1.display();break;
            case 4:ans=0;break;
            default:cout<<"Entered wrong option \n";
        }
    }while(ans==1);
}
