# LeetCode 84 - Largest Rectangle in Histogram

## Problem

Given an array of integers `heights` representing the histogram's bar heights, where each bar has a width of `1`, return the **area of the largest rectangle** in the histogram.

### Example

**Input:**

```text
heights = [2,1,5,6,2,3]
```

**Output:**

```text
10
```

The largest rectangle is formed using the bars with heights `5` and `6`.

---

## Intuition

For each bar, we can consider its height as the **minimum height** of a rectangle.

To find the largest rectangle using that bar, we need to determine:

* The first smaller bar on the **left**
* The first smaller bar on the **right**

This tells us the maximum width over which the current bar can extend.

The area can then be calculated as:

```text
Area = Height × Width
```

Checking all bars and their boundaries directly would take `O(n²)` time.

To improve this, we use a **Monotonic Increasing Stack**.

---

## Approach

We maintain a stack containing the **indices of bars in increasing order of height**.

### Steps

1. Traverse the histogram from left to right.
2. If the current bar is taller than or equal to the bar at the top of the stack, push its index.
3. If the current bar is shorter:

   * Pop bars from the stack.
   * The popped bar becomes the height of the rectangle.
   * The current index represents the first smaller bar on the right.
   * The new top of the stack represents the first smaller bar on the left.
4. Calculate the width:

```text
width = current_index - stack_top - 1
```

If the stack becomes empty:

```text
width = current_index
```

5. Calculate the area and update the maximum area.
6. Add a `0` at the end of the array so that all remaining bars are processed.

---

## Why Monotonic Stack?

The stack allows us to find the boundaries of each bar efficiently.

Each index is:

* Pushed into the stack once.
* Popped from the stack at most once.

Therefore, the entire algorithm runs in linear time.

---

## Complexity Analysis

### Time Complexity

```text
O(n)
```

Each bar is pushed and popped at most once.

### Space Complexity

```text
O(n)
```

The stack can contain up to `n` indices in the worst case.

---


## Key Takeaway

The most important concept in this problem is the **Monotonic Increasing Stack**.

It helps efficiently determine how far each histogram bar can extend while maintaining its height.

> **For every bar, find its maximum possible width and calculate `height × width`.**

### Complexity

```text
Time  : O(n)
Space : O(n)
```
