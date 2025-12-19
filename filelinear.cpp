#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to search for a specific line in the file
// folks don't confused with the & symbol it is used to pass the string by reference for optimization
// it avoids copying the entire string which can be costly for large strings

string searchInFile(const string& filePath, const string& searchString) {
    ifstream file(filePath);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filePath << endl;
        return "";
    }

    string line;
    while (getline(file, line)) {
        if (line.find(searchString) != string::npos) {
            file.close();
            return line; // Return the first matching line
        }
    }

    file.close();
    return "Sorry, the following line is not in the text"; 
}

// Function to search for a specific word in the file
string searchTheWord(const string& filePath, const string& lookupWord) {
    ifstream file(filePath);
    if (!file.is_open()) {
        cerr << "Error opening the file: " << filePath << endl;
        return "";
    }
    
   string word;
    int index = 0; // word counter
    while (file >> word) {
        index++; // increment for each word read
        if (lookupWord == word) {
            file.close();
            return "The word '" + lookupWord + "' was found at position " + to_string(index);
        }
    }

    file.close();
    return "The word is not in the text document";
}

int main() {
    // Create a file with some content
    ofstream file("general text.txt");
    file << "so first i will explain you how this linear search works to search the specific line in the file"
         << "\nfirst you enter the line you want to search in the file"
         << "\nthen the program will open the file and read it line by line"
         << "\nif the line is found it will return the line"
         << "\nif the line is not found it will return a message saying the line is not found" << endl;
    file.close();

    string searchString, word;
    cout << "Enter the line to search: ";
    getline(cin, searchString); // allows spaces

    // Call the function and print the result
    string result = searchInFile("general text.txt", searchString);
    cout << "Result: " << result << endl;

    cout << "Enter the word you want to search in the file: ";
    cin >> word;
    string resultMessage = searchTheWord("general text.txt", word);
    cout << resultMessage << endl;

    return 0;
}
