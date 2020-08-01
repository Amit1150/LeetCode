#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val)
{
    const int len = nums.size();
    int index { len };
    for(int i { 0 }; i < len; i++) {
        if(nums[i] == val) {
            while(index > i) {
                index--;
                if(nums[index] != val) {
                    int temp = nums[i];
                    nums[i] = nums[index];
                    nums[index] = temp;
                    break;
                }
            }
        }
    }
    return index;
}

int main()
{
    vector<int> nums { 3, 2, 2, 3 };
    vector<int> nums2 { 0, 1, 2, 2, 3, 0, 4, 2 };
    vector<int> nums3 { 0, 1, 2, 3, 4, 5, 6 };
    vector<int> nums4 { 0 };
    cout << removeElement(nums, 3) << endl;
    cout << removeElement(nums2, 2) << endl;
    cout << removeElement(nums3, 7) << endl;
    cout << removeElement(nums4, 1) << endl;
    return 0;
}