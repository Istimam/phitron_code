#include<bits/stdc++.h>
using namespace std;
class ListNode
{
    public:
        int val;
        ListNode* next;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_to_tail(ListNode *&head,ListNode *&tail,int v)
{
    ListNode *newNode = new ListNode(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
    // print_linked_list(head,tail);
}
void deleteNode(ListNode* node)
{
    ListNode *deleeNode = node->next;
    node->val = node->next->val;
    node->next = node->next->next;
    delete deleeNode;
}
void deleteTail(ListNode *&tail)
{
    // ListNode *deleteNode = tail->next;
    // tail->val = tail->next->val;
    // delete deleteNode;
    tail->next = NULL;
    cout<<tail<<endl;
}
void findNode(ListNode *head,int v)
{
    ListNode* tem = head;
    while (tem->next != NULL)
    {
        if(v == tem->val)
        {
            // if(v == tem->next->next->val)
            // {
            //     deleteTail(tem);
            // }
            deleteNode(tem);
        }        
        tem = tem->next;
    }  
    // if(v == tem->next->val)
    // {
    //     deleteTail(tem);
    // }
}
void print_linked_list(ListNode *head)
{
    ListNode *tem = head;
    while (tem != NULL)
    {
        cout<<tem->val<<"-"<<tem<<endl;
        // cout<<tem->val<<" ";  
        tem = tem->next;      
    }
    cout<<endl;
}
int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;
    while (true)
    {
        int x;
        cin>>x;
        if(x == -1)
        {
            break;
        }        
        insert_to_tail(head,tail,x);
    }
    int d;
    cin>>d;
    // ListNode *del = new ListNode(0xfb0df8);
    // *p = 0xfb0df8;
    // cout<<dele->val<<"-"<<dele<<endl;
    findNode(head,d);
    print_linked_list(head);
    return 0;
}