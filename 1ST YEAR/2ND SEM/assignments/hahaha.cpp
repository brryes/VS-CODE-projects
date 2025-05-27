#include <iostream>

using namespace std;

struct Node {

                int data;                              

                Node *next; };

int main()

{   Node *p;

    p = new Node;

    p -> data = 214;

    p -> next = NULL;

    cout << "Data " << p->data << endl ;

    return 0;

}