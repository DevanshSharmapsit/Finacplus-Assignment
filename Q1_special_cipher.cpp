// Task 1: Special Cipher (C++ Implementation)
// Problem:
// Given a string and a Caesar rotation number, apply:

// Caesar Cipher to shift each character

// Run-Length Encoding (RLE) to compress repeated characters

// Example: 
// Input: "AABCCC", shift = 3
// Step 1 (Caesar): "DDEFFF"
// Step 2 (RLE): "D2EF3"
// Output: "D2EF3"

#include <iostream>
#include <string>
using namespace std;

// Step 1: Caesar Cipher
string caesarCipher(string input, int shift){
    string result = "";
    for (char ch : input) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            char shifted = (ch - base + shift) % 26 + base;
            result += shifted;
        } else {
            result += ch;
        }
    }
    return result;
}

// Step 2: Run-Length Encoding
string runLengthEncode(string input) {
    string encoded = "";
    int n = input.length();
    for (int i = 0; i < n; i++) {
        char current = input[i];
        int count = 1;
        while (i + 1 < n && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        encoded += current;
        if (count > 1)
            encoded += to_string(count);
    }
    return encoded;
}

// Combined Function
string specialCipher(string input, int shift) {
    string caesar = caesarCipher(input, shift);
    return runLengthEncode(caesar);
}

// Main
int main() {
    string input = "AABCCC";
    int shift = 3;
    string result = specialCipher(input, shift);
    cout << "Output: " << result << endl;  // Expected: D2EF3
    return 0;
}

