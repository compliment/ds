#include<bits/stdc++.h>
#include "D://DS/161610154/Week3/Stack.h"
using namespace std;
void findbin(int deci,Stack <int> s)
{
    while(deci>0)
    {
        s.push(deci%2);
        deci/=2;
    }
    while(s.IsEmpty()!=1)
        cout<<s.pop();
}
int main()
{
    int deci;
    cout<<"Enter a decimal number \n";
    cin>>deci;
    Stack <int> s;
    findbin(deci,s);
}
