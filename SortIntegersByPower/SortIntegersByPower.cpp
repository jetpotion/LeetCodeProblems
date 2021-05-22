// SortIntegersByPower.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <queue>
#include <vector>
std::map<int, std::priority_queue<int, std::vector<int>, std::greater<int>>>mp;
int powersteps(int k)
{
    int counter = 0;
    while (k > 1)
    {
        if (k % 2 == 0)
            k /= 2;
        else
            k = 3 * k + 1;
        counter++;
    }
    return counter;
}
int getKth(int lo, int hi, int k) {
    for (int x = lo; x <= hi; x++)
    {
        mp[powersteps(x)].push(x);
    }
    auto begin = mp.begin();
    std::advance(begin, k-1);
    
    return (*begin).second.top();
}
int main()
{
    std::cout << getKth(12, 15, 2) << std::endl;
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
