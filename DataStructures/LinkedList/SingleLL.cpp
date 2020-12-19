/*
//
// Created by raghava on 20/3/20.
//
#include<iostream>
#include<string>
using namespace std;

struct node *head=NULL;
struct node{
    int data;
    struct node *link;
};
class SingleLL{
protected:

    struct node *tail=NULL;
    struct node *createNode(int ele)
    {
        node *temp=new node;
        temp->data=ele;
        temp->link=NULL;
        return temp;
    }

public:


    void append(int ele)
    {
        struct node *newNode=createNode(ele);
        if (!head)
             head=newNode;
        else
            tail->link=newNode;
        tail=newNode;
    }
    void prepend(int ele)
    {
        if(!head)
            append(ele);
        else
        {
            node *newNode=createNode(ele);
            newNode->link=head;
            head=newNode;
        }
    }
    void list()
    {
          if(!head) {
              cout << "\nNo elements to list\n";
              exit(0);
          }
            node *temp=head;
            while(temp)
            {
                cout<<"-->"<<temp->data;
                temp=temp->link;
            }
    }
    void insertAfter(int posEle,int ele)
    {
        node *temp=head;
        if(!head)
        {
            cout<<"no elements in list\n";exit(0);
        }
        else if(!head->link)
            append(ele);
        else
        {
            while(temp->data!=posEle)
                temp=temp->link;
            node *newNode=createNode(ele);
            newNode->link=temp->link;
            temp->link=newNode;

        }

    }

    void insertBefore(int posEle,int ele)
    {
        node *temp=head;
        if(!head)
        { cout<<"no elements in list\n";exit(0); }

        else if(!head->link)
             prepend(ele);
        else
        {
            while(temp->link->data!=posEle)
                temp=temp->link;
            node *newNode=createNode(ele);
            newNode->link=temp->link;
           temp->link=newNode;
        }

    }
    void deleteFirst()
    {
        if(!head)
        {
            cout<<"no elements to delete\n";
            exit(0);
        }
        if(!head->link) {
            free(head);
            head = NULL;
        }
        else
        {
            node *temp=head;
            head=head->link;
            free(temp);

        }
    }
    void deleteLast()
    {
        if(!head)
        {
            cout<<"no elements to delete\n";
            exit(0);
        }
        if(!head->link) {
            free(head);
            head = NULL;
        }
        else
        {
            node *temp=head;
            while(temp->link->link)
                temp=temp->link;
            temp->link=NULL;
            free(tail);

            tail=temp;

        }
    }
    void deleteByValue(int val)
    {

        if(!head)
        {
            cout<<"no elements to delete\n";
            exit(0);
        }
        if(!head->link && head->data==val) {
            free(head);
            head = NULL;
        }
        else
        {
            node *temp=head;
            while(temp->link->data!=val)
                temp=temp->link;
            node *temp1=temp->link;
            temp->link=temp1->link;
            free(temp1);

        }

    }
    struct node *reverseLL(node *cur)
    {
        node *newNode=NULL,*prev=NULL;
        while(cur)
        {
            newNode=cur->link;
            cur->link=prev;    //if head declared as global
            prev=cur;
            cur=newNode;
        }
        return prev;
    }

    */
/*void reverseLL() {

        node *newNode = NULL, *prev = NULL, *temp = head;
        while (temp) {
            newNode = temp->link;
            temp->link = prev;
            prev = temp;
            temp = newNode;
        }
        temp=prev;
        while(temp) {
            cout << "-->" << temp->data;
            temp = temp->link;
        }
    }*//*

};
int main()
{

    SingleLL sll;

    sll.append(10);
    sll.insertAfter(10,20);
    sll.list();
    cout<<"\n=====================\n";
    sll.insertBefore(20,300);
    sll.list();
    cout<<"\n=====================\n";
    sll.prepend(30);
    sll.list();
    cout<<"\n=====================\n";
    sll.insertAfter(30,101);
   // sll.deleteLast();
    sll.list();
    cout<<"\n==========reverse===========\n";
    //sll.deleteByValue(20);
   // head=sll.reverseLL(head); //if struct node *head is declared as global
   head=sll.reverseLL(head);

   sll.list();

    return 0;

}*/
