// MinTimeToVisitAllPoints.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int minTimeToVisitAllPoints(std::vector<std::vector<int>>& points) {
	if (points.size() == 1)
		return 1;
	int total_time = 0;
	for(int x = 1;x <  points.size();x++)
	{
		int delta_x = std::abs(points[x][0] - points[x - 1][0]);
		int delta_y = std::abs(points[x][1] - points[x - 1][1]);
		if (delta_x == 0)
			total_time += delta_y;
		else if (delta_y == 0)
			total_time += delta_x;
		else if (delta_x == delta_y)
			total_time += delta_x;
			//The case when none of those apply 
		else
		{
			int min_time = std::min(delta_x, delta_y);
			int max_time = std::max(delta_x, delta_y);
			total_time += min_time;
			total_time += max_time - min_time;
		}
	}

	return total_time;
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
