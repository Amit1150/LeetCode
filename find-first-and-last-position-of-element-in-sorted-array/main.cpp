#include <iostream>
#include <vector>
using namespace std;

int getIndex(vector<int>& nums, int target, int s, bool getFirst)
{
    int e = nums.size() - 1;
    int ans = -1;
    while(s <= e) {
        int m = s + (e - s) / 2;
        if(nums[m] == target) {
            ans = m;
            if(getFirst){
                e = m - 1;
            }else{
                s = m + 1;
            }
        } else if(nums[m] < target) {
            s = m + 1;
        } else {
            e = m - 1;
        }
    }

    return ans;
}

vector<int> searchRange(vector<int>& nums, int target)
{
    vector<int> v(2, -1);
    int fi = getIndex(nums, target,0, true);
    if(fi != -1) {
        v[0] = fi;
        v[1] = getIndex(nums, target, fi, false);
    }
    return v;
}
int main()
{
    vector<int> nums = { 5, 7, 7, 8, 8, 10 };
    vector<int> output = searchRange(nums, 8);
    return 0;
}