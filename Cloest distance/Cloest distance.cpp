// Cloest distance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <vector>

std::vector<int> shortestToChar(std::string s, char c) {
    std::queue<int>insert;
    for (int x = 0; x < s.size(); x++)
    {
        //first in first out data struuctors. Insert the data;
        if (s[x] == c)
            insert.push(x);
    }

    std::vector<int>output(s.size());
    //Get the first most element we insert 
    int top = insert.front();
    for (int x = 0; x < s.size(); x++)
    {
        if (s[x] != c) {
            if (insert.size() > 1)
            {
                insert.pop();
                int second = insert.front();
                if (std::abs(top - x) < std::abs(second - x))
                {
                    output[x] = std::abs(top - x);
                    insert.push(top);
                }
                else
                {
                    output[x] = std::abs(second - x);
                    top = second;
                }
            }
            else
            {
                //If its  just one continue;
                output[x] = std::abs(top - x);
            }
        }
    }
    return output;
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
