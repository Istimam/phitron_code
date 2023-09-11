#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int _value)
    {
        this->value = _value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL, *tail = NULL;
    int sizeCount = 0;

    void push(int value)
    {
        sizeCount++;

        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sizeCount--;
        Node *deletedNode = tail;
        tail = tail->prev;

        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;
        delete deletedNode;
    }
    int top()
    {
        return tail->value;
    }
    int size()
    {
        return sizeCount;
    }
    bool empty()
    {
        if (sizeCount == 0)
            return true;
        else
            return false;
    }
};

class myQueue
{
public:
    Node *head = NULL, *tail = NULL;
    int sizeCount = 0;

    void push(int value)
    {
        sizeCount++;
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }

    void pop()
    {
        sizeCount--;
        Node *deletedNode = head;

        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
            delete deletedNode;
            return;
        }

        head->prev = NULL;
        delete deletedNode;
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return sizeCount;
    }
    bool empty()
    {
        if (sizeCount == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    int N, M;
    cin >> N >> M;

    myStack Stack;

    for (int i = 0; i < N; i++)
    {
        int value;
        cin >> value;
        Stack.push(value);
    }
    // cout << Stack.size() << endl;

    // while (!Stack.empty())
    // {
    //     cout << Stack.top() << " ";
    //     Stack.pop();
    // }
    // cout << endl;

    myQueue Queue;
    for (int i = 0; i < M; i++)
    {
        int value;
        cin >> value;
        Queue.push(value);
    }
    // cout << Queue.size() << endl;

    // while (!Queue.empty())
    // {
    //     cout << Queue.front() << " ";
    //     Queue.pop();
    // }
    // cout << endl;

    bool isSame = true;
    if (Stack.size() != Queue.size())
    {
        // cout << "NO" << endl;
        isSame = false;
    }
    else
    {
        while (!Stack.empty())
        {
            if (Stack.top() != Queue.front())
            {
                // cout << "NO" << endl;
                isSame = false;
                break;
            }
            Stack.pop();
            Queue.pop();
        }
    }

    if (isSame)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}