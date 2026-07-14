# 153. Find Minimum in Rotated Sorted Array

## Problem

Given a rotated sorted array with unique elements, find and return the minimum element.

---

## Approach

Use Binary Search to identify the sorted half in every iteration.

* If the current search space is already sorted (`nums[l] <= nums[r]`), the minimum is the first element.
* Otherwise:

  * If the left half is sorted:

    * Record `nums[l]` as a candidate.
    * Search the right (rotated) half.
  * Else:

    * Record `nums[mid]` as a candidate.
    * Search the left (rotated) half.

Maintain the minimum value throughout the search.

---

## Intuition

The minimum element always lies in the rotated portion of the array.

Whenever a half is completely sorted, its minimum is already known, so we record it and continue searching in the other half.

---

## Pattern

**Find Property in Rotated Array**

---

## Complexity

* **Time:** `O(log n)`
* **Space:** `O(1)`
