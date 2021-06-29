#include <iostream>
using namespace std;

class Node
{
 public:
  int data;
  Node* link;
};

void push(Node** head_ref, int a)
{
 Node* new_node = new Node();
 new_node->data = a;
 new_node->link = *head_ref;
 *head_ref = new_node;
}

void printlist(Node* head)
{
 Node* tmp = head;
 while(tmp!=NULL)
 {
  cout<<tmp->data<<endl;
  tmp = tmp->link;
 }
}

void mfromend(Node* head, int m)
{
 Node* tmp = head;
 int count = 0;
 while(tmp!=NULL)
 {
  count++;
  tmp = tmp->link;
 }
 if(count<m)
 {
   cout<< "list is smaller than m"<<endl;
   return;
 }
 int n = count-m;
 tmp = head;
 for(int i=0; i<n; i++)
 {
   tmp = tmp->link;
 }
 cout<< m <<" element form last is "<< tmp->data;
}

int main()
{
 Node* head = NULL;
 push(&head,10);
 push(&head,20);
 push(&head,30);
 printlist(head);
 mfromend(head,3);
 return 0;
}  