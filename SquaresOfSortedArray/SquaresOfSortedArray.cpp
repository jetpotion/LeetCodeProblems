// SquaresOfSortedArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> sortedSquares(std::vector<int>& nums) {
    int low = 0;
    int high = nums.size()-1;
    std::vector<int>newarr(nums.size());
    int pointer = newarr.size() - 1;
	while(low <= high)
	{
		if(std::abs(nums[low]) >  std::abs(nums[high]))
		{
			newarr[pointer] = nums[low] * nums[low];
			pointer--;
			low++;
		}
		else
		{
			//raise the power 
			newarr[pointer] = nums[high] * nums[high];
			pointer--;
			high--;
		}
    }
	return newarr;
}
void Print(std::vector<int>&arr)
{
	std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
}
int main()
{
	std::vector<int>arr{ -4,-1,0,3,10 };
	arr = sortedSquares(arr);
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
