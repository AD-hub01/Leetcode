# LeetCode 123 - Best Time to Buy and Sell Stock III

## Problem

You are given an array `prices` where `prices[i]` represents the price of a stock on the `i-th` day.

Find the **maximum profit** you can achieve with at most **two transactions**.

A transaction consists of:

* Buying one stock
* Selling one stock

You must sell the stock before buying again.

---

## Intuition

The goal is to maximize profit using at most **two buy-and-sell transactions**.

A simple approach would be to try every possible combination of transactions, but that would be inefficient.

Instead, we keep track of the best possible state after:

* First buy
* First sell
* Second buy
* Second sell

As we move through the prices, each state is updated to represent the maximum profit possible up to that point.

The final **second sell** state represents the maximum profit achievable using at most two transactions.

---

## Approach

Use **Dynamic Programming / State Tracking**.

Maintain four states:

1. **First Buy** — maximum profit after buying for the first transaction.
2. **First Sell** — maximum profit after selling the first transaction.
3. **Second Buy** — maximum profit after buying for the second transaction.
4. **Second Sell** — maximum profit after selling the second transaction.

For every stock price, update these states to determine whether buying or selling at the current price improves the maximum profit.

This allows both transactions to be handled in a single traversal.

---

## Data Structure Used

* **Variables** — to store the maximum profit for each transaction state.
* **Dynamic Programming / State Tracking** — to keep track of the best decisions made so far.

---

## Complexity Analysis

### Time Complexity

**O(n)**

The prices array is traversed only once.

### Space Complexity

**O(1)**

Only four variables are maintained regardless of the size of the input.

---

## Key Takeaway

The main concept is **Dynamic Programming with four transaction states**.

Track the best result after each important action:

```text
First Buy → First Sell → Second Buy → Second Sell
```

The final **Second Sell** state gives the maximum profit possible with at most two transactions.

**Time:** `O(n)`
**Space:** `O(1)`
