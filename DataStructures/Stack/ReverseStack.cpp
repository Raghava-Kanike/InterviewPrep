//
// Created by raghava on 17/3/18.
//
//
// Created by raghava on 17/3/18.
//

#include<iostream>
using  namespace std;
class Stack{

public:
    int max;
    int top;
    string arr[20];
    Stack(int max)
    {
        this->max=max;
        top=-1;
        arr[max];

    }
    bool isEmpty()
    {
        return top==-1;
    }
    bool isFull()
    {
        return top==max-1;
    }


};
class ReverseStack : public  Stack{


public:

    ReverseStack(int max):Stack(int(max))
    {


    }

    void push(string val)
    {
        if(isFull())
        {
            list();
            cout<<"stack overfull can't insert "<<val<<'\n';

            exit(0);
        }
        arr[++top]=val;
        cout<<arr[top]<<'\t';


    }

    void pop()
    {
        string val;
        if(isEmpty())
        {
            cout<<"stack underflow";
            exit(0);
        }
        val=arr[top--];

        cout<<val<<'\t';
    }

    void list()
    {
        if(isEmpty())
        {
            cout<<"stack underflow";
            exit(0);
        }
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<'\t';
        }

    }
    void peek()
    {
        if(isEmpty())
        {
            cout<<"stack underflow";
            exit(0);
        }
        cout<<arr[top];
    }


};



int main()
{
    ReverseStack bs(5);
    //bs.list();
    bs.push("music");
    bs.push("is");
    bs.push("love");
    cout<<"\n============================\n";
    bs.pop();
    bs.pop();
    bs.pop();

    return 0;

}
