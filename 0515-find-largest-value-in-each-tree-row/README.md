# LeetCode 515 - Find Largest Value in Each Tree Row

## Problem

Given the root of a binary tree, return an array containing the **largest value in each row** of the tree.

Each row represents one level of the binary tree.

---

## Intuition

We need to find the maximum value among all nodes at every level.

Since a binary tree can be processed **level by level**, **Breadth-First Search (BFS)** is a suitable approach.

While processing each level, we keep track of the largest value found in that level and add it to the result.

---

## Approach

Use **Breadth-First Search (BFS)** with a queue.

* Start with the root node.
* Process all nodes belonging to the current level.
* Keep a variable to store the maximum value for that level.
* Compare every node's value with the current maximum.
* Add the maximum value of the level to the result.
* Add the children of each node to the queue.
* Repeat until all levels are processed.

---

## Data Structure Used

* **Queue** — to process the binary tree level by level.
* **List / Array** — to store the maximum value from each level.

---

## Complexity Analysis

### Time Complexity

**O(n)**

Every node in the binary tree is visited exactly once.

### Space Complexity

**O(n)**

The queue can contain up to `n` nodes in the worst case.

---

## Key Takeaway

The main concept is **BFS + Maximum Value per Level**.

For every level of the binary tree, find the largest node value and store it in the result.

**Time:** `O(n)`
**Space:** `O(n)`
