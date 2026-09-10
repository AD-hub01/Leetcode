# LeetCode 416 - Partition Equal Subset Sum

## Problem

Given an integer array `nums`, determine whether it is possible to divide the array into **two subsets** such that the sum of the elements in both subsets is equal.

Each element must belong to exactly one of the two subsets.

Return `true` if such a partition is possible; otherwise, return `false`.

---

## Intuition

If the entire array has a total sum of `S`, then for two subsets to have equal sums:

```text id="8zj0w4"
Subset 1 = S / 2
Subset 2 = S / 2
```

Therefore, the problem can be converted into:

> **Can we find a subset whose sum is exactly `totalSum / 2`?**

This is a variation of the **0/1 Knapsack / Subset Sum** problem.

Each number can either:

* Be included in the required subset.
* Not be included.

We use Dynamic Programming to keep track of which subset sums are achievable.

---

## Approach

Use **Dynamic Programming (DP)** for the subset sum problem.

1. Calculate the total sum of all elements.
2. If the total sum is odd, an equal partition is impossible.
3. Calculate the target:

```text id="k7r8ec"
target = totalSum / 2
```

4. Determine whether a subset of `nums` can produce exactly this target sum.
5. Each number can be used at most once because every array element belongs to only one subset.
6. If the target sum can be achieved, an equal partition exists.

---

## Data Structure Used

* **Dynamic Programming Array** — stores whether a particular sum can be achieved.
* **Boolean State** — represents whether a target sum is possible.

---

## Complexity Analysis

Let:

* `n` = number of elements.
* `S` = total sum of all elements.

### Time Complexity

**O(n × S)**

For every element, we potentially check all possible sums up to the target.

### Space Complexity

**O(S)**

Using a 1D DP array, we only need to store information for sums up to `S / 2`.

---

## Important Optimization

Since we only need to determine whether a sum is possible, a **1D DP array** can be used instead of a 2D table.

This reduces space complexity from:

```text id="m4q9dx"
O(n × S)
```

to:

```text id="kq2whs"
O(S)
```

---

## Key Takeaway

The main idea is to convert the equal partition problem into a **Subset Sum problem**.

```text id="5p2z1e"
Total Sum is Odd
        ↓
     false

Total Sum is Even
        ↓
Target = Total Sum / 2
        ↓
Can we make this target using a subset?
        ↓
      Yes → true
       No → false
```

The problem is fundamentally a **0/1 Knapsack / Subset Sum + Dynamic Programming** problem.

**Time:** `O(n × S)`
**Space:** `O(S)`
