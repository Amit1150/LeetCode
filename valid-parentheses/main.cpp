#include <iostream>
#include <vector>
using namespace std;

char get_closing_bracket(char c)
{
    char output;
    switch(c) {
    case '(': {
        output = ')';
        break;
    }
    case '{': {
        output = '}';
        break;
    }
    default: {
        output = ']';
        break;
    }
    }
    return output;
}

bool isValid(string s)
{
    vector<char> brackets;
    int index { 0 };
    for(char c : s) {
        if(c == '(' || c == '{' || c == '[') {
            brackets.push_back(c);
            index++;
        } else {
            if(index > 0) {
                char last_char = brackets.at(index - 1);

                if(get_closing_bracket(last_char) != c) {
                    break;
                }
                brackets.pop_back();
                index--;
            } else {
                return false;
            }
        }
    }
    return brackets.size() == 0;
}

int main()
{
    cout << "(): " << isValid("()") <<endl;
    cout << "()[]{}: " << isValid("()[]{}") <<endl;
    cout << "([)]: " << isValid("([)]") <<endl;
    cout << "{[]}: " << isValid("{[]}") <<endl;
    return 0;
}