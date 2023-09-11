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
void print_your_linked_list(Node* head)
{
    Node* tem = head;
    while (tem != NULL)
    {
        cout<<tem->val<<" ";
        tem = tem->next;
    }
    cout<<endl;
}
void insert_at_tail(Node *&head,int v)
{
    Node* newNode = new Node(v);

    if(head==NULL)
    {
        head=newNode;
        // cout<<endl<<"Inserted at head."<<endl<<endl;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    // cout<<endl<<"Inserted at Tail."<<endl<<endl;
}
void insert_at_any_position(Node *&head,int pos,int v)
{
    Node *newNode = new Node(v);
    Node *tem = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tem = tem->next;
        if(tem == NULL)
        {
            cout<<"Invalid"<<endl;
            return;
        }
    }
    newNode->next = tem->next;
    tem->next = newNode;
    print_your_linked_list(head);
    // cout<<endl<<endl<<"Inserted at Postion: "<<pos<<endl<<endl;
}
void insert_at_head(Node *&head,int v)
{
    Node* newNode = new Node(v);
    newNode->next=head;
    head = newNode;
    print_your_linked_list(head);
    // cout<<endl<<"Inserted at Head"<<endl<<endl;
}
int main()
{
    int val;
    Node* head = NULL;
    while (true)
    {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,val);
    }
    int op;
    cin>>op;
    while (op--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos==0)
        {
            insert_at_head(head,val);
        }
        else
        {
            insert_at_any_position(head,pos,val);
        }       
    }
    return 0;
}