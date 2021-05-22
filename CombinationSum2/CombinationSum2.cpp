// CombinationSum2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
std::vector<std::vector<int>>global;
void BT(std::vector<int>& candidate, std::vector<int>& arr, int sum, int target, int current)
{
    //if the sum is the target is then we have we need to stop
    if (sum == target)
    {
        global.push_back(arr);
        return;
    }
    //reject the candidate, it is not worth pursuing at all
    else if (sum > target)
    {
        return;
    }
    else
    {
        //push the current candidate so that we have 

        for (int x = current; x < candidate.size(); x++)
        {
            if (x > current && candidate[x] == candidate[x - 1])
                continue;
            arr.push_back(candidate[x]);
            BT(candidate, arr, sum + candidate[x], target, current + 1);
            arr.pop_back();
        }
    }
}
std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) {


    std::vector<int>arr;
    std::sort(candidates.begin(), candidates.end());
    BT(candidates, arr, 0, target, 0);
    return global;
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
