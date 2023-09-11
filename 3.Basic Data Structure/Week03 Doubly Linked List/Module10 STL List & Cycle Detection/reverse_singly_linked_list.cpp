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
void insert_tail(Node *&head, int v)
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
void print_recursion(Node *&head,Node *curnt)
{
    if(curnt->next == NULL)
    {
        head = curnt;
        return;
    }
    print_recursion(head,curnt->next);
    // Node *tem = head;
    // while (tem->next != NULL)
    // {
    //     tem = tem->next;
    // }
    // tem->next = curnt;
    // curnt->next = NULL;

    /*OR*/
    curnt->next->next = curnt;
    curnt->next = NULL;
}
void print_linked_list(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout<<tem->val<<" ";        
        tem = tem->next;
    }
    cout<<endl;    
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v == -1)
        {
            break;
        }
        insert_tail(head,v);
    }
    print_recursion(head,head);
    print_linked_list(head);
    return 0;
}