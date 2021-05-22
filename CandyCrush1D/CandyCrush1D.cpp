// CandyCrush1D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>

std::string candyCrush1d(std::string s)
{

	std::deque<std::pair<char, int>>st;

	for(int x = 0; x < s.size();x++)
	{
		if (st.empty())
			st.emplace_back(s[x], 1);
		else if(st.back().first == s[x])
		{
			//increment the counter 
			++st.back().second;
		}
		else
		{
			//check the top if its
			if (st.back().second >= 3)
				st.pop_back();
			st.emplace_back(s[x], 1);
		}
		std::string constructstring;
		while(!st.empty())
		{
			//Get the front element 
			std::pair<char, int>pair = std::move(st.front());
			st.pop_front();
			//construct the stirng from
			constructstring.append(pair.second, pair.first);
		}

		return constructstring;
	}
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
