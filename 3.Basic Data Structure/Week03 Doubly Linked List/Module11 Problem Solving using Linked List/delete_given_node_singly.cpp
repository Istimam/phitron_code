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

void print_linked_list(ListNode *head)
{
    ListNode *tem = head;
    while (tem != NULL)
    {
        // cout<<tem->val<<"-"<<tem<<endl;
        cout<<tem->val<<" ";  
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
    if(head == NULL)
    {
        return 0;
    }
    else
    {
        while (head->val == d)
        {
            head = head->next;
        }
        ListNode* tem = head;
        while (tem->next != NULL)
        {
            if (tem->next->val == d)
            {
                ListNode* del = tem->next;
                tem->next = tem->next->next;
                delete del;
            }
            else if(tem->next->next == NULL && tem->next->val == d)
            {

                tem->next = NULL;
                // break;
            }
            tem = tem->next;
        }
    }
                print_linked_list(head);
    // while (/* condition */)
    // {
    //     /* code */
    // }
    
    return 0;
}