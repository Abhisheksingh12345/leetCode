#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    int containsDuplicate(vector<int> nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                return true;
        }
        return false;
    }
};

int main()
{
    int arr[]{2, 2, 1, 1, 1, 2, 2};
    vector<int> nums;
    for (int i : arr)
        nums.push_back(i);
    Solution s;
    cout << s.containsDuplicate(nums);
}