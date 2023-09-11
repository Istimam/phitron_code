#include <bits/stdc++.h>

using namespace std;

string getMixedColor(char color1, char color2)
{
    if (color1 == 'R' && color2 == 'G')
        return "Y";
    else if (color1 == 'G' && color2 == 'R')
        return "Y";
    else if (color1 == 'R' && color2 == 'B')
        return "P";
    else if (color1 == 'B' && color2 == 'R')
        return "P";
    else if (color1 == 'B' && color2 == 'G')
        return "C";
    else if (color1 == 'G' && color2 == 'B')
        return "C";
    else
        return "";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        string colors;
        cin >> colors;
        // cout << N << " " << colors << endl;

        stack<char> ColorStack;
        for (char c : colors)
        {
            // cout << c << " ";
            if (!ColorStack.empty() && ColorStack.top() == c)
            {
                ColorStack.pop();
            }
            else if (!ColorStack.empty())
            {
                string colorMixing = getMixedColor(c, ColorStack.top());
                // cout << endl
                //      << colorMixing << endl;
                // cout<<colorMixing.empty() << endl;
                if (!colorMixing.empty())
                {
                    // cout << "Top: " << ColorStack.top() << endl;
                    ColorStack.pop();
                    ColorStack.push(colorMixing[0]);
                    // cout << "Mixing Color: " << ColorStack.top() << endl;
                }
                else
                {
                    ColorStack.push(c);
                    // cout<<"Adding Remaining Color: " << ColorStack.top() << endl;
                }
            }
            else
                ColorStack.push(c);
        }
        // cout << endl;

        string finalColors;
        while (!ColorStack.empty())
        {
            finalColors += ColorStack.top();
            ColorStack.pop();
        }

        // cout << "Result: " << finalColors << endl;

        stack<char> StringStack;
        for (char c : finalColors)
        {
            if (!StringStack.empty() && StringStack.top() == c)
            {
                StringStack.pop();
            }
            else
            {
                StringStack.push(c);
            }
        }

        string Res;
        while (!StringStack.empty())
        {
            Res += StringStack.top();
            StringStack.pop();
        }
        cout << Res << endl;
    }
    return 0;
}