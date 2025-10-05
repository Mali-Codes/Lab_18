// Malakai Ponce | October 04, 2025 | COMSC 210
// Lab 18

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct ReviewNode {
    double rating;
    string comment;
    ReviewNode* next;
};

void AddToFront (ReviewNode*& head, ReviewNode*& tail, double rating, string comment) {

    ReviewNode* newNode = new ReviewNode;

    newNode->rating = rating;
    newNode->comment = comment;
    newNode->next = head;
    
    head = newNode;

    if (tail == nullptr) {
        tail = newNode;
    }
};


int main() {

    //Make the list
    ReviewNode* head = nullptr;
    ReviewNode* tail = nullptr;

    // User choice
    int choice;
    cout << "[1] add to the front\n";
    cout << "[2] add to the back\n";
    cout << "Which one?: ";
    cin >> choice;

    if (choice == 1) {
        AddToFront(head, tail, rating, comment)
    }
}