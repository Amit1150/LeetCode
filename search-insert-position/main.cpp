#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int min = 0;
        int max = nums.size() - 1;
        int mid {0};
        
        while(max >= min) {
            mid = min + (max - min )/2;
            
            if(nums[mid] > target) {
                max = mid - 1;
            } else if(nums[mid] < target){
                min = mid +1;
            } else {
                return mid;
            }
        }
        return max + 1;
    }

int main()
{
    vector<int> nums { 1,3,5,6 };
    cout << searchInsert(nums, 2) << endl;
    cout << searchInsert(nums, 5) << endl;
    cout << searchInsert(nums, 7) << endl;
    cout << searchInsert(nums, 0) << endl;
    return 0;
}