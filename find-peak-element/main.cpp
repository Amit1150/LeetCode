#include <iostream>
#include <vector>
#include <string>
using namespace std;
int findPeakElement(vector<int>& nums) {
        const int size = nums.size();
        if(size < 1) {
            return 0;
        }
        
        int min = 0;
        int max = size -1;
        while(min < max) {
            if(nums[min] > nums[min]) {
                return min;
            }
            if(nums[max] > nums[max]) {
                return max+1;
            }
            min++;
            max--;
        }
        return min;
    }
    
int main() {
    vector<int> v1 = {1,2,3,1};
    vector<int> v2 = {1,2,3,1};
    cout << "peak index is: "<< findPeakElement(v1) << endl;
    cout << "peak index is: "<< findPeakElement(v2) << endl;
    return 0;
}