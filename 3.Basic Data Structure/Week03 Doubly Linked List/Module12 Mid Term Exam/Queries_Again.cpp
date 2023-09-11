// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* next;
//         Node* prev;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// void doubly_linked_list_insert_general(Node *&head,Node *&prev,Node *&tail,int val)
// {
//     Node *newNode = new Node(val);
//     if(head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     newNode->prev = temp;
//     tail = newNode;
// }
// void insert_at_head(Node *&head,Node *&tail,int v)
// {
//     Node *newNode = new Node(v);
//     if(head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     head->prev = newNode;
//     newNode->next = head;
//     head = newNode;
// }
// void insert_at_any_pos(Node *head,int pos,int v)
// {
//     Node *newNode = new Node(v);
//     Node *tem = head;
//     pos--;
//     while (pos--)
//     {
//         tem = tem->next;
//     }
// // check whether we've come to the right node
// // For inserting the new node
//     // cout<<tem->val<<endl; 

//     // tem->next->prev = newNode;
//     // newNode->next = tem->next;
//     // newNode->prev = tem;
//     // tem->next = newNode;

//     // newNode->next = tem->next;     // newNode --> next Node
//     // tem->next = newNode;           // prev Node --> newNode
//     // newNode->next->prev = newNode; // newNode <-- next Node
//     // newNode->prev = tem;           // prev Node <-- newNode

//     /*New Node e address initialization*/
//     newNode->next = tem->next;
//     newNode->prev = tem;

//     /*Connecting the nodes*/
//     newNode->next->prev = newNode;
//     tem->next = newNode;
// }
// void insert_at_tail(Node *&tail,int v)
// {
//     Node *newNode = new Node(v);
//     newNode->prev = tail;
//     tail->next = newNode;
//     tail = newNode;
// }
// int count_node(Node *head)
// {
//     Node *temp = head;
//     int cnt = 0;
//     while (temp != NULL)
//     {
//         cnt++;
//         temp = temp->next;
//     }
//     return cnt;
// }
// void print_normal(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }
// void print_reverse(Node *tail)
// {
//     Node *tem = tail;
//     while (tem != NULL)
//     {
//         cout<<tem->val<<" ";
//         tem = tem->prev;
//     }
//     cout<<endl;
// }
// int main()
// {
//     Node *head = NULL;
//     Node *prev = NULL;
//     Node *tail = NULL;
//     int op;
//     cin>>op;
//     while (op--)
//     {    
//         int size = count_node(head); 
//         int pos=0,val=0;
//         cin>>pos>>val;
//         if(pos > size)
//         {
//             cout<<"Invlid Index"<<endl;
//         }
//         else if(pos == 0)
//         {
//             insert_at_head(head,tail,val);
//         }
//         else if(pos == size)
//         {
//             insert_at_tail(tail,val);
//         }
//         else 
//         {
//             insert_at_any_pos(head,pos,val);
//         }
//     }    
//     print_normal(head);
//     print_reverse(tail);
//     return 0;
// }

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
void insert_at_head(Node *&head,Node *&tail,int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void insert_at_any_pos(Node *head,int pos,int v)
{
    Node *newNode = new Node(v);
    Node *tem = head;
    pos--;
    while (pos--)
    {
        tem = tem->next;
    }
    
    newNode->next = tem->next;
    newNode->prev = tem;
    tem->next->prev = newNode;
    tem->next = newNode;
}
void insert_at_tail(Node *&head,Node *&tail,int v)
{
    Node *newNode = new Node(v);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
int count_node(Node *head)
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
void print_normal(Node *head)
{
    Node *temp = head;
    cout<<"L -> ";
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void print_reverse(Node *tail)
{
    Node *tem = tail;
    cout<<"R -> ";
    while (tem != NULL)
    {
        cout<<tem->val<<" ";
        tem = tem->prev;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int op;
    cin>>op;
    while (op--)
    {
        int pos = 0,v = 0;
        cin>>pos>>v;
        if(pos == 0)
        {
            insert_at_head(head,tail,v);
            print_normal(head);
            print_reverse(tail);
        }
        else if(pos > count_node(head))
        {
            cout<<"Invalid"<<endl;
        }
        else if(pos == count_node(head))
        {
            insert_at_tail(head,tail,v);
            print_normal(head);
            print_reverse(tail);
        }
        else
        {
            insert_at_any_pos(head,pos,v);
            print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}
