// TopKFrequent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <queue>
#include <unordered_map>
#include <vector>
std::unordered_map<int, int>mp;
bool cmp( const std::pair<int,int>&arr,  const std::pair<int,int>&arr_2)
{
    return arr.second < arr_2.second;
}
std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
    //couinter
    for (int num : nums)
        mp[num]++;
    std::vector<int>arr;
    arr.reserve(k);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>,decltype(&cmp) >pq(cmp);
	for(auto it = mp.begin(); it != mp.end(); it = std::next(it))
	{
        pq.push(*it);
	}
	for(int i = 0; i < k;i++)
	{
        arr.push_back(std::move(pq.top().first));
        pq.pop();
	}
    return arr;
}
int main()
{
    std::vector<int>arr{ 1,1,1,2,2,3 };
    topKFrequent(arr,2);
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
