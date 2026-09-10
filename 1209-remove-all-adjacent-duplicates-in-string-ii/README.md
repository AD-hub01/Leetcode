# LeetCode 1209 - Remove All Adjacent Duplicates in String II

## Problem

Given a string `s` and an integer `k`, repeatedly remove **k adjacent, equal characters** from the string.

Continue removing groups until no more such groups exist.

Return the final string after all possible removals.

---

## Intuition

The important part is that removing one group of characters can create a **new group of k equal characters**.

For example:

```text
s = "deeedbbcccbdaa"
k = 3
```

When three consecutive equal characters are removed, the characters around them can become adjacent and may form another removable group.

A **stack** is useful because it allows us to keep track of consecutive characters and their frequencies while processing the string from left to right.

---

## Approach

Use a **stack** where each entry stores:

```text
(character, count)
```

For every character:

* If it is different from the character at the top of the stack, add it with a count of `1`.
* If it is the same, increase the count of the top element.
* When the count reaches `k`, remove that entry from the stack.
* Continue processing the remaining characters.

This automatically handles newly formed adjacent groups after a removal.

---

## Data Structure Used

* **Stack** — to maintain characters and their consecutive frequencies.
* **Pair / Tuple** — to store each character along with its count.

---

## Complexity Analysis

### Time Complexity

**O(n)**

Each character is processed and added to or removed from the stack at most a constant number of times.

### Space Complexity

**O(n)**

In the worst case, the stack can contain information for all characters.

---

## Key Takeaway

The main concept is:

**Stack + Frequency Counting**

Instead of repeatedly searching for groups of `k` characters, maintain the count of consecutive characters while traversing the string.

When a count reaches `k`, remove that group immediately.

**Time:** `O(n)`
**Space:** `O(n)`
