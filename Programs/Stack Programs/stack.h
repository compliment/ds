template <class T,int Maxsize>
class Stack
{
   T arr[Maxsize];
   int top;
public:
    Stack(){top=-1;}
    bool IsEmpty(){ return top==-1;}
    bool IsFull(){return top==Maxsize-1;}
    void Push(T item){
        if (IsFull()) {cout<<"Stack Overflow";return;}
        arr[++top]=item;
    }
    T Pop(){
        if (IsEmpty()){ cout<<"Stack Underflow";return -99;}
        return (arr[top--]);
    }

};

