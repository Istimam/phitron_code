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
class myStack
{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;
        void push(int val)
        {
            sz++;
            Node *newNode = new Node(val);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        void pop()
        {
            sz--;
            Node *deleteNode = tail;
            tail = tail->prev;
            if(tail==NULL) 
            {
                head = NULL;
            }
            else
            {
                tail->next = NULL;
            }
            delete deleteNode;
        }
        int top()
        {
            return tail->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(sz==0) 
                return true;
            else 
                return false;
        }
};
int main()
{
    myStack st1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st1.push(x);
    }  
    myStack st2;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        st2.push(x);
    }  
    // cout<<st1.sz<<" "<<st2.sz<<endl;
    if(st1.sz != st2.sz)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int flag = 1;
        while (!st1.empty())
        {
            if(st1.top() != st2.top())
            {
                // cout<<"NO"<<endl;
                flag = 0;
                break;
            }
            st1.pop();
            st2.pop();
        }
        if(flag == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
        
    // }
    // while (!st1.empty())
    // {
    //     cout<<st1.top()<<" ";
    //     st1.pop();        
    // }
    // cout<<endl;
    // while (!st2.empty())
    // {
    //     cout<<st2.top()<<" ";
    //     st2.pop();        
    // }
    // cout<<endl;
    
    return 0;
}