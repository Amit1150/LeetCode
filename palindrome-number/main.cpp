#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if(x >= 0) {
        long reversed {0};
        int temp = x;
        while(x != 0) {
            reversed = reversed*10 + x%10;
            x /= 10;
        }
        return reversed == temp;
    } else {
        return false;
    }
}
int main() {
    cout<< "123 is pelindrome: "<< isPalindrome(123) << endl;
    cout<< "0 is pelindrome: "<< isPalindrome(0) << endl;
    cout<< "121 is pelindrome: "<< isPalindrome(121) << endl;
    cout<< "-121 is pelindrome: "<< isPalindrome(-121) << endl;
    return 0;
}