# LeetCode 12 - Integer to Roman

## Problem

Given an integer, convert it into its corresponding **Roman numeral**.

Roman numerals use the following symbols:

| Symbol | Value |
| ------ | ----: |
| I      |     1 |
| V      |     5 |
| X      |    10 |
| L      |    50 |
| C      |   100 |
| D      |   500 |
| M      |  1000 |

Some numbers use subtractive notation, such as:

* `IV = 4`
* `IX = 9`
* `XL = 40`
* `XC = 90`
* `CD = 400`
* `CM = 900`

---

## Intuition

The idea is to represent the number using the **largest possible Roman numeral values first**.

For example, while converting `1994`, we first take `M (1000)`, then `CM (900)`, followed by `XC (90)`, and finally `IV (4)`.

This works because Roman numerals follow a fixed set of values and subtractive combinations.

---

## Approach

Use a collection of Roman numeral symbols arranged from **largest value to smallest value**.

For each value:

1. Determine how many times it can be used in the given number.
2. Add the corresponding Roman symbol to the result.
3. Reduce the remaining number.
4. Continue until the number becomes zero.

The subtractive combinations such as `IV`, `IX`, `XL`, `XC`, `CD`, and `CM` are included directly in the value-symbol mapping.

---

## Data Structure Used

* **List / Array** — to store Roman numeral values and their corresponding symbols.
* **String** — to build the final Roman numeral.

---

## Complexity Analysis

### Time Complexity

**O(1)**

The number of possible Roman numeral values is fixed, so the number of operations does not grow with the input size.

### Space Complexity

**O(1)**

Only a fixed set of Roman numeral symbols and the output string are used.

---

## Key Takeaway

The main idea is to use a **greedy approach** by always selecting the largest possible Roman numeral value and handling subtractive combinations explicitly.

**Time:** `O(1)`
**Space:** `O(1)`
