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
int check(ListNode *head,ListNode *head1)
{
    ListNode *tem = head;
    ListNode *tem1 = head1;
    int flag = 1;
    while(tem != NULL)
    {
        if(tem->val != tem1->val)
        {
            // cout<<"This is check"<<tem->val<<" "<<tem1->val;
            flag = 0;
            break;
        }
        // cout<<endl;
        tem = tem->next;
        tem1 = tem1->next;
    }
    return flag;
}
void reverseNodes(ListNode *&head1,ListNode *cur)
{
    if(cur->next == NULL) 
    {
        head1 = cur;
        return;
    }        
    reverseNodes(head1,cur->next);   
    cur->next->next = cur;
    cur->next = NULL;
}
void print_linked_list(ListNode *head)
{
    ListNode *tem = head;
    while (tem != NULL)
    {
        cout<<tem->val<<" ";  
        tem = tem->next;      
    }
    cout<<endl;
}
void isPalindrome(ListNode* head) {
    ListNode *head1 = head;
    if(head->next == NULL)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        reverseNodes(head1,head1);
    }
    // print_linked_list(head1);

    int flag = check(head,head1);
    if(flag == 0)
    {
        cout<<"NO"<<endl;
    }
    else if(flag == 1)
    {
        cout<<"YES"<<endl;
    }
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
    ListNode *head1 = head;
    reverseNodes(head1,head1);
    print_linked_list(head1);
    print_linked_list(head);
    // check(head,head1);
    // isPalindrome(head);
    return 0;
}