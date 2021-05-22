// MajorityElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
//A new algorithm I have heard of 
int majorityElement(std::vector<int>& nums) {
	int  count = 0;
	int cand = 0 ;
	for(int val:nums)
	{
		if (count == 0)
			cand = val;
		count += (val == cand) ? 1 : -1;
	}
	return cand;

}
int main()
{
	std::vector<int>arr{ 2,2,1,1,1,2,2 };
	std::cout << majorityElement(arr) << std::endl;
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
