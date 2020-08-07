#include <iostream>
#include <string>
#include <vector>
using namespace std;
void reverseString(vector<char>& s)
{
    int min = 0;
    int max = s.size() - 1;
    while(min < max) {
        char temp = s[min];
        s[min] = s[max];
        s[max] = temp;
        min++;
        max--;
    }
}
int main()
{
    vector<char> v1 = {'a', 'v','w', 'q', 'r'};
    reverseString(v1);
    
    return 0;
}