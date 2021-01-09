#include<iostream>

using namespace std;

// tao mot danh sach lien ket don
struct Node
{
    double data;
    Node *next;
};

//tao struct lien ket de quan li node dau tien va node cuoi cung
struct List
{
    Node *Head;
    Node *Tail;
};

//create node
Node *CreateNode( double data)
{
    Node* node = new Node;
    if (node == NULL)
    {
        return NULL;
    }
    node->data = data;
    node->next = NULL;
}

int main()
{
    List lst;
    double data = {12};

    Node *node = CreateNode(data);
    cout << node->data << endl;

    return 0;
}