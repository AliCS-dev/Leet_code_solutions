# Palindrome Number Checker (C++)

This project is a simple C++ program that checks whether a given integer is a **palindrome** — a number that reads the same backward as forward (e.g., 121, 1331, 101).

## 🔍 How It Works

The program includes a function `isPalindrome(int x)` which checks if a number is a palindrome **without converting the number to a string**. This is done by reversing half of the number and comparing it with the other half, which improves efficiency and avoids unnecessary conversions.

### Key Logic:

- Any negative number is **not** a palindrome.
- Any number ending in `0` (but not `0` itself) is also **not** a palindrome.
- The function reverses the last half of the number and compares it to the first half.
- Works for both even and odd-length numbers.

### Example:

For `x = 101`, the program will output: