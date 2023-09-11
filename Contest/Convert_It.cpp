#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* BinTree()
{
    int v;
    cin>>v;
    if(v == -1) return NULL;

    Node* root = new Node(v);
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* tem = q.front();
        q.pop();

        cin>>v;
        if(v != -1)
        {
            tem->left = new Node(v);
            q.push(tem->left);
        }

        cin>>v;
        if(v != -1)
        {
            tem->right = new Node(v);
            q.push(tem->right);
        }
    }
    return root;
}
void push(Node* root, int val)
{
    if(!root) return;

    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* tem = q.front();
        q.pop();

        if(!tem->left)
        {
            tem->left = new Node(val);
            return;
        }
        else
        {
            q.push(tem->left);
        }
        if(!tem->right)
        {
            tem->right = new Node(val);
            return;
        }
        else
        {
            q.push(tem->right);
        }
    }
}
void deleteMax(Node* root, )
int main()
{
    Node* root = BinTree(); 
    int t;
    cin>>t;
    while (t--)
    {
        int cm;
        cin>>cm;
        if(cm == 1)
        {
            int val;
            cin>>val;
            push(root,val);
        }
        else if(cm == 2)
        {

        }
    }
     
    return 0;
}