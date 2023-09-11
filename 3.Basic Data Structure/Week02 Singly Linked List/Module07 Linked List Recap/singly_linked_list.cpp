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
void print_linked_list(Node *&head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    
}
int main()
{
    Node* a= new Node(2);
    Node* b= new Node(4);

    a->next = b;

    cout<<a->val<<endl;
    cout<<(*a).val<<endl;
    return 0;
}