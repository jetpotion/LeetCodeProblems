// KillProcess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <vector>
std::unordered_map<int, std::vector<int>>mp;
std::vector<int>current;
void DFS(int current_node)
{
    //if we cant find a parent process with  it then stop 
    if (mp.find(current_node) == mp.end())
        return;

        for (int x : mp[current_node])
        {
            current.push_back(x);
                DFS(x);
        }
}

std::vector<int> killProcess(std::vector<int>& pid, std::vector<int>& ppid, int kill) {


    //create the data structuree
    for (int x = 0; x < ppid.size(); x++)
    {
        //if parent id  is none zero
        if (ppid[x] != 0)
            mp[ppid[x]].push_back(pid[x]);
    }
    //go through a DFS scenario with 
    current.push_back(kill);
    DFS(kill);
    return current;

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
