// isIsomorphic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <unordered_map>
#include <unordered_set>
std::unordered_map<char, char>mp;
bool isIsomorphic(std::string s, std::string t) {

	std::unordered_set<char>st;
	for (int x =0; x < s.size();x++ )
	{
		if(mp.find(s[x]) == mp.end())
		{
			
			mp[s[x]] = t[x];
			//It means that one chacater already beenedd 
			if (st.find(mp[s[x]]) != st.end())
				return false;
			st.insert(mp[s[x]]);
			s[x] = mp[s[x]];
		}
		else
		{
			//Get the map string
			s[x] = mp[s[x]];
			if (s[x] != t[x])
				return false;
		}
	}

	return true;
}
int main()
{
	std::string s{"paper"};
	std::string t{ "title" };
	std::cout << std::boolalpha << isIsomorphic(s, t) << "\n";
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
