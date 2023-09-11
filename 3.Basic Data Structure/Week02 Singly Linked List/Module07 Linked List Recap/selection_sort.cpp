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
void selection_sort(Node *head)
{
        /*Selection Sort*/ // O(NlogN)
    // for (int i = 1; i <= size; i++)
    for(Node *i = head ; i->next != NULL ; i = i->next)
    {
        // for (int j = i+1; j <= size; i++)
        for(Node *j = i->next ; j != NULL ; j = j->next)
        {
            // if(a[i]>a[j])
            if(i->val > j->val)
            {
                // swap(a[i],a[j]);
                swap(i->val,j->val);
            }
        }
        
    }
    
}
void insert_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;                 
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true) // O(n)
    {
        cin>>val;
        if(val==-1)
        {  
            break;         
        }
        insert_tail(head,tail,val); // O(1)
    }
    selection_sort(head);
    print_linked_list(head);
    return 0;
}