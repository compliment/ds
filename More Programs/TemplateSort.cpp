#include<bits/stdc++.h>
using namespace std;

template <class T>
void Swap(T &x, T &y)
{
    T temp=x;
    x=y;
    y=temp;
}

template <class T>
void Sort(T a[],int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
                Swap(a[j],a[j+1]);
        }
    }
}

template <class T>
void PrintArray(T a[],int n)
{
    int i;
    for(i=0; i<n; i++)
        cout<<a[i]<<"\t";
    cout<<"\n";
}
int main()
{
    int ia[100],in,fn,i;
    float fa[100];
    cout<<"Integer Array: \n";
    cout<<"Enter array dimensions \n";
    cin>>in;
    cout<<"Enter array elements \n";
    for(i=0; i<in; i++)
        cin>>ia[i];
    PrintArray(ia,in);
    Sort(ia,in);
    PrintArray(ia,in);
    cout<<"Float Array: \n";
    cout<<"Enter array dimensions \n";
    cin>>fn;
    cout<<"Enter array elements \n";
    for(i=0; i<fn; i++)
        cin>>fa[i];
    PrintArray(fa,fn);
    Sort(fa,fn);
    PrintArray(fa,fn);
}
