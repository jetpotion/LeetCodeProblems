// CountSubstrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
int countSubstrings(std::string s) {
    int n = s.size();
    std::vector<std::vector<bool>>table(n,std::vector<bool>(n));
    int counter = n;
 
    for (int i = 0; i < n; ++i)
    {
        table[i][i] = true;
        if (i + 1 < n && s[i] == s[i + 1])
        {
            table[i][i + 1] = true;
            counter++;
        }
    }

    for (int k = 3; k <= n; ++k) {
        for (int i = 0; i <= n - k; ++i) {
            int j = i + k - 1;
            if (table[i + 1][j - 1] && s[i] == s[j]) {
                table[i][j] = true;
                counter++;
            }
        }
    }
    

    return counter;


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
