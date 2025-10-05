void DisplayList (ReviewNode* head) {
    if (head == nullptr) {
        cout << "Somin ain't right\n";
        return;
    }

    int count = 0;
    ReviewNode* current = head;

    if (current != nullptr) {
        count++;
    
        cout << "   > Review #" << count << ": " << current->rating 
            << ": " << current->comment << endl;
        
    }

    string continueChoiceInput = "y";

    cout << "Want to add anoter review? (y/n): ";
    cin >> continueChoiceInput;
}