// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void print_linked_list(Node *head,Node *tail)
// {
//     Node *tmp = head;
//     // while (tmp != NULL)
//     // {
//     //     cout<<tmp->val<<" ";
//     //     tmp = tmp->next;
//     // }
//     // cout<<endl;
//     if(head->next == NULL)
//     {
//         cout<<head->val<<" "<<head->val<<endl;
//     }
//     else
//     {
//         cout<<head->val<<" "<<tail->val<<endl;
//     }
// }
// void insert_tail(Node *&head,Node *&tail,int val)
// {
//     Node *newNode = new Node(val);
//     if(head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         print_linked_list(head,tail);
//         return;
//     }
//     tail->next = newNode;
//     tail = newNode;
//     print_linked_list(head,tail);
// }
// void insert_head(Node *&head,Node *&tail,int val)
// {
//     Node *newNode = new Node(val);
//     Node *temp = head;
//     if(temp == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         print_linked_list(head,tail);
//         return;
//     }

//     newNode->next = temp;
//     head = newNode;
//     print_linked_list(head,tail);
// }
// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     int val;
//     cin>>val;
//     while (val--)
//     {
//         int pos,v;
//         cin>>pos>>v;
//         if(v == 0)
//         {  
//             insert_head(head,tail,v);            
//         }
//         else
//         {
//             insert_tail(head,tail,v);
//         }
//     }
//     return 0;
// }

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
void print_head_tail(Node *&head,Node *&tail)
{
    if(head == tail)
    {
        cout<<head->val<<" "<<tail->val<<endl;
        return;
    }

    cout<<head->val<<" "<<tail->val<<endl;
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
void insert_head(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int op;
    cin>>op;
    while (op--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos==0)
        {
            insert_head(head,tail,val);
            print_head_tail(head,tail);
        }
        else if(pos == 1)
        {
            insert_tail(head,tail,val);
            print_head_tail(head,tail);
        }
    }
    
    return 0;
}