# LeetCode 637 - Average of Levels in Binary Tree

## Problem

Given the root of a binary tree, return the **average value of the nodes on each level** of the tree.

The answer should be returned as an array of floating-point values.

---

## Intuition

We need to calculate the average separately for every level of the binary tree.

Since nodes need to be processed **level by level**, **Breadth-First Search (BFS)** is a natural approach.

For each level, we calculate:

```text
Average = Sum of Node Values / Number of Nodes
```

We then store the average in the result.

---

## Approach

Use **Breadth-First Search (BFS)** with a queue.

* Start with the root node.
* Process all nodes belonging to the current level.
* Calculate the sum of their values.
* Count the number of nodes in that level.
* Divide the sum by the number of nodes to obtain the average.
* Add the average to the result.
* Add the children of the current nodes to the queue.
* Continue until all levels have been processed.

---

## Data Structure Used

* **Queue** — to process nodes level by level.
* **List / Array** — to store the average of each level.

---

## Complexity Analysis

### Time Complexity

**O(n)**

Every node is visited exactly once.

### Space Complexity

**O(n)**

The queue can contain up to `n` nodes in the worst case.

---

## Key Takeaway

The main concept is **BFS + Average of Each Level**.

For every level:

```text
Average = Sum of values / Number of nodes
```

Calculate this value and add it to the result.

**Time:** `O(n)`
**Space:** `O(n)`
