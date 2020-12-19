//
// Created by raghava on 20/3/20.
//

#include<iostream>
#include <string>
using namespace std;
struct node
{
    int id;
    string name;
    struct node *prev;
    struct node *next;
};
class DoublyLL{

protected:
    struct node *head=NULL;
    struct node *tail=NULL;
    struct node *createNode(int id,string name)
    {
        node *temp=new node;
        temp->id=id;
        temp->name=name;
        temp->prev=NULL;
        temp->next=NULL;
        return temp;
    }
    void insertcommon(node *temp,int id,string name)
    {

        node *newNode=createNode(id,name);
        newNode->prev=temp;
        newNode->next=temp->next;
        temp->next=newNode;
        newNode->next->prev=newNode;
    }

public:
    void append(int id,string name)
    {
        node *newNode=createNode(id,name);
        if(!head)
            head=newNode;
        else
        {
            newNode->prev=tail;
            tail->next = newNode;
        }
        tail=newNode;
    }
    void prepend(int id,string name)
    {
        if(!head)
            append(id,name);
        else
        {
            node *newNode=createNode(id,name);
            newNode->next=head;
            head->prev=newNode;
            head=newNode;

        }
    }
    void insertAfter(int posEle,int id,string name)
    {
        if(!head)
        {
            cout<<"no elements to remove \n";
            exit(0);
        }
        if(!head->next && head->id==posEle)
        {
            append(id,name);
        }
        else
        {
            node *temp=head;
            while(temp->id!=posEle)
                temp=temp->next;
            insertcommon(temp,id,name);
        }

    }
    void insertBefore(int posEle,int id,string name)
    {
        if(!head)
        {
            cout<<"no elements to remove \n";
            exit(0);
        }
        if(!head->next && head->id==posEle)
        {
            prepend(id,name);
        }
        else
        {
            node *temp=head;
            while(temp->next->id!=posEle)
                   temp=temp->next;
            insertcommon(temp,id,name);

        }
    }
    void insertAtPos(int posEle,int id,string name)
    {
        node *temp=head;
        if(!head)
        {
            cout<<"no elements to remove \n";
            exit(0);
        }

        if(!head->next && head->id==posEle)
        {
            node *newNode=createNode(id,name);
            head=newNode;
            free(temp);
        }
        else
        {
            while(temp->next->id!=posEle)
                temp=temp->next;

            node *newNode=createNode(id,name);
            node *temp1=temp->next;
            newNode->prev=temp;
            temp->next=newNode;
            newNode->next=temp1->next;
            temp1->next->prev=newNode;
            free(temp1);
        }

    }

    void list()
    {

        if(head==NULL)
        {
            cout<<"No elements to list\n";
            exit(0);
        }
        node *temp=head;
        while(temp)
        {
            cout<<"-->( "<<temp->id<<", "<<temp->name<<" )";
            temp=temp->next;
        }
    }
    void deleteFirst()
    {
        if(!head)
        {
            cout<<"no elements to delete\n";
            exit(0);
        }
        if(!head->next)
        {
            free(head);
            head=NULL;
        }
        else
        {
            node *temp=head;
            head=head->next;
            head->prev=NULL;
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
        if(!head->next)
        {
            free(head);
            head=NULL;
        }
        else
        {
            node *temp=tail;
            tail=tail->prev;
            tail->next=NULL;
            free(temp);
        }
    }
    void deleteByValue(int id)
    {
        if(!head)
        {
            cout<<"no elements to delete \n";
            exit(0);

        }
        if(!head->next && head->id==id)
        {
            free(head);
            head=NULL;
        }
        else
        {
            node *temp=head;
            while(temp->next->id!=id)
                temp=temp->next;
            node *temp1=temp->next;
            temp->next=temp1->next;
            temp1->next->prev=temp;
        }

    }




};







int main()
{
    DoublyLL dll;
    dll.append(40,"Raghava");
    dll.append(25,"clion");
    dll.append(35,"pycham");
   // dll.list();
    //cout<<"\n=============================prepend================================\n";
    dll.prepend(20,"ds");
    //dll.list();
    //cout<<"\n=============================insertAfter================================\n";
    dll.insertAfter(25,23,"cpp");
    //dll.list();
    //cout<<"\n=============================insertBefore================================\n";
    dll.insertBefore(40,100,"RAM");
    //dll.list();
    //cout<<"\n=============================insertAtPos================================\n";
    dll.insertAtPos(25,500,"swift");
    dll.list();
    dll.deleteFirst();
    cout<<"\n=======================deleteFirst================================\n";
    dll.list();
    cout<<"\n=======================deleteLast================================\n";
    dll.deleteLast();
    dll.list();
    cout<<"\n=======================deletePos================================\n";
    dll.deleteByValue(40);
    dll.list();


    return 0;
}