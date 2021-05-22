// PeekIndex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {

	unsigned int low = 0;
	unsigned int high = arr.size() - 1;
	unsigned int mid = 0;
	while(low < high)
	{
		unsigned int mid = (low + high) / 2;
		if(mid <  arr.size() && arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
		{
			//this is the peak
			return mid;
		}
		else if(arr[mid] < arr[mid + 1])
		{
			//imply that the value is higher somewhere where in the lower mountain
			low = mid + 1;
		}
		else if(arr[mid] < arr[mid  - 1]  )
		{
			//Imply that we went to far 
			high = mid;
		}
	}

	return high;
}
int main()
{

	std::vector<int>arr{ 24, 69, 100, 99, 79, 78, 67, 36, 26, 19 };

    std::cout << peakIndexInMountainArray(arr);
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
