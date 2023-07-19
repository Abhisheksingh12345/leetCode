#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int val)
    {
        
};

int main()
{
    Solution s;
    int myints[] = {1,3,5,6};
    int val = 5;
    std::vector<int> nums(myints, myints + sizeof(myints) / sizeof(int));
    cout << s.searchInsert(nums, val);
    return 0;
}