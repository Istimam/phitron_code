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
void insert_at_tail(Node *&head,Node *&tail, int v)
{
    // Dynamic node created
    Node* newNode = new Node(v);
    //exception case head==tail
    // Node* tmp = head;
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        // return;
    }
    // there exists more than one node
    // means head and tail are different node
    // while (tmp->next != NULL) // O(n)
    // {
    //     tmp = tmp->next;
    // }
    //tmp ekhon last node e
    
    // This means O(1) complexity
    tail->next = newNode;
    tail = newNode;
}
void print_reverse_linked_list(Node *&head)
{
    Node *tmp = head;
    if(tmp==NULL) return;
    print_reverse_linked_list(tmp->next);
    cout<<tmp->val<<" ";
}
void print_linked_list(Node *head)
{
    Node*tmp=head;
    cout<<endl;
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
    Node* tail = NULL;
    while (true)
    {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }
    print_reverse_linked_list(head);
    print_linked_list(head);
    return 0;
}