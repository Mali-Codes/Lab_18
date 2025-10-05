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

void addToBack (ReviewNode*& head, ReviewNode*& tail, double rating, string comment) {

    ReviewNode* newNode = new ReviewNode;

    newNode->rating = rating;
    newNode->comment = comment;
    newNode->next = nullptr;            // big difference

    if (tail != nullptr) {
        tail->next = newNode;
    }
    tail = newNode;

    if (head == nullptr) {
        head = newNode;
    }
};

void DisplayList (ReviewNode* head) {
    if (head == nullptr) {
        cout << "Somin ain't right\n";
        return;
    }

    int count = 0;
    double sum = 0.0;
    ReviewNode* current = head;

    while (current != nullptr) {
        count++;
        sum += current->rating;
    
        cout << "   > Review #" << count << ": " << current->rating 
            << ": " << current->comment << endl;

        current = current->next;
        
    }

    double average = sum / count;
    cout << "Average: " << average << "\n";
}

int main() {

    //Make the list
    ReviewNode* head = nullptr;
    ReviewNode* tail = nullptr;

    // User choice
    int choice;
    double rating;
    string comment;

    string continueChoiceInput = "y";

    while (continueChoiceInput == "y" || continueChoiceInput == "Y") {
        cout << "[1] add to the front\n";
        cout << "[2] add to the back\n";
        cout << "Which one?: ";
        cin >> choice;


        cout << "Enter rating (1 - 5): ";
        cin >> rating;
        cin.ignore();

        cout << "Enter comment: ";
        getline(cin, comment);

        if (choice == 1) {                  /////////// Change from an if
            AddToFront(head, tail, rating, comment);
        }
        else if (choice == 2) {
            addToBack(head, tail, rating, comment);
        }
        
        cout << "Want to add another review? (y/n): ";
        cin >> continueChoiceInput;
        cin.ignore();
        

    DisplayList(head);
    }

}