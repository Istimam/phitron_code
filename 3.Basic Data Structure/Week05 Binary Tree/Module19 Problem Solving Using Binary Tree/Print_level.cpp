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
int nodeLevel(Node* root, int searchedValue)
{
    if(root == NULL) return 0;
    queue<Node*> q;
    int level = 1;
    q.push(root);
    while(!q.empty())
    {
        int nodeCount = q.size();
        for(int i = 0; i < nodeCount; i++)
        {
            Node* tem = q.front();
            q.pop();

            if (tem->val == searchedValue) 
            {
              return level;
            }

            if (tem->Left)
              q.push(tem->Left);
            if (tem->Right)
              q.push(tem->Right);
        }
        level ++;
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        Node *root = binary_input();
        int val;
        cin>>val;
        cout<<nodeLevel(root,val)<<endl;
    }
    return 0;
}