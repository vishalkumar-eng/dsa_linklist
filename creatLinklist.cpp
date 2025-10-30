#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*next;

};
int main()
{
  // creating 3 node;
  Node*first=new Node();
  Node*second=new Node();
  Node*third=new Node();
  Node*forth=new Node();
  Node*fifth=new Node();
  Node*six=new Node();



  // data ko fill kerte hai
  first->data=10;
  second->data=20;
  third->data=30;
  forth->data=40;
  fifth->data=50;
  six->data=60;
    // linked krte hai
        first->next=second;
        second->next=third;
        third->next=forth;
        forth->next=fifth;
        fifth->next=six;
        six->next=NULL;
        Node*head=first;

        Node*temp=head;
        while(temp!=NULL)
        {
          cout<<temp->data<<" ";
          temp=temp->next;
        }
        cout<<"NULL"<<endl;
        // after deleting the linklist we can print the linklist
        Node*dodelete=head;
        head=head->next;
        delete dodelete;


      cout<<"after deleting the element"<<endl;
      temp=head;
      while(temp!=NULL)
      {
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
      }
      cout<<"NULL";
      return 0;
  
}