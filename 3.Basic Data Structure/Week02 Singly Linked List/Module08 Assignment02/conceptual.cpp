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
    // while (tmp->next != NULL)
    // {
    //     tmp = tmp->next;
    // }
    // //tmp ekhon last node e
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
int countLength(Node *& head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void findMid(Node *&head)
{
    int size = countLength(head);
    int mid = (size+1)/2;
    Node *temp = head;
    for(int i=0; i<mid-1;i++)
    {
        temp = temp->next;
    }
    if(size % 2 ==0)
    {
        cout<<temp->val<<" "<<temp->next->val<<endl;
    }
    else
    {
        cout<<temp->val<<endl;
    }
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
    int size = countLength(head);
    findMid(head);
    return 0;
}