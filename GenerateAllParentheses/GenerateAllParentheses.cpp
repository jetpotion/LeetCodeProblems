// GenerateAllParentheses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
std::vector<string> m;
void BT(std::string&s , int open,int end, int n)
{
   
   if (s.size() == 2 * n)
     {
        m.push_back(s);
        return;
    }
    else
    {
        if (open < n)
        {
            s.append(1,'(');
            BT(s, open + 1,  end,n);
            s.pop_back();
        }
        if(end  < open)
        {
            s.append(1, ')');
            BT(s, open, end + 1, n);
            s.pop_back();
        }
    }
}
vector<string> generateParenthesis(int n) {
    if (n == 1)
        return std::vector<std::string>{"()"};
    std::string s;
    BT(s,0,0, n);
    return m;
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
