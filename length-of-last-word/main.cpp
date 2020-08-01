#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lengthOfLastWord(string s)
{
    bool reset {false};
    int count = 0;
    for(auto c : s) {
        if(c == ' '){
            reset = true;
        } else {
            count = reset ? 1 : count+1;
            reset = false;
        }
    }
    return count;
}

int main()
{
    cout <<  lengthOfLastWord("Amit Kum") << endl;
    cout <<  lengthOfLastWord("Hello World   ") << endl;
    cout <<  lengthOfLastWord("hello ") << endl;
    cout <<  lengthOfLastWord("hi helo getge") << endl;
    cout <<  lengthOfLastWord("hi helo     ") << endl;
    cout <<  lengthOfLastWord("") << endl;
    return 0;
}