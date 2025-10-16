#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;
int top=-1;
int priority(char c) 
{
    if(c == '(') 
    {
        return 0;
    }
    else if(c == '+' || c == '-') 
    {
        return 1;
    }
    else if(c == '*' || c == '/') 
    {
        return 2;
    }
    else if(c == '^') 
    {
        return 3;
    }
    else 
    {
        return 0;
    }
}

void processExpression(const string& exp) 
{
    stack<char> stack;
    for(int i = 0; i < exp.length(); i++) 
    {
        char c = exp[i];
        if(isalnum(c))
        {
            cout << c;
        }
        else if(c == '(')
        {
            stack.push(c);
        }
        else if(c == ')')
        {
            while(!stack.empty() && stack.top() != '(')
            {
                cout << stack.top();
                stack.pop();
            }
            stack.pop(); // Remove '('
        }
        else 
        {
            while(!stack.empty() && priority(stack.top()) >= priority(c))
            {
                cout << stack.top();
                stack.pop();
            }
            stack.push(c);
        }
    }
    while(!stack.empty())
    {
        cout << stack.top();
        stack.pop();
    }
}
