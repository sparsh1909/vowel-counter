#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

// Function to count the number of vowels in a given word
int countVowels(const string& word) {
    
    // Set of vowels (both uppercase and lowercase)
    const unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int count = 0;
    
    // Check if the input word is empty
    if (inputWord.empty()) {
        cout << "The input string is empty.\n";
        return 0;
    }

    // Loop through each character in the word
    for (char c : word) {
        // Check if the character is a vowel
        if (vowels.find(c) != vowels.end()) {
            count++; // Increment the vowel count
        }
    }

    return count; // Return the total count of vowels
}

int main() {
    string inputWord;

    // Get input from the user
    cout << "Enter a word: ";
    cin >> inputWord;

    // Call the function to count vowels and display the result
    int result = countVowels(inputWord);
    cout << "The number of vowels in '" << inputWord << "' is " << result << ".\n";

    return 0;
}
