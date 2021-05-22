// AdjacentDuplicate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>

using namespace std;
string removeDuplicates(string S) {
	//Use a deque to get the job done 
    std::deque<char>s;

    for (int x = 0; x < S.size(); x++)
    {
    	//First push elements to back t o get the back like a stack
        if(s.empty()  || s.back() != S[x])
            s.push_back(S[x]);
        else if(s.back() == S[x])
            s.pop_back();
       
    }
    std::string newstring;
    while(!s.empty())
    {
    	//A new function call insert 
        newstring += s.front();
        s.pop_front();
    }
    return newstring;

}
int main()
{
    std::cout << removeDuplicates("abbaca");
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
