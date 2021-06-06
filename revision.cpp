#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
};

Node* insertatbeg(Node* n, int m){
  Node* nw = NULL;
  nw = new Node();
  nw->data = m;
  nw->next = n;
  n = nw;
  return(n);
};

void insertatend(Node* n, int m){
  Node* nw = NULL;
  nw = new Node();
  nw->data = m;
  while(n->next != NULL){
    n = n->next;
  }
  n->next = nw;
} 

void printlist(Node* n){
  while(n!=NULL){
     cout << n->data ; 
     n = n->next;
  }
};

main(){
  Node* head = NULL;
  Node* second = NULL;
  Node* third = NULL;
  
  head = new Node();
  second = new Node();
  third = new Node();

  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;
  
  insertatend(head,5);
  head = insertatbeg(head, 4);
  printlist(head);

return 0;
}