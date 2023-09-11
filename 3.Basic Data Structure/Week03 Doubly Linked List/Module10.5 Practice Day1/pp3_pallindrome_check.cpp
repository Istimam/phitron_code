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
int pallindrome_check(Node *head,Node *tail)
{
    Node *i = head;
    Node *j = tail;
    int flag = 1;
    while (i != j && i->next != j)
    {
        if(i->val != j->val)
        {
            flag = 0;
            return flag;
        }
        i = i->next;
        j = j->prev;        
    }
    if(i->val != j->val)
    {
        flag = 0;
    }
    return flag;
}
void print_linked_list(Node *head,Node *tail)
{
    if(pallindrome_check(head,tail) == 0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
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
    pallindrome_check(head,tail);
    print_linked_list(head,tail);  
    return 0;
}