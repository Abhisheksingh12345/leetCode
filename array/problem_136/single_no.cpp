#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public :
        int singleNumber(vector<int> nums) {
        }
};

int main() {
    int arr[] {4,1,2,1,2};
    vector<int> nums;
    for(int i  :arr) {
        nums.push_back(i);
    }
    Solution s;
    cout << s.singleNumber(nums);
    return 0;
}