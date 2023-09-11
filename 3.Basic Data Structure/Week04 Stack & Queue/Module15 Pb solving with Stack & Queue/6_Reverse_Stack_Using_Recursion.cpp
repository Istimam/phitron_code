void reverseStack(stack<int> &s) {
    if(s.empty()) return;
    int x = s.top();
    s.pop();
    reverseStack(s);
    stack<int> tem;
    while(!s.empty())
    {
        tem.push(s.top());
        s.pop();
    }
    tem.push(x);
    while(!tem.empty())
    {
        s.push(tem.top());
        tem.pop();
    }
}