#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isAnagram(string s, string t)
{
    const int MAX_CHARS = 256;
    int size1 = s.length();
    const int size2 = t.length();
    if(size1 != size2) {
        return false;
    }

    int s_chars[MAX_CHARS] { 0 };
    int t_chars[MAX_CHARS] { 0 };

    while(size1 >= 0) {
        s_chars[s[size1]]++;
        t_chars[t[size1]]++;
        size1--;
    }

    for(int i { 0 }; i < MAX_CHARS; i++) {
        if(s_chars[i] != t_chars[i]) {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << isAnagram("anagram", "nagaram") << endl;
    return 0;
}