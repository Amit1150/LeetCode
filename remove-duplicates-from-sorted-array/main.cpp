#include <iostream>
#include <vector>

using namespace std;
void display(vector<int> &nums) {
    for(auto n: nums) {
        cout << n << " ";
    }
    
    cout << endl;
}

int removeDuplicates(vector<int>& nums) {
    const size_t len {nums.size()};    
        if(len <= 1){
            return nums.size();
        }
        
        int index {0};
        
        for(size_t i {1}; i < len-2; i++){
            if(nums[index] == nums[i]) {
                nums[index++] = nums[index];
            }
        }
        display(nums);
        return index;
}
   
int removeDuplicates2(vector<int>& nums) {
        int j=1;
        for(int i=1;i<nums.size();i++)
            if(nums[i] != nums[i-1])
                nums[j++] = nums[i];
				display(nums);
            return nums.empty() ? 0 : j;
    } 


int main()
{
    vector<int> nums0 { 1,2 };
    cout << "new length: "<< removeDuplicates2(nums0) << endl;
    
    vector<int> nums { 1,1,2 };
    cout << "new length: "<< removeDuplicates2(nums) << endl;
    
    
    vector<int> nums2 { 0,0,1,1,1,2,2,3,3,4 };
    cout << "new length: "<< removeDuplicates2(nums2) << endl;
    
    return 0;
}