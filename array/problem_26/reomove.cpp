#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
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