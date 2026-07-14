# 34. Find First and Last Position of Element in Sorted Array

## Problem

Given a sorted array and a target value, return the first and last occurrence of the target.

If the target does not exist, return `[-1, -1]`.

---

## Approach

This problem requires **two Binary Searches**.

### First Binary Search

* Find the first occurrence.
* When the target is found:

  * Save the index.
  * Continue searching on the left.

### Second Binary Search

* Find the last occurrence.
* When the target is found:

  * Save the index.
  * Continue searching on the right.

---

## Intuition

A normal Binary Search returns **any occurrence** of the target.

To obtain the first or last occurrence, save the current answer and continue searching in the appropriate direction.

---

## Pattern

**Save Answer & Continue Searching**

---

## Complexity

* **Time:** `O(log n)`
* **Space:** `O(1)`
