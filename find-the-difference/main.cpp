#include <iostream>
#include <string>
using namespace std;
char findTheDifference(string s, string t) {
        int seen[123] {0};
        char output;
        for(auto &c: s)
            seen[c]++;
        
        for(auto &c: t)
            if(seen[c] == 0)
                return c;
            else
                seen[c]--;
        
        return output;
    }
int main() {
    cout << "abcd & abced: "<< findTheDifference("abcd", "abced") << endl;
    return 0;
}