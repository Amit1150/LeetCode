#include <iostream>
using namespace std;
int reverse(int x) {
    int output {0};
    int temp{0};
    
    while(x != 0) {
        temp = x%10;
        if( output > INT_MAX/10 || (output == INT_MAX / 10 && temp > 7)) return 0;
        if( output < INT_MIN/10 || (output == INT_MIN / 10 && temp < -8)) return 0;
        x /= 10;
        output = temp +  output*10;
    }
    
    return output;
    }
    
int main() {
    cout << "revers of 123 is "<< reverse(123) << endl;
    cout << "revers of -123 is "<< reverse(-123) << endl;
    cout << "revers of 0 is "<< reverse(0) << endl;
    return 0;
}