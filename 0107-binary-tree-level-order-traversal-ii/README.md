# LeetCode 107 - Binary Tree Level Order Traversal II

## Problem

Given the root of a binary tree, return the **bottom-up level order traversal** of its nodes' values.

The traversal should visit the tree **level by level from left to right**, but the final result must contain the levels in **reverse order**.

---

## Intuition

This problem is almost the same as normal **Level Order Traversal (BFS)**.

The only difference is that instead of returning the levels from the root to the deepest level, we need to return them from the **deepest level back to the root**.

We can perform a normal level order traversal and then reverse the collection of levels at the end.

---

## Approach

Use **Breadth-First Search (BFS)** with a queue.

* Traverse the binary tree level by level.
* Store the values of each level in a separate list.
* Continue until all nodes have been processed.
* Reverse the list of levels to obtain the required bottom-up order.

---

## Data Structure Used

* **Queue** — to process nodes level by level.
* **List / Array** — to store the values of each level.

---

## Complexity Analysis

### Time Complexity

**O(n)**

Every node is visited exactly once. Reversing the list of levels takes `O(n)` in the worst case.

### Space Complexity

**O(n)**

The queue and the result can contain up to `n` nodes/values.

---

## Key Takeaway

The main concept is **BFS with reversed level order**.

First perform a normal level order traversal, then reverse the resulting levels to get the **bottom-up traversal**.

**Time:** `O(n)`
**Space:** `O(n)`
