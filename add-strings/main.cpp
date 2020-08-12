#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string addStrings(string num1, string num2)
{
    int n1 = num1.size() - 1;
    long long total { 0 };
    for(char& a : num1) {
        total += pow(10, n1) * (a -48);
        n1--;
    }
    n1 = num2.size() - 1;
    long long temp {0};
    for(char& a : num2) {
        temp += pow(10, n1) * (a-48);
        n1--;
    }
    total += temp;
    return to_string(total);
}
int main()
{
    cout << "127 +123: "<< addStrings("127", "123") << endl;
    cout << "9333852702227987 +85731737104263: "<< addStrings("9333852702227987", "85731737104263") << endl;
    return 0;
}