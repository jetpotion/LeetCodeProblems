// NestingDepth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <string>
#include <iostream>
int maxDepth(string s) {
    int count = 0;
    int global_max = 0;
	for(int x =0 ; x < s.size();x++)
    {
        if (s[x] == '(')
            count++;
        else if(s[x] == ')')
            count--;
        global_max = std::max(global_max, count);
    }
    return global_max;
}
int main()
{
    std::cout << maxDepth("(1+(2*3)+((8)/4))+1");
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
