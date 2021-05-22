// LastStoneWeight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <vector>

int lastStoneWeight(std::vector<int>& stones) {
    if (stones.size() == 1)
        return stones[0];
    //give us the max queue 
    std::priority_queue<int, std::vector<int>, std::less<int>>pq;
    //Go through the stones 
    for (int val : stones)
        pq.push(val);
    //check as long the size greater than 1 
    while (pq.size() > 1)
    {
        int top = pq.top();
        pq.pop();
        int second = pq.top();
        if (second == top)
            pq.pop();
        else if (second < top)
        {
            pq.pop();
            pq.emplace(top - second);
        }
    }


    if (pq.empty())
        return 0;
    return pq.top();

}
int main()
{
    std::vector<int>arr{ 2,7,4,1,8,1 };
    std::cout << lastStoneWeight(arr) << std::endl;
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
