# Vowel Counter

This C++ program efficiently determines the count of vowels present in a given string using an unordered set. The program's time and space complexity are analyzed, and detailed instructions for cloning, compiling, and running the code are provided.

## Program Overview

The program utilizes the `countVowels` function, which takes a string as input and returns the number of vowels present in the word. The function employs an unordered set to store the vowels, enabling efficient character comparisons.

## Time and Space Complexity Analysis

**Time Complexity:** O(n)  
The time complexity of the `countVowels` function is O(n), where n is the length of the input string. This indicates that the time taken by the function to execute grows linearly with the length of the input word.

**Space Complexity:** O(1)  
The space complexity of the `countVowels` function is O(1), signifying that the amount of memory consumed by the function remains constant regardless of the input string's length.

## Instructions

### Prerequisites

- Ensure that you have a C++ compiler installed.

### How to Clone the Repository

1. Open a terminal.

2. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/sparsh1909/vowel-counter.git
    ```

3. Navigate to the project directory:

    ```bash
    cd vowel-counter
    ```

### How to Compile and Run

1. Compile the code using the following command:

    ```bash
    g++ -std=c++11 vowel_counter.cpp -o vowel_counter
    ```

2. Run the executable:

    ```bash
    ./vowel_counter
    ```

3. Enter a word when prompted, and the program will display the number of vowels in the word.

## Example

```bash
Enter a word: Hello
The number of vowels in 'Hello' is 2.
