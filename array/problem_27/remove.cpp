#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        //O(n)
        vector<int> new_nums;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val){
                new_nums.push_back(nums[i]);
            }
        }
        nums.clear();
        for (int i : new_nums)
            nums.push_back(i);
        return nums.size();
    }
};

int main()
{
    Solution s;
    int myints[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    std::vector<int> nums(myints, myints + sizeof(myints) / sizeof(int));
    cout << s.removeElement(nums, val);
    return 0;
}