// NumberOfGoodPairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
std::unordered_map<int, int>mp;
int numIdenticalPairs(vector<int>& nums) {
    for (int val : nums)
        mp[val]++;
    int total = 0;
    for (const std::pair<int, int>newpair : mp)
        total += ((newpair.second) * (newpair.second - 1)) / 2;


    return total;
}
int main()
{
    vector<int>arr{ 1,2,3,1,1,3 };
    std::cout << numIdenticalPairs(arr);
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
