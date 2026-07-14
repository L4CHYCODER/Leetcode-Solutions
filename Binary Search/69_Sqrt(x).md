# 69. Sqrt(x)

## Problem

Given a non-negative integer `x`, return the integer square root of `x`.

The returned value should be the largest integer whose square is less than or equal to `x`.

---

## Approach

This problem is solved using **Binary Search on Answer**.

* The possible answer lies between `0` and `x`.
* Find the middle value (`mid`).
* If `mid × mid <= x`, then `mid` is a valid answer.

  * Store it.
  * Search on the right for a larger valid answer.
* Otherwise, search on the left.

To avoid integer overflow, use:

```cpp
1LL * mid * mid
```

---

## Intuition

Instead of searching inside an array, we binary search over the range of possible answers.

The goal is to find the **largest valid integer** whose square does not exceed `x`.

---

## Pattern

**Binary Search on Answer**

---

## Complexity

* **Time:** `O(log x)`
* **Space:** `O(1)`
