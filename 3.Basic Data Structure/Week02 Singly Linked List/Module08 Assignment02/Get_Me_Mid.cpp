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
void insert_tail(Node *&head,int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
}
void selection_sort(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val,j->val);
            }
        }
    }    
}
int size_of_linked_List(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void get_me_mid(Node *&head)
{
    int s = size_of_linked_List(head);
    int mid = (s-1)/2;
    Node *temp = head;
    while (mid--)
    {
        temp = temp->next;
    }

    if(s%2 == 0)
    {
        cout<<temp->val<<" "<<temp->next->val;
    }
    else
    {
        cout<<temp->val;
    }
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,val);
    }
    if(head->next == NULL)
    {
        cout<<head->val;
    }
    else
    {
        selection_sort(head);
        size_of_linked_List(head);
        get_me_mid(head);
    }
    return 0;
}