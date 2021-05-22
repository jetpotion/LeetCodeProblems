// RunningSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <vector>
#include <ostream>
#include <iostream>
    vector<int> runningSum(vector<int>& nums) {
        for(int x = 1; x < nums.size();x++)
        {
            nums[x] += nums[x - 1];
        }


        return nums;

    }
void Print(vector<int>&arr)
    {
    std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
    }
int main()
{
    vector<int>arr{ 3,1,2,10,1 };
    arr = runningSum(arr);
    Print(arr);
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
