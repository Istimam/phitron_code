#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void sort_decending(Node *head)
{
    for(Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val,j->val);
            }            
        }
        
    }    
}
void tail_insert(Node *&head,int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
}
void print_max(Node *head)
{
    cout<<head->val;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v == -1)
        {
            break;
        }        
        tail_insert(head,v);
    }
    sort_decending(head);
    print_max(head);
    return 0;
}