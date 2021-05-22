// MaxAreaIsland.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
int max_grid = 0;
void DFS(std::vector<std::vector<int>>&grid, int x, int y,int size_of_island)
{
	if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == 0)
	{
		max_grid = std::max(size_of_island, max_grid);
		return;
	}
	
	grid[x][y] = 0;
	
	DFS(grid, x + 1, y, size_of_island+1);
	DFS(grid, x - 1, y, size_of_island+1);
	DFS(grid, x, y + 1, size_of_island+1);
	DFS(grid, x, y - 1, size_of_island+1);
	
}
int maxAreaOfIsland(std::vector<std::vector<int>>& grid) {

    for (int x = 0; x < grid.size();x++)
    {
    	//to make sure we that we search  through
	    for(int y  =0; y < grid[x].size();y++)
	    {
	    	//start searching 
		    if(grid[x][y] == 1)
		    {
			    //start searching
				DFS(grid, x, y,0);
		    }
	    }
    }
	return max_grid;

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
