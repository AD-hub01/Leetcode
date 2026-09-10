# LeetCode 2416 - Sum of Prefix Scores of Strings

## Problem

You are given an array of strings `words`.

For each string, calculate the **sum of the scores of all its prefixes**.

The **score of a string** is defined as the number of strings in `words` that have that string as a prefix.

For every word, return its total prefix score.

---

## Intuition

A prefix is any starting part of a word.

For example:

```text id="w6fz8e"
word = "abc"

Prefixes:
"a"
"ab"
"abc"
```

For every prefix, we need to know **how many words contain that prefix**.

A **Trie (Prefix Tree)** is ideal for this problem because words with the same prefixes share the same path.

While inserting the words into the Trie, we can maintain a count at every node representing how many words pass through that prefix.

Then, while processing a word, we can traverse its prefixes and add the count stored at each corresponding Trie node.

---

## Approach

Use a **Trie** to store all the words.

Each Trie node contains:

* Links to its child characters.
* A count representing how many words pass through that node.

### Building the Trie

Insert every word into the Trie.

Whenever a character is visited during insertion, increase the count of that Trie node.

This makes the count at a node equal to the number of words having that prefix.

### Calculating Scores

For each word:

* Traverse its characters through the Trie.
* At every character, retrieve the count stored at that node.
* Add these counts together.
* The resulting sum is the prefix score for that word.

---

## Data Structure Used

* **Trie / Prefix Tree** — to efficiently store and search prefixes.
* **Array / Hash Map** — to store child nodes depending on the implementation.
* **Count** — to store the number of words sharing each prefix.

---

## Complexity Analysis

Let `N` be the number of words and `L` be the total number of characters across all words.

### Time Complexity

**O(L)**

Every character is processed during Trie insertion and again while calculating the prefix scores.

### Space Complexity

**O(L)**

In the worst case, the Trie can contain one node for every character across all words.

---

## Key Takeaway

The main concept is:

**Trie + Prefix Frequency**

A Trie allows all words sharing the same prefix to share the same nodes.

Each Trie node stores:

```text id="5l9c6n"
Prefix → Number of words having that prefix
```

For each word, add the counts of all its prefix nodes to get its final score.

**Time:** `O(L)`
**Space:** `O(L)`
