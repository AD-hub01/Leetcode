# LeetCode 199 - Binary Tree Right Side View

## Problem

Given the root of a binary tree, imagine standing on the **right side of the tree**.

Return the values of the nodes that are visible from the right side, ordered from the **top level to the bottom level**.

---

## Intuition

From the right side, we can see only the **rightmost node of each level**.

For example:

```text
        1
       / \
      2   3
       \   \
        5   4
```

The nodes visible from the right side are:

```text
[1, 3, 4]
```

Since we need one node from each level, **Breadth-First Search (BFS)** is a natural choice.

During level-order traversal, the last node processed at every level is the rightmost node.

---

## Approach

Use **Breadth-First Search (BFS)** with a queue.

* Traverse the tree level by level.
* Determine the number of nodes present at the current level.
* Process all nodes of that level.
* The **last node** processed at that level is visible from the right side.
* Add that node's value to the result.
* Continue until every level has been processed.

---

## Data Structure Used

* **Queue** — to perform level-order traversal.
* **List / Array** — to store the visible node from each level.

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

The main concept is **BFS + Rightmost Node of Each Level**.

During level-order traversal, simply select the **last node from every level**.

**Time:** `O(n)`
**Space:** `O(n)`
