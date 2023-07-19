#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> new_nums;
        new_nums.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            if (new_nums.back() != nums[i])
                new_nums.push_back(nums[i]);
        }
        return new_nums.size();
    }
};

int main()
{
    Solution s;
    int myints[] = {1, 2, 2, 3};
    std::vector<int> nums(myints, myints + sizeof(myints) / sizeof(int));
    cout << s.removeDuplicates(nums);
    return 0;
}