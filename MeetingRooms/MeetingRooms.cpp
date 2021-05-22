// MeetingRooms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
bool canAttendMeetings(vector<vector<int>>& intervals) {

    std::sort(intervals.begin(), intervals.end(), [](const vector<int>& arr, const vector<int> arr2)
        {
            //Get the second element 
            return arr[0] < arr2[0];
        });
    int pq = intervals[0][1];

	for(int x = 1; x < intervals.size();x++)
	{
        if (intervals[x][0] < pq)
            return false;
        else
            pq = intervals[x][1];
	}
   
    return true;
}
int main()
{
    vector<vector<int>>arr{ {0,30},{5,10},{15,20} };
    vector<vector<int>>arr2{ {7,10},{2,4} };
    std::cout << std::boolalpha <<  canAttendMeetings(arr) << '\n' ;
    std::cout << std::boolalpha << canAttendMeetings(arr2);
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
