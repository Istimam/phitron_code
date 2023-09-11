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
    Node *newNode = new Node(v);
    Node *tem = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tem = tem->next;
        if(tem == NULL)
        {
            cout<<endl<<"Invalid Index"<<endl;
            return;
        }
    }
    newNode->next = tem->next;
    tem->next = newNode;
    cout<<endl<<endl<<"Inserted at Postion: "<<pos<<endl<<endl;
}
void insert_at_head(Node *&head,int v)
{
    Node* newNode = new Node(v);
    newNode->next=head;
    head = newNode;
    cout<<endl<<"Inserted at Head"<<endl<<endl;
}
void delete_any_position(Node *head,int pos)
{   
    Node* tem = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tem = tem->next;
        if(tem == NULL)
        {
            cout<<endl<<"Invalid Index"<<endl;
            return;
        }
    }
    if(tem->next == NULL)
    {
        cout<<"Invalid Index"<<endl;
    }    
    Node* deleteNode = tem->next;
    tem->next = tem->next->next;
    delete deleteNode;
    cout<<endl<<"Deleted from the position: "<<pos<<endl;
}
void delete_head(Node *&head)
{
    if(head==NULL)
    {
        cout<<"Head is not Available"<<endl<<endl;
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout<<endl<<"Deleted Head"<<endl;   
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
        cout<<"Option 1: Insert at tail"<<endl; // done
        cout<<"Option 2: Insert at head"<<endl; // done
        cout<<"Option 3: Insert at any poition"<<endl; // done
        cout<<"Option 4: Delete at any poition"<<endl; // done
        cout<<"Option 5: Delete head"<<endl; // done
        cout<<"Option 6: Print your Linked List"<<endl; // done
        cout<<"Option 7: Terminate"<<endl;
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
            int v;
            cout<<"Enter value: ";
            cin>>v;
            insert_at_head(head,v);
        }
        else if(op==3)
        {
            int pos,v;
            cout<<"Enter Positon:";
            cin>>pos;
            cout<<"Enter Value: ";
            cin>>v;
            if(pos==0)
            {
                insert_at_head(head,v);
            }
            else
            {
                insert_at_any_position(head,pos,v);
            }
        }
        else if(op==4)
        {
            int pos;
            cout<<"Enter the postion: ";
            cin>>pos;
            if(pos==0)
            {
                delete_head(head);
            }
            else
            {
                delete_any_position(head,pos);
            }
        }
        else if(op==5)
        {
            delete_head(head);
        }
        else if(op==6)
        {
            print_your_linked_list(head);
        }
        else if(op==7)
        {
            break;
        }
    }
    
    return 0;
}