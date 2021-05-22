// ReverseVectorArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
void reverseString(std::vector<char>& s) {
	int start = 0;
	int end = s.size() - 1;
	while(start < end)
	{
		std::swap(s[start], s[end]);
		start++;
		end--;
	}

}
int main()
{
	vector<char>arr{ 'h','e','l','l','o'};
	reverseString(arr);
	std::copy(arr.begin(), arr.end(), std::ostream_iterator<char>(std::cout, " "));
	
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
