#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool canBangNgoac(string s)
{
    stack<char> myStack;
    bool isCorrect = true;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            myStack.push(s[i]);
        }
        else
        {
            if (myStack.empty())
                return false;

            if (s[i] == '}')
            {
                if (myStack.top() == '{')
                    myStack.pop();
                else
                    isCorrect = false;
            }
            else if (s[i] == ')')
            {
                if (myStack.top() == '(')
                    myStack.pop();
                else
                    isCorrect = false;
            }
            else
            {
                if (myStack.top() == '[')
                    myStack.pop();
                else
                    isCorrect = false;
            }
        }
    }

    if (!myStack.empty())
    {
        isCorrect = false;
    }

    return isCorrect;
}

void enterInput(int n)
{
    string input;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        s.push_back(input);
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (canBangNgoac(s[i]) == true)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    if (n >= 0 && n <= 100)
    {
        enterInput(n);
    }
    
    return 0;
}