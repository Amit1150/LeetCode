#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
    if(strs.size() == 0)
        return "";
    string output { strs[0] };
    size_t maxLen { output.length() };
    for(auto s : strs) {
        int start { 0 };
        while(start < maxLen) {
            if(output[start] == s[start]) {
                start++;
            } else {
                maxLen = start;
            }
        }
    }
    return output.substr(0, maxLen);
}

int main()
{
    vector<string> s1 {"flower","flow","flight"};
    cout<< "s1 output is: "<< longestCommonPrefix(s1) << endl;
    
    vector<string> s2 {"dog","racecar","car"};
    cout<< "s2 output is: "<< longestCommonPrefix(s2) << endl;
    
    vector<string> s3 {"Amit"};
    cout<< "s3 output is: "<< longestCommonPrefix(s3) << endl;
    return 0;
}