// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* next;
//         Node* prev;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// class myStack
// {
//     public:
//         Node *head = NULL;
//         Node *tail = NULL;
//         int sz = 0;
//         void push(int val)
//         {
//             sz++;
//             Node *newNode = new Node(val);
//             if(head == NULL)
//             {
//                 head = newNode;
//                 tail = newNode;
//                 return;
//             }
//             newNode->prev = tail;
//             tail->next = newNode;
//             tail = newNode;
//         }
//         void pop()
//         {
//             if(tail==NULL) 
//             {
//                 return;
//             }
//             Node *deleteNode = tail;
//             tail = tail->prev;
//             if(tail != NULL)
//             {
//                 tail->next = NULL;
//             }
//             delete deleteNode;
//         }
//         int top()
//         {
//             if(sz == 0)
//             {
//                 return -1;
//             }
//             return tail->val;
//         }
//         int size()
//         {
//             return sz;
//         }
//         bool empty()
//         {
//             if(sz==0) 
//                 return true;
//             else 
//                 return false;
//         }
// };
// int main()
// {
//     myStack st;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         st.push(x);
//     }  
//     while (!st.empty())
//     {
//         cout<<st.top()<<" ";
//         st.pop();        
//     }
//     cout<<endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class myStack {
public:
    Node* head;
    Node* tail;
    int sz;

    myStack() {
        head = nullptr;
        tail = nullptr;
        sz = 0;
    }

    void push(int val) {
        sz++;
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop() {
        if (tail == nullptr) {
            return;
        }
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        if (tail != nullptr) {
            tail->next = nullptr;
        }
        else {
            head = nullptr;
        }
        delete deleteNode;
    }

    int top() {
        if (tail == nullptr) {
            cout << "Stack is empty." << endl;
            return -1; // Or any suitable value indicating an empty stack
        }
        return tail->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    }
};

int main() {
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}
