#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int countVowels(const string& word) {
    const unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int count = 0;

    for (char c : word) {
        if (vowels.find(c) != vowels.end()) {
            count++;
        }
    }

    return count;
}

int main() {
    string inputWord;
    cout << "Enter a word: ";
    cin >> inputWord;

    if (inputWord.empty()) {
        cout << "The input string is empty.\n";
        return 0;
    }

    int result = countVowels(inputWord);
    cout << "The number of vowels in '" << inputWord << "' is " << result << ".\n";

    return 0;
}
