#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void doubly_linked_list_insert_general(Node *&head,Node *&prev,Node *&tail,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    tail = newNode;
}
void delete_node(Node *head,int pos)
{
    Node *tem = head;
    // pos--;
    // while (pos--)
    // {
    //     tem = tem->next;
    // }
    // Node *deleteNode = tem;
    // tem->prev->next = tem->next;
    // tem->next->prev = tem->prev;
    // delete deleteNode;
    
    for (int i = 1; i <= pos-1; i++)
    {
        tem = tem->next;        
    }
    Node *deleteNode = tem->next;
    tem->next = tem->next->next;
    tem->next->prev = tem;
    delete deleteNode;
}
void delete_head(Node *&head,Node *&tail)
{
    Node *deleteNode = head;
    head->next->prev = NULL;
    head = head->next;
    delete deleteNode;
    if(head == tail)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
void delete_tail(Node *&head,Node *&tail)
{
    Node *deleteNode = tail;
    tail->prev->next = NULL;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;

}
void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int count_node(Node *head)
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
void print_reverse(Node *tail)
{
    Node *tem = tail;
    while (tem != NULL)
    {
        cout<<tem->val<<" ";
        tem = tem->prev;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *prev = NULL;
    Node *tail = NULL;
    int op;
    cin>>op;
    while (op--)
    {
        int v;
        cin>>v;
        doubly_linked_list_insert_general(head,prev,tail,v);
    }
    int pos = 0;
    cin>>pos;
    if(pos >= count_node(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else if(pos == 1)
    {
        delete_head(head,tail);
    }
    else if(pos == count_node(head))
    {
        delete_tail(head,tail);
    }
    else
    {
        delete_node(head,pos);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}