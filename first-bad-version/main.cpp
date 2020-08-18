#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define BAD_VERSION 4

bool isBadVersion(int version) {
    return version >= BAD_VERSION;
}
int firstBadVersion(int n) {
        int ans;
        int s {1};
        while(s <= n) {
            int m = s + (n-s)/2;
            if(isBadVersion(m)) {
                ans = m;
                n = m-1;
            } else {
                s = m+1;
            }
        }
        return ans;
    }
int main() {
    cout << "first bad version: "<< firstBadVersion(40) << endl;
    return 0;
}