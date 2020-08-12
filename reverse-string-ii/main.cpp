#include <iostream>
#include <string>
#include <vector>
using namespace std;
void rev(string& s)
{
    int n = s.length();
    for(int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }
}

string reverseStr(string s, int k)
{
    int r { 0 };
    int len = (int)s.size();
    if(len == 0 || k == 0)
        return s;

    string output = "";

    string temp = "";
    for(char c : s) {
        if(r < k) {
            temp.push_back(c);
        } else {
            rev(temp);
            output += temp;
            temp = "";
            output.push_back(c);
        }
        r++;
        if(r == 2 * k) {
            r = 0;
        }
    }

    rev(temp);
    output += temp;
    return output;
}
int main()
{
    cout << "HelloWorld: " << reverseStr("HelloWorld", 3) << endl;
    cout << "abcdefg: " << reverseStr("abcdefg", 2) << endl;
    return 0;
}