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
void insert_node(Node *&head,int v)
{
    Node *newNode = new Node(v);
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
void accending_sort(Node *&head)
{
    Node *tem = head;
    int flag = 0;
    while (tem->next != NULL)
    {
        int m = tem->val;
        int n = tem->next->val;
        if(m>n)
        {
            flag = 1;
            break;
        }
        tem = tem->next;
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
int main()
{
    int op;
    Node *head = NULL;
    while (true)
    {
        cin>>op;
        if(op==-1) break;
        insert_node(head,op);
    }
    accending_sort(head);
    return 0;
}