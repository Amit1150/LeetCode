#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool detectCapitalUse(string word)
{
    int count = { 0 };
    for(char &s: word) {
        if(s <= 90) {
            count++;
        }
    }

    if(count == 0 || count == (int)word.size())
        return true;
    else if(count == 1 && word[0] <= 90)
        return true;

    return false;
}

int main()
{
    cout << "ffffffffffffffffffffF: " << detectCapitalUse("fffF") << endl;
    cout << "leetcode: " << detectCapitalUse("leetcode") << endl;
    cout << "USA: " << detectCapitalUse("USA") << endl;
    cout << "Google: " << detectCapitalUse("Google") << endl;
    cout << "USAf: " << detectCapitalUse("USAf") << endl;
    return 0;
}