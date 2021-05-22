// FindingLeftMostElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "../Utilities/Utilities.hpp"

int maxdepth;
int v;
void calculateMaxDepth(TreeNode* root, int depth)
{
    if (!root->left && !root->right && depth < maxdepth)
        return;
    if (!root->left && !root->right && depth > maxdepth)
    {
        //We found a leaf node that has great depth
        maxdepth = depth;
        v = root->val;
        return;
    }
    if (root->left)
        calculateMaxDepth(root->left, depth + 1);
    if (root->right)
        calculateMaxDepth(root->right, depth + 1);
}
int findBottomLeftValue(TreeNode* root) {
    calculateMaxDepth(root, 1);
    return v;
}
int main() noexcept(true)
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
