#include<iostream>
using namespace std;
#define Maxsize 5
class PQueue
{
   int arr[Maxsize];
   int Front;
   int Rear;
public:
    PQueue()
    {Front=Rear=-1;}
    int IsEmpty()
    { if(Front==-1 && Rear==-1)
        return 1;
      return 0;
    }
    int IsFull()
    {
        if( Rear==Maxsize-1)
            return 1;
        return 0;
    }
    void InsertPQ(int item)
    {   int i, j;
        if (IsFull()) {cout<<"Queue Overflow";}
        else if( IsEmpty()) { Front=0;Rear=0; arr[Rear]=item;}
        else{
               //find the position of insertion
                for(i=Front; i<=Rear;i++)
                   if (arr[i]>item) break;

                if (i<=Rear) {//Check whether insertion is at the middle position of Queue
                            //Shift the items to right
                              for(j=Rear;j>=i;j--)
                                 arr[j+1]=arr[j];
                             }
                    arr[i]=item;
                    Rear++;
             }


    }
    int DeletePQ(){ int x;
        if (IsEmpty()){cout<<"Queue Underflow"; return NULL;}
        if(Front==Rear){x=arr[Front]; Front=Rear=-1; return x;}  //only one item was there

         x=arr[Front];
         Front++;
                return x;
    }

    void displayPQ( )
    {
        for(int i=0;i<=Rear;i++)
        cout<<arr[i]<<"\t";
    }

};

int main()
{
     PQueue pq;
    int item;
    cout<<"Insert Q elements : ";
    cin>>item;

    pq.InsertPQ(item);
    cin>>item;
    pq.InsertPQ(item);
    cin>>item;
    pq.InsertPQ(item);
    cin>>item;
    pq.InsertPQ(item);
    cin>>item;
    pq.InsertPQ(item);

    cout<<"\nQ Elements : ";

    cout<<"\nElement Deleted = " <<pq.DeletePQ();
    cout<<"\nElement Deleted = " <<pq.DeletePQ();
     cout<<"\nElement Deleted = " <<pq.DeletePQ();
    cout<<"\nElement Deleted = " <<pq.DeletePQ();
     cout<<"\nElement Deleted = " <<pq.DeletePQ();

}
