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
void insert_at_tail(Node *&head, int v)
{
    // Dynamic node created
    Node* newNode = new Node(v);
    //exception case head==tail
    Node* tmp = head;
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    // there exists more than one node
    // means head and tail are different node
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    //tmp ekhon last node e
    tmp->next = newNode;
}
int main()
{
    int v;
    int cnt=0;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}