#include <cassert>
#include "vowel_counter/vowel_counter.cpp"  // Include the file with your functions

using namespace std;                    // Use standard library namespaces

// Function to run tests for countVowels
void testCountVowels() {
    // Test 1: Empty string should return 0
    assert(countVowels("") == 0);

    // Test 2: Word without vowels should return 0
    assert(countVowels("Rhythm") == 0);

    // Test 3: Word with all vowels should return the length of the word
    assert(countVowels("AEIOUaeiou") == 10);

    // Test 4: Mixed case word with vowels should return the correct count
    assert(countVowels("HeLLo") == 2);

    // Test 5: Word with repeated vowels should return the correct count
    assert(countVowels("beautiful") == 5);

    // Test 6: Word with no consonants should return the length of the word
    assert(countVowels("aeio") == 4);
}

int main() {
    // Run tests
    testCountVowels();

    return 0;
}
