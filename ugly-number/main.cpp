#include <iostream>
using namespace std;
bool isUgly(int num)
{
    if(num <= 0)
        return false;

    while(num % 2 == 0)
        num /= 2;

    while(num % 3 == 0)
        num /= 3;

    while(num % 5 == 0)
        num /= 5;

    return num == 1;
}

bool isUglyRecursive(int num)
{
    if(num == 0)
        return false;
    else if(num > 0 && num <= 5)
        return true;

    return (num % 2 == 0 && isUgly(num / 2)) || 
           (num % 3 == 0 && isUgly(num / 3)) || 
           (num % 5 == 0 && isUgly(num / 5));

    return false;
}
int main()
{
    cout << "123456 is ugly: "<< isUgly(123456) << endl;
    cout << "3457 is ugly: "<< isUgly(3457) << endl;
    cout << "8 is ugly: "<< isUgly(8) << endl;
    cout << "--------Recursive-----" << endl;
    cout << "123456 is ugly: "<< isUglyRecursive(123456) << endl;
    cout << "3457 is ugly: "<< isUglyRecursive(3457) << endl;
    cout << "8 is ugly: "<< isUglyRecursive(8) << endl;
    return 0;
}