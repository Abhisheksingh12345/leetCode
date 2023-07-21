#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int arr[500]{0};
        for (int i : nums1)
            arr[i]++;
        for (int i : nums2)
            arr[i]++;
        int j = 0;
        nums1.clear();
        int value = 0;
        for (int i = 1; i < m + n; i++)
        {
            value = arr[i];
            while (value-- > 0)
            {
                nums1.push_back(arr[i]);
            }
        }
        for (int i : nums1)
            cout << i << " ";
    }
};
int main()
{
    Solution s;
    int arr[]{1, 2, 3, 0, 0, 0};
    int m = 3;
    int arr2[]{2, 5, 6};
    int n = 3;
    vector<int> nums1(arr, arr + sizeof(arr) / sizeof(int));
    vector<int> nums2(arr2, arr2 + sizeof(arr2) / sizeof(int));
    s.merge(nums1, m, nums2, n);
}