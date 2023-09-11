#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string addresess;
        Node* next;
        Node* prev;
    Node(string addresess)
    {
        this->addresess = addresess;
        this->next = NULL;
        this->prev = NULL;
    }
};
void push_back(Node *&head, Node *&tail, string addresses)
{
    Node *newNode = new Node(addresses);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int finding_address(Node *head,Node *&curret_address,string word)
{
    Node *tem = head;
    int times = 0;
    while (tem != NULL)
    {
        if(tem->addresess == word)
        {
            curret_address = tem;
            break;
        }
        times++;
        tem = tem->next;        
    }
    return times;
}
int counting_nodes(Node *head)
{
    Node *tem = head;
    int cnt=0;
    while (tem != NULL)
    {
        cnt++;
        tem = tem->next;        
    }
    // cout<<cnt<<endl;
    return cnt;
}
void print_next_address(Node *&currenAddress)
{
    if(currenAddress->next == NULL)
    {
        cout<<"Not Available"<<endl;
    }
    else
    {
        cout<<currenAddress->next->addresess<<endl;
        currenAddress = currenAddress->next;
    }
}
void print_current_addresss(Node *&currentAddress)
{
    if(currentAddress == NULL)
    {
        cout<<"Not Available"<<endl;
    }
    else
    {
        cout<<currentAddress->addresess<<endl;
    }
}
void print_prev_address(Node *&currenAddress)
{
    if(currenAddress->prev == NULL)
    {
        cout<<"Not Available"<<endl;
    }
    else
    {
        cout<<currenAddress->prev->addresess<<endl;
        currenAddress = currenAddress->prev;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *current_address = NULL;
    while (true)
    {
        string addresses;
        cin>>addresses;
        if(addresses == "end")
        {
            break;
        }
        push_back(head,tail,addresses);
    }
    int testcase;
    cin>>testcase;
    cin.ignore();
    while (testcase--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        while (ss>>word)
        {
            if(word == "visit")
            {
                ss>>word;
                int times = finding_address(head,current_address,word);
                if(times == counting_nodes(head))
                {
                    cout<<"Not Available"<<endl;
                }
                else
                {
                    cout<<current_address->addresess<<endl;
                }
                // print_current_addresss(current_address);
            }
            else if(word == "next")
            {
                print_next_address(current_address);
            }
            else if(word == "prev")
            {
                print_prev_address(current_address);
            }
        }         
    }
    // counting_nodes(head);
    return 0;
}