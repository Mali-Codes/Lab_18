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

void DisplayList (ReviewNode* head) {
    if (head == nullptr) {
        cout << "Somin ain't right\n";
        return;
    }

    int count = 0;
    ReviewNode* current = head;

    while (current != nullptr) {
        count++
    }
}


int main() {

    //Make the list
    ReviewNode* head = nullptr;
    ReviewNode* tail = nullptr;

    // User choice
    int choice;
    double rating;
    string comment;

    cout << "[1] add to the front\n";
    cout << "[2] add to the back\n";
    cout << "Which one?: ";
    cin >> choice;

     cout << "Enter rating (1 -5): ";
    cin >> rating;
    cin.ignore();

    if (choice == 1) {
        AddToFront(head, tail, rating, comment);
    }
}