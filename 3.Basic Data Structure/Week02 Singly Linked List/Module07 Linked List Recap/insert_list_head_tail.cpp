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
void print_linked_list(Node *&head,Node *&tail)
{
    Node *temp = head;
    if(temp->next == NULL)
    {
        cout<<"head and tail same"<<temp->val<<" "<<tail->val<<endl;
        return;
    }
    else
    {
        cout<<temp->val<<" "<<tail->val<<endl;
    }
}
void insert_in_between_head_tail(Node *head,Node *tail,int pos,int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp;
    temp = newNode;
    print_linked_list(head,tail);
}
void insert_to_tail(Node *&head,Node *&tail,int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
    print_linked_list(head,tail);
}
void insert_head(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    newNode->next = temp;
    head = newNode;
    print_linked_list(head,tail);
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int op;
    cin>>op;
    while (op--)
    {
        int pos=0,value=0;
        cin>>pos>>value;
        if(pos==0)
        {
            insert_head(head,tail,value);
        }
        else if(pos==1)
        {
            insert_to_tail(head,tail,value);
        }
        else
        {
            insert_in_between_head_tail(head,tail,pos,value);
        }
    }
    
    return 0;
}