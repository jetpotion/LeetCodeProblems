// CountTopKFrequentWords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
using namespace std;
std::unordered_map<std::string, int>mp;
struct Compare
{
    bool operator()(const std::pair<std::string, int>& p1, const std::pair<std::string, int>& p2)
    {
        if (p1.second == p2.second)
            return p1.first > p2.first;
        return  p1.second > p2.second;
    }
};
vector<string> topKFrequent(vector<string>& words, int k) {
    for (const std::string& wd : words)
        mp[wd]++;
    std::priority_queue < std::pair<std::string, int>, std::vector < std::pair < std::string, int>>, Compare>pq;
    for (auto& val : mp)
        pq.push(val);
    std::vector<std::string>arr;
    while (arr.size() != k)
    {
        arr.push_back(std::move(pq.top().first));
        pq.pop();
    }
    return arr;
}
int main()
{
    std::vector<std::string>arr{"i", "love", "leetcode", "i", "love", "coding"};
    arr = topKFrequent(arr, 2);
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
