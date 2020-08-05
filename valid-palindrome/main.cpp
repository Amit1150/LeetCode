#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPalindrome(string s)
{
    int min = 0;
    int max = s.length() - 1;
    if(max <= 1) {
        return true;
    }
    bool isTrue = true;
    while(min < max) {
        char minChar = s[min];
        char maxChar = s[max];

        if(!((minChar >= 65 && minChar <= 90) || (minChar >= 97 && minChar <= 122))) {
            min++;
            continue;
        }

        if(!((maxChar >= 65 && maxChar <= 90) || (maxChar >= 97 && maxChar <= 122))) {
            max--;
            continue;
        }

        if(((minChar <= 90 && maxChar <= 90) || (minChar >= 97 && maxChar >= 97)) && minChar != maxChar) {
            isTrue = false;
            break;
        } else if(minChar != maxChar){

            if(minChar >= 97 && (122 - minChar) != (90 - maxChar)) {
                isTrue = false;
                break;
            } else if((122 - maxChar) != (90 - minChar)) {
                isTrue = false;
                break;
            }
        }
        min++;
        max--;
    }
    return isTrue;
}
int main()
{
    string s = "A man, a plan, a canal: Panama";

    cout << "is valid: " << isPalindrome(s) << endl;
    return 0;
}