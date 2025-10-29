#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node * next;
};
int main()
{
  Node *head=NULL;
  Node *temp;
  Node *newNode;

// first node creat karte hai
newNode=new Node();
newNode->data=10;
newNode->next=NULL;
head=newNode;

// second node craet karte hai
newNode=new Node();
newNode->data=20;
newNode->next=NULL;
head=newNode;

temp=head;
while(temp->next!=NULL)
{
  temp=temp->next;
}
temp->next=newNode;

// teesara node banate h
newNode=new Node();
newNode->data=30;
newNode->next=NULL;



temp=head;
while(temp->next!=NULL)
{
  temp=temp->next;

}
temp->next=newNode;

// print karte hai
temp=head;
while(temp!=NULL)
{
  cout<<temp->data<<" ";
  temp=temp->next;
}

}