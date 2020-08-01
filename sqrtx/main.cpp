#include <iostream>
#include <vector>
#include <string>
using namespace std;
int mySqrt(int x) {
    if(x < 2 ) {
        return x;
    }
    long max = x / 2;
    long min = 0;
    while(max >= min) {
        long mid = min + (max - min) / 2;
        long num = mid * mid;
        if(num > x) {
            max = mid - 1;
        } else if(num < x) {
            min = mid + 1;
        } else {
            return mid;
        }
    }
    return min -1;
}
int main() {
    cout << "sqrt of 1: "<< mySqrt(1) << endl;
    cout << "sqrt of 2: "<< mySqrt(2) << endl;
    cout << "sqrt of 4: "<< mySqrt(4) << endl;
    cout << "sqrt of 8: "<< mySqrt(8) << endl;
    cout << "sqrt of 99: "<< mySqrt(99) << endl;
    cout << "sqrt of 100: "<< mySqrt(100) << endl;
    cout << "sqrt of 102: "<< mySqrt(102) << endl;
    cout << "sqrt of 45: "<< mySqrt(45) << endl;
    return 0;
}