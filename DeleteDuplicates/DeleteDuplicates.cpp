// DeleteDuplicates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

 struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
};
ListNode* deleteDuplicates(ListNode* head) {
    ListNode* dummy = new ListNode(0, head);

    ListNode* temp = dummy->next;
    ListNode* pre = dummy;
    //there is next a node and another node 
    while (temp && temp->next) {
        //if we have duplicates 
        if (temp->val == temp->next->val) {
            //get the current val 
            int x = temp->val;
            //keep moving till the end 
            while (temp && temp->val == x) {
                temp = temp->next;
            }
            pre->next = temp;
        }
        else {
            pre = temp;
            temp = temp->next;
        }
    }
    return dummy->next;

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
