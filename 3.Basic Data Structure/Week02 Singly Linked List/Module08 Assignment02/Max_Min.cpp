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
void insert_tail(Node *&head,int v)
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
void selection_sort(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
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
void print_linked_list(Node *head)
{
    Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    cout<<head->val<<" "<<tem->val;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,val);
    }
    if(head->next == NULL)
    {
        cout<<head->val<<" "<<head->val;
    }
    else
    {
        selection_sort(head);
        print_linked_list(head);
    }
    return 0;
}