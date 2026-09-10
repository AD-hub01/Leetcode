# LeetCode 102 - Binary Tree Level Order Traversal

## Problem

Given the root of a binary tree, return the **level order traversal** of its nodes' values.

Level order traversal means visiting the nodes **level by level**, from left to right.

### Example

For the binary tree:

```text
        3
       / \
      9   20
         /  \
        15   7
```

The level order traversal is:

```text
[[3], [9, 20], [15, 7]]
```

---

## Intuition

The tree needs to be traversed one level at a time.

To achieve this, we need a way to keep track of the nodes that are currently waiting to be processed. A **Queue** is suitable because it follows **FIFO (First In, First Out)** order.

We process the nodes from the front of the queue and add their left and right children to the back.

This naturally allows us to process all nodes of one level before moving to the next level.

---

## Approach

Use **Breadth-First Search (BFS)** with a queue.

* Start by adding the root node to the queue.
* Process nodes from the queue level by level.
* For each level, store the values of all nodes belonging to that level.
* Add the children of those nodes to the queue.
* Continue until the queue becomes empty.
* Store each level as a separate list in the final result.

---

## Data Structure Used

* **Queue** — to process tree nodes in FIFO order.
* **List / Array** — to store the nodes of each level and the final traversal.

---

## Complexity Analysis

### Time Complexity

**O(n)**

Every node in the binary tree is visited exactly once.

### Space Complexity

**O(n)**

The queue can contain up to `n` nodes in the worst case, and the result also stores all node values.

---

## Key Takeaway

The main concept used in this problem is **Breadth-First Search (BFS)**.

A **queue** allows us to process the binary tree level by level, from left to right.

**Time:** `O(n)`
**Space:** `O(n)`
