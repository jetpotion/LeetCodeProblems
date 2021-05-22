// IslandPerimeter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {

	unsigned int perimeter = 0;
	for(int x = 0; x < grid.size();x++)
	{
		for(int y = 0; y  < grid[0].size();y++)
		{
			//If we found this place 
			if(grid[x][y] == 1)
			{
				int totalside = 4;
				//Begin to check
				int upper_x = x - 1;
				int lower_x = x + 1;
				int left_y = y  -1 ;
				int right_y = y + 1;
				if (left_y >= 0 && grid[x][left_y] == 1)
					totalside--;
				if (right_y < grid[0].size() && grid[x][right_y] == 1)
					totalside--;
				if (upper_x >= 0 && grid[upper_x][y] == 1)
					totalside--;
				if (lower_x < grid[0].size() && grid[lower_x][y] == 1)
					totalside--;

				perimeter += totalside;
			}
		}
	}
	return perimeter;
}
int main()
{
	vector<vector<int>>arr{ {1,0} };
	std::cout << islandPerimeter(arr);
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
