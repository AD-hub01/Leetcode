# LeetCode 232 - Implement Queue using Stacks

## Problem

Implement a **First-In-First-Out (FIFO) queue** using only stack operations.

The queue should support the following operations:

* `push(x)` — Add element `x` to the back of the queue.
* `pop()` — Remove and return the element at the front.
* `peek()` — Return the element at the front without removing it.
* `empty()` — Return whether the queue is empty.

---

## Intuition

A **stack** follows **LIFO (Last-In-First-Out)** order, while a queue follows **FIFO (First-In-First-Out)** order.

To make stacks behave like a queue, we can use **two stacks**:

* **Input Stack** — stores newly added elements.
* **Output Stack** — provides elements in queue order.

When elements are transferred from the input stack to the output stack, their order gets reversed.

For example:

```text id="q8e1wy"
Input Stack:   [1, 2, 3]

Transfer →

Output Stack:  [3, 2, 1]
```

Now `1` is at the top of the output stack, which correctly represents the front of the queue.

---

## Approach

Use **two stacks**:

### Input Stack

Used to store elements whenever `push()` is called.

### Output Stack

Used for `pop()` and `peek()` operations.

If the output stack is empty, transfer all elements from the input stack into the output stack. This reverses their order and makes the oldest element available at the top.

This allows us to implement FIFO behavior using only stack operations.

---

## Data Structure Used

* **Two Stacks**

  * Input stack
  * Output stack

---

## Complexity Analysis

### Push

**O(1)**

The element is directly added to the input stack.

### Pop

**Amortized O(1)**

An element may need to be transferred between stacks, but each element is transferred at most once from the input stack to the output stack.

### Peek

**Amortized O(1)**

Uses the same two-stack mechanism as `pop()` without removing the element.

### Empty

**O(1)**

Simply check whether both stacks are empty.

### Space Complexity

**O(n)**

The two stacks together can contain all `n` elements.

---

## Key Takeaway

The main concept is **using two stacks to simulate a queue**.

```text id="x6z5we"
Stack 1 → stores incoming elements
Stack 2 → provides FIFO order
```

By transferring elements between the two stacks, the **LIFO behavior of stacks is converted into FIFO behavior of a queue**.

**Push:** `O(1)`
**Pop:** `Amortized O(1)`
**Peek:** `Amortized O(1)`
**Space:** `O(n)`
