// MinimumAbsoluteDifference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> minimumAbsDifference(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
    vector<vector<int>>mat;
    for (int x = 1; x < arr.size(); x++)
    {
        mat.emplace_back(vector<int>{arr[x - 1], arr[x]});
    }
    return mat;
}
int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
