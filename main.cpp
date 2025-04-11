#include <iostream>
#include <cctype>

int letter_to_number(char c) {
    c = std::tolower(c);
    return (c >= 'a' && c <= 'z') ? c - 'a' + 1 : 0;
}

char number_to_letter(int n) {
    return (n >= 1 && n <= 26) ? 'a' + n - 1 : '\0';
}

int main() {
    std::cout << letter_to_number('c') << std::endl;  // Works
    std::cout << letter_to_number('!') << std::endl;  // Returns 0
    std::cout << number_to_letter(3) << std::endl;    // Works
    std::cout << number_to_letter(30) << std::endl;   // Returns null character
    return 0;
}