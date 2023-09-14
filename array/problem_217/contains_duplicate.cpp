#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public :
        int containsDuplicate(vector<int> nums) {      
        }
};

int main() {
    int arr[] {2,2,1,1,1,2,2};
    vector<int> nums;
    for(int i : arr) 
        nums.push_back(i);
    Solution s;
    cout << s.containsDuplicate(nums);
    
}