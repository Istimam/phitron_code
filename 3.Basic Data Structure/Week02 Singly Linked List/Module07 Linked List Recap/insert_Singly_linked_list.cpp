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
int size_of_linked_list(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    cout<<"size of Linked List: "<<cnt<<endl;
    return cnt;
}
void insert_at_any_position(Node *&head,int pos,int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    int size = size_of_linked_list(head);
    if(pos>size)
    {
        cout<<"Invalid Position"<<endl;
    }
    else if(pos == 1)
    {
        newNode->next = temp;
        head = newNode;
        cout<<v<<" Inserted at Head"<<endl;
    }
    else
    {
        for (int i = 1; i < pos-1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void print_linked_list(Node *&head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node* a= new Node(2);
    Node* b= new Node(4);
    Node* c= new Node(6);
    Node* d= new Node(8);
    Node* e= new Node(10);

    Node * head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_linked_list(head);

    int pos,val;
    cin>>pos>>val;
    // cout<<a->val<<endl;
    // cout<<(*a).val<<endl;
    insert_at_any_position(head,pos,val);
    print_linked_list(head);
    size_of_linked_list(head);
    return 0;
}