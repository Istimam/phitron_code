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
int countNodes(Node* root)
{
    if(root == NULL) return 0;
    int l = countNodes(root->Left);
    int r = countNodes(root->Right);
    return l+r+1;
}
int maxHeight(Node* root)
{
    if(root == NULL) return 0;
    int l = maxHeight(root->Left);
    int r = maxHeight(root->Right);
    return max(l,r)+1;
}
int main()
{
    Node *root = binary_input();
    int cnt = countNodes(root);
    int height = maxHeight(root);
    int totalNodes = pow(2,height);
    if(totalNodes-1 == cnt)
    {
    // cout<<cnt<<" "<<height<<" "<<totalNodes<<endl;
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}