// KidsWithCandies.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
	std::vector<bool>arr(candies.size());
	//First return the max element  iterato  assocaited with th
	std::vector<int>::const_iterator getmax = std::max_element(candies.begin(), candies.end());
	std::cout << (*getmax) << std::endl;
	for (int x = 0; x < candies.size(); x++)
	{
		if (candies[x] + extraCandies >= (*getmax))
			arr[x] = true;
		else
			arr[x] = false;
	}
	
	return arr;
}
int main()
{
	vector<int>arr{ 2,3,5,1,3 };
	int extracandies = 3;
	vector<bool>candies = kidsWithCandies(arr, 3);
	std::copy(candies.begin(), candies.end(), std::ostream_iterator<bool>(std::cout << std::boolalpha, " "));
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
