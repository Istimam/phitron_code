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
            if(i->val > j->val)
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
int compare_two_linked_list(Node *head)
{
    int flag = 0; // YES
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if(i->val == j->val)
            {
                flag = 1; // NO
            }
        }
    }
    return flag;
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
    Node *head1 = NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head1,val);
    }
    Node *head2 = NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head2,val);
    }
    // selection_sort(head1);
    // selection_sort(head2);
    int size1 = size_of_linked_List(head1);
    int size2 = size_of_linked_List(head2);
    if(size1 == size2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO" <<endl;
    }
    // print_linked_list(head1);
    // print_linked_list(head2);
    return 0;
}