#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    // Node(int val)
    // {
    //     this->val = val;
    //     this->next = NULL;
    // }
};
int main()
{
    Node a,b;
    /*Value Initialization*/
    a.val = 10;
    b.val = 20;
    /*Link Created*/
    a.next = &b;
    // b.next = NULL;
    /*Print*/
    cout<<a.val<<endl;
    // cout<<(*a.next).val<<endl;
    cout<<a.next->val<<endl;     
    return 0;
}