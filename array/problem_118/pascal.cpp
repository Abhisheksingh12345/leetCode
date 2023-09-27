#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pascal_triangle(int numrow);
int main()
{
    int numrow = 5;
    vector<vector<int>> pt = pascal_triangle(numrow);
    return 0;
}
vector<vector<int>> pascal_triangle(int numrow)
{
    vector<vector<int>> outter;
    vector<int> inner{1};
    outter.push_back(inner);
    if (numrow == 1)
        return outter;
    for (int i = 1; i < numrow; i++)
    {
    }
    return outter;
}