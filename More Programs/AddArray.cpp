#include<iostream>
#include<stdlib.h>
using namespace std;
void Add(int a[][100],int b[][100],int m,int n,int p,int q,int result[][100])
{
    for(int r=0;r<m;r++)
        {
            for(int c=0;c<n;c++)
                result[r][c]=a[r][c]+b[r][c];
        }
}
int main(void)
{
    int r,c,m,n,p,q,a[100][100],b[100][100],result[100][100];
    cout<<"Enter the dimensions for matrix a \n";
    cin>>m>>n;
    cout<<"Enter the dimensions for matrix b \n";
    cin>>p>>q;
    if(m!=p||n!=q)
    {
        cout<<"cannot add or subtract \n";
        exit(0);
    }
    else
    {
    cout<<"Enter "<<m*n<<" elements in row wise order for the matrix a \n";
    for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
            cin>>a[r][c];
    }

    cout<<"Enter "<<p*q<<" elements in row wise order for the matrix b \n";
    for(r=0;r<p;r++)
    {
        for(c=0;c<q;c++)
            cin>>b[r][c];
    }
    Add(a,b,m,n,p,q,result);
    cout<<"Matrix after addition \n";
     for(r=0;r<m;r++)
    {
        for(c=0;c<n;c++)
            cout<<"\t"<<result[r][c];
        cout<<"\n";
    }
    }
}
