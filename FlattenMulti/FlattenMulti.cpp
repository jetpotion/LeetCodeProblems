// FlattenMulti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* flatten(Node* head) {
        if (!head)
            return head;
        Node* current_head = head;
        Node* tail = head;
        std::stack<Node*>s;
        if (head->next)
            s.push(head->next);
        if (head->child)
            s.push(head->child);
        //delete the current head-
        current_head->child = nullptr;
        while (s.empty())
        {
            Node* top = s.top();
            s.pop();
            tail->next = top;
            tail->next->prev = tail;
            tail = tail->next;
            if (top->next)
                s.push(top->next);
            if (top->child)
                s.push(top->child);
            top->child = nullptr;
            
        }
        return current_head;
    }
};
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
