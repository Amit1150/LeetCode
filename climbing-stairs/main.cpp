#include <iostream>
#include <vector>
#include <string>
using namespace std;

 int dp[46];
    int climbStairs(int n) {
        if(n < 2) {
            return 1;
        }
        if(dp[n]) {
            return dp[n];
        }else {
            return dp[n] = climbStairs(n-1) + climbStairs(n-2);
        }
    }


int main() {
    // Test cases
    cout << "1 stairs: "<< climbStairs(1) << endl;
    cout << "2 stairs: "<< climbStairs(2) << endl;
    cout << "3 stairs: "<< climbStairs(3) << endl;
    cout << "5 stairs: "<< climbStairs(5) << endl;
    cout << "15 stairs: "<< climbStairs(15) << endl;
    cout << "45 stairs: "<< climbStairs(45) << endl;
    return 0;
}