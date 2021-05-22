// HasPath.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
bool hasPath(vector<vector<int>>& maze, vector<int>& start, vector<int>& destination) {

    //start  A BFS
    std::vector<std::pair<int, int>>edges{ {0,1},{1,0},{-1,0},{0,-1} };
    std::queue<std::pair<int, int>>q;
    
    q.emplace(start[0], start[1]);
    //visited node 
    std::vector<std::vector<bool>>visited(maze.size(),std::vector<bool>(maze[0].size()));
    while (!q.empty())
    {
        std::pair<int, int>p = q.front();
        q.pop();    
        //visited the table 
        visited[p.first][p.second] = true;
        if (p.first == destination[0] && p.second == destination[1])
            return true;
        for (const std::pair<int, int>& edge : edges)
        {
            int x = p.first + edge.first;
            int y = p.second + edge.second;
            while (x >= 0 && y >= 0 && x < maze.size() && y < maze[0].size() && maze[x][y] == 0)
            {
                x += edge.first;
                y += edge.second;
            }
            if (!visited[x - edge.first][y - edge.second])
            {
                q.emplace(x - edge.first, y - edge.second);
                visited[x - edge.first][y - edge.second] = true;
            }

        }
    }
    //we haev visited all the posistions 
    return false;

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
