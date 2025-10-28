#include<iostream>
using namespace std;
class Node{ 
  public:
  int data;
  Node*next;
  

};
int main()
{
  Node*head=NULL;
  // this is first node
      Node*newnode=new Node();
      newnode->data=10;
      newnode->next=head;
      head=newnode;
      // this is second node

      Node*newnode2=new Node();
      newnode->data=20;
      newnode2->next=head;
      head=newnode2;

// going to be second node
Node*newnode3=new Node();
newnode3->data=30;
newnode3->next=head;
head=newnode3;


Node*temp=head;
while(temp!=NULL)
{
  cout<<temp->data<<" ";
  temp=temp->next;
  
}

cout<<"NULL";
return 0;





}