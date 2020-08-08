#include <iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
    while(n > 1) {
        if(n % 2 != 0)
            return false;
        n /= 2;
    }
    return n == 1;
}
int main()
{
    cout << "16 is power of 2: " << isPowerOfTwo(16) << endl;
    cout << "218 is power of 2: " << isPowerOfTwo(218) << endl;
    return 0;
}