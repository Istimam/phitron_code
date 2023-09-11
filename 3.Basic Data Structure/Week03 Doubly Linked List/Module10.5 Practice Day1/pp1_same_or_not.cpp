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
    tail = newNode;
}
int count_nodes(Node *head)
{
    Node *tem = head;
    int cnt = 0;
    while (tem != NULL)
    {
        cnt++;
        tem = tem->next;        
    }
    return cnt;
}
void print_linked_list(Node *head1,Node *head2)
{

    Node *j = head2;
    int flag = 1;
    for(Node *i = head1; i != NULL; i = i->next)
    {
        if(i->val != j->val)
        {
            flag = 0;
            break;
        }
        j = j->next;
    }
    if(flag == 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v == -1)
        {
            break;
        }        
        create_doubly_link_list(head1,tail1,v);
    }
    int nodes1 = count_nodes(head1);
    // print_linked_list(head1);
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v == -1)
        {
            break;
        }        
        create_doubly_link_list(head2,tail2,v);
    }
    int nodes2 = count_nodes(head2);
    if(nodes1 != nodes2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        print_linked_list(head1,head2);
    }    
    return 0;
}