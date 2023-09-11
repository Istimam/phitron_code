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
void print_recursive_linked_list(Node *head,Node *&tail)
{
    Node *tmp = head;
    if(tmp == NULL) return;
    print_recursive_linked_list(tmp->next,tail);
    cout<<tmp->val<<" ";
}
void insert_tail(Node *&head,Node *&tail,int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // This leads to 2s time 
    // Node *temp = head;
    // while (temp->next != NULL) // Complexity O(n) 
    // {
    //     temp = temp->next;
    // }
    // temp->next = newNode;
    // tail = newNode;

    // This means O(1) complexity
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insert_tail(head,tail,v);
    }  
    print_recursive_linked_list(head,tail);
    return 0;
}