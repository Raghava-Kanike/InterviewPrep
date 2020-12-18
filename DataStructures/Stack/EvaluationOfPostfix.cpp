//
// Created by raghava on 18/3/18.


#include <iostream>
#include <cmath>
#include<string>
using  namespace std;
class BaseStack
{
protected:
    int top;
    int  const max;
public:
    BaseStack(int max):max(max),top(-1)
    {

    }

    bool  isEmpty()
    {
        return top==-1;
    }
    bool isFull()
    {
        return  top==max-1;
    }
};
template<typename T>
class StackOperations:public BaseStack {
    T *arr;
public:
    StackOperations(int max) : BaseStack(max) {
        arr = new T[max + 1];
    }

    T push(char val) {
        arr[++top] = val;
    }

    T pop() {
        return arr[top--];
    }

    T peek() {
        return arr[top];
    }

    ~StackOperations(){
        delete []arr;
    }


    int precendence(char op)
    {
        switch(op)
        {
            case '+':
            case '-':
                return 1;
            case '*':
            case '/':
                return 2;
            case '^':
                return  3;
            default:
                return  -1;
        }
    }
    void convertIntoPostfix(char *infix,char *target)
    {
        int j=0;
        for(int i=0;infix[i]!=0;i++)
        {
            char ch=infix[i];
            if(isalpha(ch))
                target[j++]=ch;
            else
            {
                if(ch==')')
                {
                    while(this->peek()!='(')
                        target[j++]=this->pop();
                    this->pop();
                }
                else
                {
                    if(!(ch=='('||isEmpty()||this->peek()=='('))
                        while(!isEmpty() && precendence(ch)<=precendence(this->peek()))
                            target[j++]=this->pop();
                    this->push(ch);
                }
            }
        }
        while(!this->isEmpty())
            target[j++]=this->pop();
        target[j]='\0';
    }
    void display(char *target)
    {
        cout<<"output -> "<<target<<'\n';

    }
    int cal(char op,int x,int y)
    {
        switch (op)
        {
            case '+': return x+y;
            case '-': return x-y;
            case '*': return x*y;
            case '/': return x/y;
            case '^': return (int)(pow(x,y));
            default:
                return  -1;

        };


    }
    void Evaluation(char *target)
    {
        for(int i=0;target[i]!='\0';i++)
        {
            char ch=target[i];
            if(isalpha(ch))
            {
                int val;
                cout<<"enter the value for "<<ch<<'\n';
                cin>>val;
                this->push(val);

            }
            else
            {
                int y=this->pop();
                int x=this->pop();
                this->push(cal(ch,x,y));
            }
        }

        cout<<"\n===================\n";
        cout<<"result: "<<(int)this->pop()<<'\n';

    }

};
int main()
{
    char  infix[100]="a+b*c/d+(e-f+g*h/i-j)*k/l-m";
    char target[100];
    cout<<"input -> "<<infix<<'\n';
    StackOperations<char> stk(10);
    stk.convertIntoPostfix(infix,target);
    stk.display(target);
    stk.Evaluation(target);
    return 0;
}
