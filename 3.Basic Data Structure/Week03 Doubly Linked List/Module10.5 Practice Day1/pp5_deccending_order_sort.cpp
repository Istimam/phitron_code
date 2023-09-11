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
void create_doubly_link_list(Node *&head,Node *&tail,int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;        
    }
    tem->next = newNode;
    newNode->prev = tem;
    tail = newNode;
}
void sort_ascending(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for(Node *j = i->next; j != NULL; j = j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    
}
void print_linked_list(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout<<tem->val<<" ";
        tem = tem->next;        
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v == -1)
        {
            break;
        }        
        create_doubly_link_list(head,tail,v);
    }
    sort_ascending(head);
    print_linked_list(head);
    return 0;
}