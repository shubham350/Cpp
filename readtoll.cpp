#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

class Node {
  public:
  int data[2];
  Node* next;
};

void printlist(Node* tmp){
  if (tmp == NULL){
   cout << "list is empty";
  }
  else{
    while(tmp != NULL){
      cout << tmp-> data[0] << " ";
      cout << tmp-> data[1] << endl;
      tmp = tmp->next;
    }
  }
}

void insertatbeg(Node** head_ref, int a, int b){
  Node* new_node = new Node();
  new_node->data[0] = a;
  new_node->data[1] = b;
  new_node->next = *head_ref;
  *head_ref = new_node;
}   

int main()
{
  string str;
  string myText;
  vector<string> v;
  vector<float> f;
  ifstream MyReadFile("input1.txt");
  
  while(getline(MyReadFile, myText))
  {
    str = myText;
    stringstream ss(str);
 
    while(ss.good())
    {
       string substr;
       getline(ss, substr,',');
       v.push_back(substr);
    }
  }

  for (size_t i = 0; i < v.size(); i++)
      f.push_back(stof(v[i]));

  for (auto i = f.begin(); i != f.end(); ++i)
        cout << *i << " ";
  
  cout << endl;

  //for( int j=0; j<f.size(); j++)
   //   cout << f[j]<< " ";
  

  Node* head = NULL;

  for(int j=0; j<f.size()/2;j++)
  {
     insertatbeg(&head,f[2*j],f[2*j+1]);
  }
    
  printlist(head);
  return 0;
}