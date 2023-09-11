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
void insert_tail(Node *&head, Node *&tail,int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void duplicate_linked_list(Node *&head,Node *&tail,int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
// void reverse_duplicate(Node *&head,Node *curnt,Node *tail)
// {
//     if(curnt->next == tail->next)
//     {
//         head = curnt;
//         return;
//     }
//     reverse_duplicate(head,curnt->next,tail);
//     Node *tem = head;
//     while (tem->next != NULL)
//     {
//         tem = tem->next;
//     }
//     tem->next = curnt;
//     curnt->next = NULL;
// }
void reverse_duplicate(Node *&head)
{
    Node *prev = NULL;
    Node *current = head;
    Node *nextNode;

    while (current != NULL)
    {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    head = prev;
}

int check_pallindrome(Node *head,Node *head1)
{
    Node *tem = head;
    Node *tem1 = head1;
    int flag = 1;
    while (tem->next != NULL)
    {
        if(tem->val != tem1->val)
        {
            flag = 0;
            return flag;
        }
        tem = tem->next;
        tem1 = tem1->next;
    }
    if(tem->val != tem1->val)
    {
        flag = 0;
        return flag;
    }
    return flag;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v == -1)
        {
            break;
        }
        insert_tail(head,tail,v);
        duplicate_linked_list(head1,tail1,v);
    } 
    reverse_duplicate(head1);
    if(check_pallindrome(head,head1) == 0)    
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}