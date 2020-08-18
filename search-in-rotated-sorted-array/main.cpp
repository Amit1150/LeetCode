#include <iostream>
#include <string>
#include <vector>
using namespace std;
int search(vector<int>& nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;

    while(s <= e) {
        int m = s + (e - s) / 2;
        if(nums[m] == target)
            return m;
        else if(nums[m] < nums[e]) {
            if(target > nums[m] && target <= nums[e]) {
                s = m + 1;
            } else {
                e = m - 1;
            }
        } else {
            if(target < nums[m] && target >= nums[s]) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> nums1 = {4,5,6,7,0,1,2};
    
    cout << "4 at : "<< search(nums1, 4) << endl;
    return 0;
}