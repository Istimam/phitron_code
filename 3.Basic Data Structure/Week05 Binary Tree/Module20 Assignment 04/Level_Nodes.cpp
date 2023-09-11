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
int depth(Node* root)
{
    if(root == NULL) return 0;
    int l = depth(root->Left);
    int r = depth(root->Right);
    return max(l,r)+1;
}
void printNodesAtLevel(Node* root, int level) 
{
    if (root == nullptr)
        return;
    queue<Node*> queue;
    queue.push(root);
    int currentLevel = 0;
    while (!queue.empty()) 
    {
        int nodesCount = queue.size();
        for (int i= 0; i <nodesCount;i++) 
        {
            Node* node = queue.front();
            queue.pop();
            if (currentLevel == level) 
            {
                cout <<node->val<<" ";
            }
            if (node->Left != NULL)
                queue.push(node->Left);
            if (node->Right)
                queue.push(node->Right);
        }
        currentLevel++;
        if (currentLevel > level)
            break;
    }
}
int main()
{
    Node *root = binary_input();
    int level;
    cin>>level;
    int dep = depth(root)-1;
    if(dep >= level)
    {
        printNodesAtLevel(root,level);
        // cout<<"Valid"<<endl;
        // cout<<dep<<endl;
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
    // cout<<level<<" "<<height;
    return 0;
}