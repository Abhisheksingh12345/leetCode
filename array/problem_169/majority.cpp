#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public :
        int majorityElement(vector<int> nums) {
            int arr[999]{0};
            for(int i : nums) {
                if(++arr[i] >  nums.size()/2)
                    return i;
            }
            return nums[nums.size()/2];         
        }
};

int main() {
    int arr[] {2,2,1,1,1,2,2};
    vector<int> nums;
    for(int i : arr) 
        nums.push_back(i);
    Solution s;
    cout << s.majorityElement(nums);
    
}