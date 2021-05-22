// AllPathsFromSourceToTarget.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

std::vector<std::vector<int>>mat;
void DFS(std::vector<std::vector<int>>&graph,std::vector<int>&path)
{
	if(path.back() == graph.size() - 1)
	{
		mat.push_back(path);
		return;
	}
	for(int j : graph[path.back()])
	{
		path.push_back(j);
		DFS(graph, path);
		path.pop_back();
	}
}
std::vector<std::vector<int>> allPathsSourceTarget(std::vector<std::vector<int>>& graph) {

	//A single element of 0
	std::vector<int>arr;
	arr.push_back(0);
	DFS(graph, arr);
		return mat;
}


int main()
{
	std::vector<std::vector<int>>mat{ {4,3,1},{3,2,4},{3},{4} ,{}};
	mat = allPathsSourceTarget(mat);
	
	for(std::vector<int>arr:mat)
	{
		std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
		std::cout << "\n";
	}
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
