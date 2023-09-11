#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pascal_triangle(int numrow);
int main() {
    int numrow = 5;
    vector<vector<int>> pt= pascal_triangle(numrow); 
    return 0;
}