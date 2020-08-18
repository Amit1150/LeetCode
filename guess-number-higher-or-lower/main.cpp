#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define VERSION 3

int guess(int n) {
    if(n > VERSION)
        return -1;
    else if(n < VERSION)
        return 1;
    else
        return 0;
}

int guessNumber(int n) {
        int s = 1;
        while(s <= n) {
            int m = s + (n-s)/2;
            int r = guess(m);
            if(r == 1) {
                s = m+1;
            } else if(r == -1) {
                n = m-1;
            } else {
                return m;
            }
        }
        return s;
    }
    
int main() {
    cout << "guess num: "<< guessNumber(100) << endl;
    return 0;
}