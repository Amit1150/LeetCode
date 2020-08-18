#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
vector<int> majorityElement(vector<int>& nums)
{
    const int limit = ((int)nums.size()) / 3;
    unordered_map<int, int> m;
    for(int n : nums) {
        m[n]++;
    }

    vector<int> output;
    for(auto itr = m.begin(); itr != m.end(); itr++) {
        if(itr->second > limit)
            output.push_back(itr->first);
    }

    return output;
}

int main()
{
    vector<int> nums1= {1,1,1,3,3,2,2,2};
    vector<int> output = majorityElement(nums1);
    cout << "Hello World!" << endl;
    return 0;
}