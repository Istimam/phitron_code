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
void insert_at_tail(Node *&head, int v)
{
    // Dynamic node created
    Node* newNode = new Node(v);
    //exception case head==tail
    Node* tmp = head;
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    // there exists more than one node
    // means head and tail are different node
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    //tmp ekhon last node e
    tmp->next = newNode;
}
void print_linked_list(Node* head)
{
    cout<<endl;
    cout<<"Your Linked List: ";
    Node*tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
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
    print_linked_list(head);
    return 0;
}