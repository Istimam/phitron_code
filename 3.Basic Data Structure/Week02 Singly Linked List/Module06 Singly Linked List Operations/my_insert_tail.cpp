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
void insert_at_tail(Node *&head,int v)
{
    Node* newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{
    Node* tmp = head;
    cout<<"This is your Linked List: ";
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
}
int main()
{

    Node* head = NULL;
    while (true)
    {
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Print Linked Lists"<<endl;
        cout<<"Option 3: Terminate"<<endl;
        int t;
        cin>>t;
        if(t==1)
        {
            cout<<"Please Enter Value: ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(t==2)
        {
            print_linked_list(head);
        }
        else if(t==3)
        {
            break;
        }
    }
    return 0;
}