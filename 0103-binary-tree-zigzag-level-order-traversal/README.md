# LeetCode 103 - Binary Tree Zigzag Level Order Traversal

## Problem

Given the root of a binary tree, return the **zigzag level order traversal** of its nodes' values.

In zigzag traversal, the nodes are visited level by level, but the direction alternates between:

* **Left → Right**
* **Right → Left**
* **Left → Right**
* And so on.

---

## Intuition

This problem is similar to normal **level order traversal**, but the direction of traversal changes after every level.

A **Queue** can be used to process the tree level by level. For every level, we collect the node values and reverse the order when the current level requires a right-to-left traversal.

A boolean variable can be used to keep track of the current direction.

---

## Approach

Use **Breadth-First Search (BFS)** with a queue.

* Start with the root node in the queue.
* Process all nodes belonging to the current level.
* Store their values in a temporary list.
* Add their left and right children to the queue.
* For alternating levels, reverse the temporary list before adding it to the result.
* Continue until all nodes have been processed.

The direction can be controlled using a simple flag that changes after every level.

---

## Data Structure Used

* **Queue** — to process nodes level by level.
* **List / Array** — to store values of each level and the final result.
* **Boolean Flag** — to track the traversal direction.

---

## Complexity Analysis

### Time Complexity

**O(n)**

Every node is visited once. Reversing the level lists also takes a total of `O(n)` across all levels.

### Space Complexity

**O(n)**

The queue and result can contain up to `n` nodes/values in the worst case.

---

## Key Takeaway

The main concept is **BFS + Alternating Direction**.

Normal level order traversal visits every level from left to right, while zigzag traversal changes the direction after every level.

**Time:** `O(n)`
**Space:** `O(n)`
