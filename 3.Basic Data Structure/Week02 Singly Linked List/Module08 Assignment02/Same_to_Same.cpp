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
int compare_two_linked_list(Node *head1,Node *head2)
{
    int s1 = size_of_linked_List(head1);
    int s2 = size_of_linked_List(head2);
    if(s1==s2)
    {
        int flag = 0; // YES
        Node *j = head2; 
        for (Node *i = head1; i != NULL; i = i->next)
        {
            if(i->val != j->val)
            {
                flag = 1; // NO
            }
            j = j->next;
        }
        return flag;
    }
    else
    {
        return 1;
    }
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
    int flag = compare_two_linked_list(head1,head2);
    if(flag == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO" <<endl;
    }
    return 0;
}