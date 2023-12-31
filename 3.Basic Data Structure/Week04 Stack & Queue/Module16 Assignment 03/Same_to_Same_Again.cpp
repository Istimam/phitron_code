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
            // cout<<val<<" ";
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
            // tail = newNode;
            tail = tail->next;
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

class myQueue
{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        // cout<<val<<" ";
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
        // tail = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if(head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz == 0) return true;
        else return false;
    }
};
int main()
{
    myStack s;
    myQueue q;
    int n,m;
    cin>>n>>m;
    while (n--)
    {
        int x;
        cin>>x;
        s.push(x);
    }

    while(m--)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    if(s.size() != q.size())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int flag = 1;
        while (!s.empty())
        {
            if(s.top() != q.front())
            {
                flag = 0;
                break;
            }         
            s.pop();
            q.pop();   
        }
        if(flag == 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    // while (!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();        
    // }
    // cout<<endl;
    // while (!s.empty())
    // {
    //     cout<<s.top()<<" ";
    //     s.pop();        
    // }
    // cout<<endl;  
    return 0;
}