# LeetCode 117 - Populating Next Right Pointers in Each Node II

## Problem

Given a binary tree where each node has a `next` pointer, populate the `next` pointer of each node so that it points to the **next node on the same level**.

If there is no next node on the same level, the `next` pointer should be set to `NULL`.

Unlike Problem 116, this binary tree **is not necessarily perfect**.

---

## Intuition

We need to connect nodes that belong to the same level.

For example:

```text
        1
       / \
      2   3
     /     \
    4       5
```

The `next` pointers should become:

```text
1 → NULL
2 → 3 → NULL
4 → 5 → NULL
```

Since nodes on the same level need to be connected, **level-order traversal (BFS)** is a natural approach.

We can process each level and connect the nodes from left to right.

---

## Approach

Use **Breadth-First Search (BFS)** with a queue.

* Start with the root node.
* Process all nodes belonging to the current level.
* Keep track of the previous node while processing the level.
* Connect the previous node's `next` pointer to the current node.
* Add the current node's children to the queue.
* After processing a level, the last node's `next` remains `NULL`.
* Continue until all levels have been processed.

Because the tree may be incomplete, we only connect children that actually exist.

---

## Data Structure Used

* **Queue** — to perform level-order traversal.
* **Next Pointer** — to connect nodes on the same level.
* **Variable / Pointer** — to keep track of the previous node in the current level.

---

## Complexity Analysis

### Time Complexity

**O(n)**

Every node is visited exactly once.

### Space Complexity

**O(n)**

The queue can contain nodes from the largest level of the tree. In the worst case, this can be `O(n)`.

---

## Key Takeaway

The main concept is **BFS + Next Pointer Connection**.

Process the tree level by level and connect every node to the next node on the same level.

The important difference from **LeetCode 116** is that this tree **does not have to be perfect**, so some nodes may have missing children.

**Time:** `O(n)`
**Space:** `O(n)`
