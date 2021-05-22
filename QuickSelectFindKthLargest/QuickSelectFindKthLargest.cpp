// QuickSelectFindKthLargest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;
class Solution {
public:
    template<typename PRNG>
    int pivot(std::vector<int>& nums, const int begin, const int end, PRNG&& prng)
    {
        // Choose the pivot randomly, then place it at the end
        const auto r = std::uniform_int_distribution<int>{ begin, end - 1 }(prng);
        const auto p = end - 1;
        std::swap(nums[r], nums[p]);

        // Now partition the nums[begin:end-1] range using Lomuto partitioning
        // (it's easier than Hoare's).
        int j = begin;
        for (int i = begin; i < end - 1; ++i)
        {
            if (nums[i] < nums[p])
            {
                std::swap(nums[j++], nums[i]);
            }
        }

        // Place the pivot in its sorted position, and return the position
        std::swap(nums[j], nums[p]);
        return j;
    }

    // Puts the k-th largest element in the k-th place
    void quickselect(std::vector<int>& nums, const int k)
    {
        std::minstd_rand prng;

        int begin = 0;
        int end = nums.size(); // exclusive

        while (true)
        {
            const int pivot_index = pivot(nums, begin, end, prng);
            if (pivot_index == k)
            {
                break;
            }
            else if (pivot_index > k)
            {
                end = pivot_index;
            }
            else
            {
                begin = pivot_index + 1;
            }
        }
    }

    int findKthLargest(vector<int>& nums, int k) {
        quickselect(nums, nums.size() - k);
        return nums[nums.size() - k];
    }
};



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
