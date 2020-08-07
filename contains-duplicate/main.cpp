#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    unordered_map<int, int> numMap;
    const int max = nums.size() - 1;
    int i = 0;
    while(i <= max) {
        numMap[nums[i]]++;
        if(numMap[i] > 1) {
            return true;
        }
        i++;
    }
    return false;
}
bool containsDuplicate2(vector<int>& nums)
{
    bool ans { false };
    int min = 0;
    int max = nums.size();
    while(min < max) {
        int min_num = nums[min];
        for(int i = min + 1; i < max; i++) {
            if(min_num == nums[i]) {
                return true;
            }
        }

        int max_num = nums[max - 1];
        for(int i = max - 2; i >= 0; i--) {
            if(max_num == nums[i]) {
                return true;
            }
        }
        min++;
        max--;
    }
    return ans;
}

int main()
{
    vector<int> nums1 = { 1, 2, 3, 1 };
    vector<int> nums2 = { 1, 2, 3, 4 };
    vector<int> nums3 = { 1, 1, 1, 3, 3, 4, 3, 2, 4, 2 };
    //cout << containsDuplicate(nums1) << endl;
    //cout << containsDuplicate(nums2) << endl;
    cout << containsDuplicate(nums3) << endl;
    return 0;
}