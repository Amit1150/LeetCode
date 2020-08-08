#include <iostream>
#include <string>
#include <vector>
using namespace std;

// todo
bool isIsomorphic(string s, string t)
{
    int chars[122] { 0 };
    const int size = s.size();
    if(size == 0)
        return true;

    for(int i { 0 }; i <= size / 2; i++) {
        if(chars[s[i]] != 0 && chars[s[i]] != t[i])
            return false;

        chars[s[i]] = t[i];

        if(chars[s[size - 1 - i]] != 0 && chars[s[size - 1 - i]] != t[size - 1 - i])
            return false;
        chars[s[size - 1 - i]] = t[size - 1 - i];
    }

    return true;
}
int main()
{
    cout << "ab & aa is Isomorphic: "<< isIsomorphic("ab", "aa") << endl;
    return 0;
}