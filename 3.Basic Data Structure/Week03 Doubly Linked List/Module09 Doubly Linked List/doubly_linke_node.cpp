#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void doubly_linked_list_insert_general(Node *&head,Node *&prev,Node *&tail,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    tail = newNode;
}
void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void print_reverse(Node *tail)
{
    Node *tem = tail;
    while (tem != NULL)
    {
        cout<<tem->val<<" ";
        tem = tem->prev;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *prev = NULL;
    Node *tail = NULL;
    int op;
    cin>>op;
    while (op--)
    {
        int v;
        cin>>v;
        doubly_linked_list_insert_general(head,prev,tail,v);
    }
    print_normal(head);
    print_reverse(tail);
    
    return 0;
}