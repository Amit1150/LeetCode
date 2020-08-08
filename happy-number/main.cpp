#include <iostream>
#include <unordered_map>
using namespace std;
bool isHappy(int n)
{
    int sum { 0 };
    while(n > 9) {
        sum = 0;
        while(n > 0) {
            int temp = n % 10;
            sum += (temp * temp);
            n /= 10;
        }
        if(sum == 1)
            return true;
        else
            n = sum;
    }
    return sum == 7 || n == 1 || n == 7;
}
bool isHappy2(int n)
{
    unordered_map<int, bool> set;
    int sum { 0 };
    while(sum != 1) {
        set[n] = true;
        while(n > 0) {
            int temp = n % 10;
            sum += (temp * temp);
            n /= 10;
        }
        if(sum == 1)
            return true;
        else if(set[sum])
            return false;
        else {
            n = sum;
            sum = 0;
        }
    }
    return false;
}
int main()
{
    cout << "19 is happy number: " << isHappy(19) << endl;
    return 0;
}