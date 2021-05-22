// SmallerNumbersThanCurrent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <vector>
#include <unordered_map>
using namespace std;
std::unordered_map<int, int>mp;
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
	vector<int>arr(101);
	//first track all of them down with the count
	for (int val : nums)
		arr[val]++;
	int count = 0;
	for(int x = 0; x < arr.size();x++)
	{
		//Gurantted to find smaller elements
		if(arr[x] != 0)
		{
			//The number of elements we found are smaller than the current one 
			mp[x] = count;
			//simply increment 
			count += arr[x];
		}
	}
	//Use the same array to count 
	for (int x = 0; x < nums.size(); x++)
	{
		nums[x] = mp[nums[x]];
	}


		return nums;
	
}
int main()
{
	vector<int>arr{ 8,1,2,2,3 };
	arr = smallerNumbersThanCurrent(arr);
	std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
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
