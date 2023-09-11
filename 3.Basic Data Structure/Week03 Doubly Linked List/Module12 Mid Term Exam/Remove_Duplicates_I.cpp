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
void insert_tail(Node *&head, int v)
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
void sort_nodes(Node *head)
{
    for(Node *i = head; i->next != NULL;i = i->next)
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
void delete_duplicate(Node *head)
{
    if(head == NULL)
    {
        return;
    }
    Node *tem = head;
    while (tem->next != NULL)
    {
        if(tem->val == tem->next->val)
        {
            Node *deleteNode = tem->next;
            tem->next = tem->next->next;
            delete deleteNode;
            // tem = tem->next;
        }        
        else
        {
            tem = tem->next;
        }
    }
        
}
void print_nodes(Node *head)
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
    while (true)
    {
        int v;
        cin>>v;
        if(v == -1)
        {
            break;
        }
        insert_tail(head,v);
    }
    sort_nodes(head);
    // print_nodes(head);
    delete_duplicate(head);
    print_nodes(head);
    return 0;
}