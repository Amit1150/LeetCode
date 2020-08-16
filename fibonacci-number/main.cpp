#include <iostream>
#include <string>
#include <vector>
using namespace std;
int fib(int N)
{
    int a = 0, b = 1, c = 1;
    if(N == 0)
        return a;
    for(int i = 2; i <= N; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    cout << "fib(4): "<< fib(4) << endl;
    cout << "fib(14): "<< fib(14) << endl;
    cout << "fib(10): "<< fib(10) << endl;
    return 0;
}