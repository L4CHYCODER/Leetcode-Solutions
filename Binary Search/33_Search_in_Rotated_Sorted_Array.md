# 33. Search in Rotated Sorted Array

## Intuition

A normal Binary Search works only on a sorted array. Since the given array is rotated, we cannot directly compare `nums[mid]` with the target and discard half of the array.

The key observation is that **at every step, at least one half of the array is always sorted**.

* If `nums[left] <= nums[mid]`, then the left half is sorted.
* Otherwise, the right half is sorted.

Once we know which half is sorted, we simply check whether the target lies inside that sorted half.

* If the target lies inside the sorted half, continue searching there.
* Otherwise, search in the other half.

By discarding one half in every iteration, we achieve a time complexity of **O(log n)**.

---

## Approach

1. Initialize two pointers: `left` and `right`.
2. Calculate `mid`.
3. If `nums[mid] == target`, return `mid`.
4. Check which half is sorted.

   * If the left half is sorted:

     * If the target lies between `nums[left]` and `nums[mid]`, move `right`.
     * Otherwise, move `left`.
   * Otherwise, the right half is sorted:

     * If the target lies between `nums[mid]` and `nums[right]`, move `left`.
     * Otherwise, move `right`.
5. If the target is not found, return `-1`.

---

## Key Observation

At every iteration:

* First identify the sorted half.
* Check whether the target belongs to that sorted half.
* Discard the other half.

---

## Complexity

* **Time Complexity:** `O(log n)`
* **Space Complexity:** `O(1)`
