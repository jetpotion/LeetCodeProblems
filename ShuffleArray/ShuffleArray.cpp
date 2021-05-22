// ShuffleArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n) {
    vector<int>arr(nums.size());
    int start_x = 0;
    int start_y = start_x + n;
    int s = 0;
	while(s < nums.size())
	{
        if (s % 2 == 0)
        {
            arr[s] = nums[start_x];
            start_x++;
            s++;
        }
        else
        {
            arr[s] = nums[start_y];
            start_y++;
            s++;
        }
	}
	return arr;
}
void Print(vector<int>&arr)
{
    std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
}
int main()
{
    vector<int>arr{ 2,5,1,3,4,7 };
    arr = shuffle(arr,3);
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
