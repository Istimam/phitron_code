class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        // stack<char> st1,st2;
        for(char c:s)
        {
            if(c=='#')
            {
                if(!st1.empty())
                {
                    st1.pop();
                }
            }
            else
            {
                st1.push(c);
            }
        }
        for(char c:t)
        {
            if(c=='#')
            {
                if(!st2.empty())
                {
                    st2.pop();
                }
            }
            else
            {
                st2.push(c);
            }
        }
        /*Shortcut*/
        if(st1==st2) return true;
        else return false;

        /*Shortcut^2*/
        return st1==st2;

        
        int flag = 1;
        if(st1.size() != st2.size())
        {
            return false;
        }
        else
        {
            while(!st1.empty())
            {
                if(st1.top() != st2.top())
                {
                    flag = 0;
                    break;
                }
                st1.pop();
                st2.pop();
            }
        }
        if(flag == 1)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};