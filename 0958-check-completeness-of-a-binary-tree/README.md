# LeetCode 958 - Check Completeness of a Binary Tree

## Problem

Given the root of a binary tree, determine whether the tree is a **complete binary tree**.

A complete binary tree is a tree where:

* Every level is completely filled except possibly the last level.
* In the last level, all nodes are as far **left as possible**.

---

## Intuition

A complete binary tree follows a strict order when its nodes are viewed **level by level from left to right**.

During a level-order traversal, once we encounter a `NULL` position, there should not be any more non-null nodes afterward.

For example:

```text id="r5l2kc"
        1
       / \
      2   3
     / \  /
    4   5 6
```

This is complete because the last level is filled from left to right.

But:

```text id="7qkqyb"
        1
       / \
      2   3
       \   \
        5   7
```

is not complete because there are missing positions before later nodes.

---

## Approach

Use **Breadth-First Search (BFS)** with a queue.

Process the tree level by level and include `NULL` children in the traversal.

Maintain a flag indicating whether a `NULL` node has been encountered.

* Before encountering `NULL`, nodes can have children normally.
* Once a `NULL` position is found, every following position must also be `NULL`.
* If a non-null node appears after a `NULL` position, the tree is not complete.
* If traversal finishes without violating this condition, the tree is complete.

---

## Data Structure Used

* **Queue** — to perform level-order traversal.
* **Boolean Flag** — to track whether a `NULL` position has already been encountered.

---

## Complexity Analysis

### Time Complexity

**O(n)**

Every node is processed once.

### Space Complexity

**O(n)**

The queue can contain up to `n` elements in the worst case.

---

## Key Takeaway

The main concept is:

**BFS + NULL Position Checking**

During level-order traversal, once a `NULL` position is encountered, **no non-null node should appear afterward**.

This ensures that the last level is filled completely from **left to right**.

**Time:** `O(n)`
**Space:** `O(n)`
