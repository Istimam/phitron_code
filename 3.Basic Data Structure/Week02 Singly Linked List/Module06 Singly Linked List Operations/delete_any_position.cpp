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
void delete_any_position(Node *head,int pos)
{
    Node* tem = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tem = tem->next;
    }
    Node* deleteNode = tem->next;
    tem->next = tem->next->next;
    delete deleteNode;
    cout<<endl<<"Deleted from the position: "<<pos<<endl;
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
        cout<<"Option 3: Delete at any poition"<<endl;
        cout<<"Option 4: Print your Linked List"<<endl;
        cout<<"Option 5: Terminate"<<endl;
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
            cout<<"Enter pos: ";
            int pos;
            cin>>pos;
            cout<<endl<<"Enter value: ";
            int val;
            cin>>val;
            insert_at_any_position(head,pos,val);
        }
        else if(op==3)
        {
            int pos;
            cout<<"Enter the postion: ";
            cin>>pos;
            delete_any_position(head,pos);
        }
        else if(op==4)
        {
            print_your_linked_list(head);
        }
        else if(op==5)
        {
            break;
        }
    }
    
    return 0;
}