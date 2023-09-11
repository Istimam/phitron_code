#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* Left;
        Node* Right;
    Node(int val)
    {
        this->val = val;
        this->Left = NULL;
        this->Right = NULL;
    }
};
Node* binary_input()
{
    int val;
    cin>>val;
    Node *root;
    if(val == -1) 
        root = NULL;
    else 
        root = new Node(val);
    queue<Node*> q;
    if(root) 
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *parent = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ase
        int l,r;
        cin>>l>>r;
        Node *myLeft;
        Node *myRight;
        if(l==-1) 
            myLeft = NULL;
        else
            myLeft = new Node(l);
        
        if(r==-1)
            myRight = NULL;
        else
            myRight = new Node(r);

        parent->Left = myLeft;
        parent->Right = myRight;
        
        // 3. children gulo ke push koro 
        if(parent->Left)
            q.push(parent->Left);
        if(parent->Right)
            q.push(parent->Right);
    }
    return root;
}
bool search(Node* root,int x)
{
    if(root==NULL) return false;
    if(root->val==x) return true;
    if(x<root->val) 
    {
        return search(root->Left,x);
        // int l = search(root->Left,x);
        // if(l==true) return;
        // else return false;
        
        // return l;
    }
    else
    {
        return search(root->Right,x);
    }
}
int main()
{
    Node *root = binary_input();
    if(search(root,5))
        cout<<"Yes Found"<<endl;
    else
        cout<<"No Not found"<<endl;
    return 0;
}