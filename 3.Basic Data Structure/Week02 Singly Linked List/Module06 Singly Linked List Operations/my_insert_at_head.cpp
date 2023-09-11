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
void insert_at_tail(Node *&head,int v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        cout<<endl<<"Inserted at head."<<endl<<endl;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout<<endl<<"Inserted at Tail."<<endl<<endl;
}
void insert_at_any_position(Node *&head,int pos,int v)
{
    Node* newNode = new Node(v);
    Node* tem = head;
    cout<<endl<<tem->val<<endl;
    for (int i = 1; i <= pos-1; i++)
    {
        tem = tem->next;
    }
    newNode->next = tem->next;
    tem->next = newNode;
    cout<<endl<<endl<<"Inserted at Postion: "<<pos<<endl<<endl;
}
void insert_at_head(Node *&head,int pos,int v)
{
    Node* newNode = new Node(v);
   newNode->next = head;
   head = newNode;
   cout<<endl<<"Inserted at Head"<<endl<<endl;
}
void print_your_linked_list(Node* head)
{
    cout<<endl<<"Your Linked List: ";
    Node* tem = head;
    while (tem != NULL)
    {
        cout<<tem->val<<" ";
        tem = tem->next;
    }
    cout<<endl<<endl;
}
int main()
{
    Node* head = NULL;
    while (true)
    {
        cout<<"Option 1: Inset at tail"<<endl;
        cout<<"Option 2: Inset at any poition"<<endl;
        cout<<"Option 3: Print your Linked List"<<endl;
        cout<<"Option 4: Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Insert the value: ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            int pos;
            int val;
            cout<<"Enter pos: ";
            cin>>pos;
            cout<<endl<<"Enter value: ";
            cin>>val;
            if(pos==0)
            {
                insert_at_head(head,pos,val);
            }
            else
            {
                insert_at_any_position(head,pos,val);
            }
        }
        else if(op==3)
        {
            print_your_linked_list(head);
        }
        else if(op==4)
        {
            break;
        }
    }
    
    return 0;
}