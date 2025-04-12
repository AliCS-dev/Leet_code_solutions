# Reverse Integer – LeetCode Solution



## 🚀 Problem Description

Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2³¹, 2³¹ - 1]`, return `0`.

### Example 1:

Input: x = 123 Output: 321
### Example 2:
Input: x = 120 Output: 21

## 💡 Constraints
- `-2³¹ <= x <= 2³¹ - 1`
- The environment does not allow storing 64-bit integers.

---

## 🧠 Approach

- Use modulus and division to extract and reverse digits.
- Handle negative numbers by checking the sign of `x`.
- Ensure the reversed number stays within the 32-bit signed integer range.

---

## 🧮 Time and Space Complexity

- **Time Complexity:** O(log₁₀(x)) → because we're processing each digit.
- **Space Complexity:** O(1) → no extra space is used.
