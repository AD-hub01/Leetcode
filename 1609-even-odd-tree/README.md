# LeetCode 1609 - Even Odd Tree

## Problem

A binary tree is called an **Even-Odd Tree** if it satisfies the following conditions:

### Even-indexed levels

* All node values must be **odd**.
* Values must be in **strictly increasing order** from left to right.

### Odd-indexed levels

* All node values must be **even**.
* Values must be in **strictly decreasing order** from left to right.

The root is considered to be at **level 0**.

Return `true` if the binary tree satisfies all these conditions; otherwise, return `false`.

---

## Intuition

The conditions depend on the **level** of each node.

Therefore, we need to process the tree **level by level**.

For every level, we check two things:

1. Whether the node values have the correct **parity** (odd or even).
2. Whether the values follow the required **increasing or decreasing order**.

Since we need to process nodes level by level, **Breadth-First Search (BFS)** is a natural choice.

---

## Approach

Use **BFS with a queue**.

For each level:

* Determine whether it is an even or odd level.
* On an even level:

  * Values must be odd.
  * Values must be strictly increasing.
* On an odd level:

  * Values must be even.
  * Values must be strictly decreasing.
* Compare each node with the previous node in the same level.
* If any condition is violated, return `false`.
* Continue until all levels are checked.

If every level satisfies its conditions, return `true`.

---

## Data Structure Used

* **Queue** — to process the binary tree level by level.
* **Variables** — to keep track of the previous value and current level.

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

The main concept is:

**BFS + Level-Based Conditions**

Remember:

```text
Even Level → Odd values → Strictly Increasing
Odd Level  → Even values → Strictly Decreasing
```

Every node must satisfy both the **parity** and **ordering** condition for its level.

**Time:** `O(n)`
**Space:** `O(n)`
