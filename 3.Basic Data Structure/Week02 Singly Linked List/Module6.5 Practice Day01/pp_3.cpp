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
void link_node_at_tail(Node *&head,int v)
{
    Node* newNode = new Node(v);
    Node *temp = head;
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_list(Node*&head,int cnt)
{
    Node*tmp=head;
    for (int i = 1; i <=cnt/2-1; i++)
    {
        tmp = tmp->next;
    }
    if(cnt%2==1)
    {
        cout<<tmp->next->val<<endl;
    }
    else
    {
    
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
}
int main()
{
    Node* head = NULL;
    int v;
    int cnt = 0;
    while (true)
    {
        cin>>v;
        if(v==-1)
        {break;}
        cnt++;
        link_node_at_tail(head,v);
    }
    print_linked_list(head,cnt);
    // print_linked_list(head);
    // cout<<cnt<<endl;
    return 0;
}