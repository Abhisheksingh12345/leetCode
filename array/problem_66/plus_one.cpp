#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        if((digits[digits.size()-1] + 1) > 9) {
            digits.pop_back();
            digits.push_back(1);
            digits.push_back(0);
        } else {
            digits[digits.size()-1] = digits[digits.size()-1] + 1;
        }
        return digits;

    }
};

    int main()
    {
        Solution s;
        int myints[] = {9};
        std::vector<int> nums(myints, myints + sizeof(myints) / sizeof(int));
        vector<int> digits = s.plusOne(nums);
        for(int i : digits) {
            cout << i << " ";
        }
        return 0;
    }