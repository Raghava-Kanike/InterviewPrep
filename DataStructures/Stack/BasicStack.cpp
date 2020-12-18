//
// Created by raghava on 17/3/18.
//

#include<iostream>
using  namespace std;
class Stack{

public:
    int max;
    int top;
    int arr[20];
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
class BasicStack:public  Stack{


public:

    BasicStack(int max):Stack(int (max))
    {

    }

    void push(int val)
    {
        if(isFull())
        {
            list();
            cout<<"stack overfull can't insert "<<val<<'\n';

            exit(0);
        }
        arr[++top]=val;



    }

    void pop()
    {
        int val;
        if(isEmpty())
        {
            cout<<"stack underflow";
            exit(0);
        }
        val=arr[top];
        top--;
        cout<<"popped  element ->"<<val<<'\n';
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
            cout<<arr[i]<<'\n';
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
    BasicStack bs(5);
    //bs.list();
    bs.push(20);
    bs.push(30);
    bs.push(40);
    bs.push(50);
    bs.push(60);
    bs.push(70);
    bs.list();
    bs.peek();

    return 0;

}
