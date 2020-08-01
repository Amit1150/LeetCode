#include <iostream>
#include <string>

using namespace std;
int getNextValue(char current, char next)
{
    if(current == 'I' && (next == 'V' || next == 'X')) {
        return next == 'V' ? 5 : 10;
    } else if(current == 'X' && (next == 'L' || next == 'C')) {
        return next == 'L' ? 50 : 100;
    } else if(current == 'C' && (next == 'D' || next == 'M')) {
        return next == 'D' ? 500 : 1000;
    } else {
        return 0;
    }
}

int getNumValue(char c)
{
    int num { 0 };
    switch(c) {
    case 'I': {
        num = 1;
        break;
    }
    case 'V': {
        num = 5;
        break;
    }
    case 'X': {
        num = 10;
        break;
    }
    case 'L': {
        num = 50;
        break;
    }
    case 'C': {
        num = 100;
        break;
    }
    case 'D': {
        num = 500;
        break;
    }
    default: {
        num = 1000;
        break;
    }
    }
    return num;
}

int romanToInt(string s)
{
    int total { 0 };
    size_t size { s.length() };
    int numValue { 0 };
    for(size_t i { 0 }; i < size; i++) {
        char currentChar = s[i];
        numValue = getNumValue(currentChar);
        if(i <= size - 1) {
            int nextValue = getNextValue(currentChar, s[i + 1]);
            if(nextValue > 0) {
                total += (nextValue - numValue);
                i++;
                continue;
            }
        }
        total += numValue;
    }
    return total;
}


int main()
{
    cout<< "LVIII = "<< romanToInt("LVIII") << endl;
    cout<< "MCMXCIV = "<< romanToInt("MCMXCIV") << endl;
    cout<< "IV = "<< romanToInt("IV") << endl;
    return 0;
}