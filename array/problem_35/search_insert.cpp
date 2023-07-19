#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int val)
    {
        // O(logn)
        int start = 0;
        int end = nums.size() - 1;
        int mid = 0;
        if(nums[0] > val)
            return 0;
        if(nums[nums.size()-1] < val)
            return nums.size()-1;
        while (start < end)
        {
            mid = (start + end) / 2;
            if (nums[mid] == val)
                return mid;
            else if(nums[mid] < val)
                start++;
            else    
                end--;
        }
        return start;
    }
};

    int main()
    {
        Solution s;
        int myints[] = {1, 3, 5, 6};
        int val = 5;
        std::vector<int> nums(myints, myints + sizeof(myints) / sizeof(int));
        cout << s.searchInsert(nums, val);
        return 0;
    }