#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*next;
};


int main()
{
  Node*head=new Node();
  Node*second=new Node();
  Node*third=new Node();

  head->data=1;
  second->data=2;
  third->data=3;
  head->next=second;
  second->next=third;
  third->next=NULL;

      Node*temp=head;
      while(temp!=NULL)
      {
        cout<<temp->data<<" ";
        temp=temp->next;
      }

}