#include <iostream>
#include <string>
#include <vector>
using namespace std;
string addBinary(string a, string b)
{
    int lenA = a.length() - 1;
    int lenB = b.length() - 1;
    bool carry = false;
    string output = "";
    
    while(lenA >= 0 || lenB >=0){
        char firstChar = '0';
        char secondChar = '0';
        if(lenA >=0) {
            firstChar = a[lenA];
        }
        if(lenB >= 0) {
            secondChar = b[lenB];
        }
        
        if(firstChar == secondChar) {
            if(carry) {
                output = '1' + output;
                carry = firstChar == '1' ? carry : !carry;
            } else {
                output = '0' + output;
                carry = firstChar == '1' ? !carry : carry;
            }
        } else {
            output = carry ? '0' + output : '1' + output;
        }
        
        lenA--;
        lenB--;
    }
    
    return carry ?  '1' + output : output;
}
int main()
{
    cout << addBinary("11", "1") << endl;
    cout << addBinary("1", "111") << endl;
    cout << addBinary("1010", "1011") << endl;
    cout << addBinary("110010", "100") << endl;
    cout << addBinary("100", "110010") << endl;
    return 0;
}