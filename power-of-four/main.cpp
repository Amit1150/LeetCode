#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
bool isPowerOfFour(int num)
{
    if(num < 1)
        return false;
    double p = log10(num) / log10(4);
    if(p == int(p))
        return true;
    return false;
}
int main()
{
    cout << "64 is power of 4: "<< isPowerOfFour(64) << endl;
    cout << "12 is power of 4: "<< isPowerOfFour(12) << endl;
    return 0;
}