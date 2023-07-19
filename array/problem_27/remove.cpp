#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        
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