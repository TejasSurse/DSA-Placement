// approach
/*
make a stack characters
when encounters an open bracket in string, push it to the top of stack
when encounter a close braket in stirng , check the top of stack hase corresponding opne bracket of smae type
if yes pop it form the stack other wise return false.

after traversing whole string if stack is empty it means valid prentheses other wise invalid

let sting = s = " {[]}"

*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{')
            {
                // open bracket mili hai
                st.push(ch);
            }
            else
            {
                // close bracket mili haii
                if (!st.empty())
                {
                    // stack nom empty
                    if (ch == ')' && st.top() == '(')
                    {
                        st.pop();
                    }
                    else if (ch == ']' && st.top() == '[')
                    {
                        st.pop();
                    }
                    else if (ch == '}' && st.top() == '{')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    // stack empty
                    return false;
                }
            }
        }
        if (st.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    string s = "()";
    cout << s << endl;
    Solution ss;
    string s1 = "([)]";
    cout << ss.isValid(s) << endl;
    cout << ss.isValid(s1) << endl;
}