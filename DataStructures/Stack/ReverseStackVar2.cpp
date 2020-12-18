//
// Created by raghava on 17/3/18.
//
//
// Created by raghava on 17/3/18.
//
//
// Created by raghava on 17/3/18.
//

#include<iostream>
using  namespace std;
class ReverseStack{
    int max;
    int top,top1;

public:
    string arr[20],arr1[20];
    ReverseStack(int max)
    {
        this->max=max;
        top=-1;
        top1=-1;
        arr1[max];
        arr[max];
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

top++;
        arr[top]=val;


    }

    void pop()
    {
        string val;
        if(isEmpty())
        {
            cout<<"stack underflow";
            exit(0);
        }
        val=arr[top];
        push1(val);
        top--;
        cout<<val<<'\t';
    }
    void pop1()
    {
        string val;
        if(isEmpty1())
        {
            cout<<"stack underflow";
            exit(0);
        }
        val=arr1[top1];

        top1--;
        cout<<"\npopped element-> "<<val<<'\t';
    }

    void push1(string val)
     {
         if(isFull1())
         {
             list1();
             cout<<"stack overfull can't insert "<<val<<'\n';

             exit(0);
         }
         arr1[++top1]=val;

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
    void list1()
    {
        if(isEmpty1())
        {
            cout<<"stack underflow";
            exit(0);
        }
        for(int i=top1;i>=0;i--)
        {
            cout<<arr1[i]<<'\t';
        }

    }
    void peek1()
    {
        if(isEmpty1())
        {
            cout<<"stack underflow";
            exit(0);
        }
        cout<<arr1[top1];
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
    bool isEmpty()
    {
        return top==-1;
    }
    bool isEmpty1()
    {
        return top1==-1;
    }
    bool isFull()
    {
        return top==max-1;
    }
    bool isFull1()
    {
        return top1==max-1;
    }


};



int main()
{
    ReverseStack bs(5);
    //bs.list();
    bs.push("music");
    bs.push("is");
    bs.push("love");
    // bs.list();
    bs.pop();
    bs.pop();
    bs.pop();
    cout<<"\n============================\n";
    bs.list1();
    bs.pop1();
    cout<<"\n============================\n";
    bs.list1();


    return 0;

}

