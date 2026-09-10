# LeetCode 662 - Maximum Width of Binary Tree

## Problem

Given the root of a binary tree, return the **maximum width** of the tree.

The width of a level is defined as the distance between the **leftmost and rightmost non-null nodes**, including the positions of the null nodes between them.

---

## Intuition

The important part of this problem is that we must consider the positions of **null nodes** between the actual nodes.

For example:

```text id="w8k5pd"
        1
       / \
      3   2
     /     \
    5       9
```

The width of the last level is `4` because the positions can be considered as:

```text id="8g5wpa"
5   null   null   9
```

Simply counting the number of nodes at each level would therefore give an incorrect result.

To keep track of these positions, we can assign each node an **index**, similar to the indexing used for a complete binary tree.

---

## Approach

Use **Breadth-First Search (BFS)** with a queue.

Along with each node, store its corresponding position/index.

For a node at index `i`:

```text id="d8zz0j"
Left Child  = 2 × i
Right Child = 2 × i + 1
```

For every level:

* Identify the index of the first node.
* Identify the index of the last node.
* Calculate the width using their positions.
* Update the maximum width.
* Add the children with their corresponding positions to the queue.

To avoid unnecessarily large index values, the indices can be normalized at every level.

---

## Data Structure Used

* **Queue** — for level-order traversal.
* **Index / Position** — to preserve the relative positions of nodes.
* **List / Variables** — to track the maximum width.

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

**BFS + Position Indexing**

We cannot simply count nodes because **null positions between nodes contribute to the width**.

By assigning each node a position, we can calculate:

```text id="k5eqc3"
Width = Rightmost Position - Leftmost Position + 1
```

**Time:** `O(n)`
**Space:** `O(n)`
