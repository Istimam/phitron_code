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
void tail_insert(Node *&head,int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
int count_nodes(Node *head)
{
    Node *temp = head;
    int cnt=0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
// int mid_linked_list(Node *head,int cnt)
// {
//     int nodes = count_nodes(head);
//     int mid = nodes/2;    
// }
void print_mid(Node *head)
{
    if(head->next == NULL)
    {
        cout<<head->val<<endl;
        return;
    }
    int count = count_nodes(head);
    int mid = count/2;
    mid--;
    Node *tem = head;
    while (mid--)
    {
        tem = tem->next;
    }
    if(count%2 == 0)
    {
        cout<<tem->val<<" "<<tem->next->val<<endl;
    }
    else
    {
        cout<<tem->next->val;
    }
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v==-1)
        {
            break;
        }
        tail_insert(head,v);
    }
    print_mid(head);
    return 0;
}