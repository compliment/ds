#include<iostream>
using namespace std;
#define Maxsize 5
class Queue
{
   int arr[Maxsize];
   int Front;
   int Rear;
public:
    Queue(){Front=Rear=-1;}
    int IsEmpty(){ if(Front==-1 && Rear==-1) return 1;
                   return 0;}
    int IsFull(){if( (Rear+1)%Maxsize==Front)return 1;
                return 0;}
    void Insert(int item){
        if (IsFull()) {cout<<"Queue Overflow";}
        else if( IsEmpty()) { Front=0;Rear=0; arr[Rear]=item;}
        else{
            Rear=(Rear+1)%Maxsize;
            arr[Rear]=item;
        }


    }
    int Delete(){ int x;
        if (IsEmpty()){cout<<"Queue Underflow"; return NULL;}
        if(Front==Rear){x=arr[Front]; Front=Rear=-1; return x;}  //only one item was there

         x=arr[Front];
         Front=(Front+1)%Maxsize;
                return x;
    }

};

int main()
{

    Queue q;
    q.Insert(10);
    q.Insert(20);
    q.Insert(30);
    q.Insert(40);
    q.Insert(50);

    cout<<"\n"<<q.Delete();
    cout<<"\n"<<q.Delete();
    q.Insert(60);

   }

