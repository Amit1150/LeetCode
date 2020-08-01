#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s){
    int romans[128];
    romans['I'] = 1;
    romans['V'] = 5;
    romans['X'] = 10;
    romans['L'] = 50;
    romans['C'] = 100;
    romans['D'] = 500;
    romans['M'] = 1000;
    
    size_t len {s.length()};
    int total {0};
    
    for(size_t i{0}; i <len; i++) {
        int val = romans[s[i]];
        
        if( i+1 < len ) {
            int nextVal = romans[s[i+1]];
            if(nextVal > val){
                total += (nextVal -val);
                i++;
                continue;
            }
        }
        total += val;
    }
    
    return total;
}
int main() {
    cout<< "LVIII = "<< romanToInt("LVIII") << endl;
    cout<< "MCMXCIV = "<< romanToInt("MCMXCIV") << endl;
    cout<< "IV = "<< romanToInt("IV") << endl;
    return 0;
}