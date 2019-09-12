#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Node
{
public:
  string data;
  Node *next;

    Node(string x)
  {
    data = x;
  }
};

void list_print(string problem);

Node *head;

int main () {

// Initital list

  head = new Node("Tom");
  head->next = new Node("John");
  head->next->next = new Node("Harry");
  head->next->next->next = new Node("Sam");
  list_print("List");

// Problem 5a

  Node *node_ptr = new Node("Bill");
  node_ptr->next = head;
  head = node_ptr;
  list_print("5a");
  
// Problem 5b
  
  node_ptr = new Node("Sue");
  node_ptr->next = head->next->next->next->next;
  head->next->next->next->next = node_ptr;
  list_print("5b");
  
// Problem 5c 
    
  node_ptr = head->next;
  head = node_ptr;
  list_print("5c");
  
// Problem 5d

  head->next->next->next = NULL;
  list_print("5d");
  

  return 0;
}

void list_print(string problem) {
  cout << setw(4) << problem << ": ";
  Node *node_ptr = head;
  while(node_ptr!=NULL)
    {
    cout << setw(5) << left << node_ptr->data << " ";
    node_ptr=node_ptr->next;
    }
  cout << '\n' ;
}
