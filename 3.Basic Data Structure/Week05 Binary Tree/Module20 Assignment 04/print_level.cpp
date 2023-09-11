#include <iostream>
#include <queue>

// Binary Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to print nodes at a specific level in the binary tree
void printNodesAtLevel(Node* root, int level) {
    if (root == nullptr)
        return;

    std::queue<Node*> queue;
    queue.push(root);
    int currentLevel = 1;

    while (!queue.empty()) {
        int nodesCount = queue.size();

        // Process all nodes at the current level
        for (int i = 0; i < nodesCount; i++) {
            Node* node = queue.front();
            queue.pop();

            // If the current node is at the desired level, print its value
            if (currentLevel == level) {
                std::cout << node->data << " ";
            }

            // Add the children of the current node to the queue
            if (node->left != nullptr)
                queue.push(node->left);
            if (node->right != nullptr)
                queue.push(node->right);
        }

        // Move to the next level
        currentLevel++;

        // Stop the BFS if the desired level is reached
        if (currentLevel > level)
            break;
    }
}

int main() {
    // Create a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);
    root->right->left->left = new Node(12);
    root->right->left->right = new Node(13);
    root->right->right->left = new Node(14);
    root->right->right->right = new Node(15);

    int level = 3;

    // Print nodes at level 2
    // std::cout << "Nodes at level " << level << ": ";
    printNodesAtLevel(root, level);
    std::cout << std::endl;

    // Clean up memory
    // ...
    
    return 0;
}
