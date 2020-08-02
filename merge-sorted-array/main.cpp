#include <iostream>
#include <string>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int i =0;
    int j = 0;
    while(i <= m || j <= n) {
        int num1 = nums1[i];
        int num2 = nums2[j];
        
        if(num1 < num2 & num1 != 0) {
            i = i < ++i : i ;
        }else if(num1 < num2) {
            nums1.insert(nums1.begin()+ i, nums2[j]);
            j = j < n ? ++j : j;
        } else {
            nums1.insert(nums1.begin()+ i, nums2[j]);
            i+=2;
            j++;
        }
    }
}

int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    
    merge(nums1, 3, nums2, 3);
    return 0;
}