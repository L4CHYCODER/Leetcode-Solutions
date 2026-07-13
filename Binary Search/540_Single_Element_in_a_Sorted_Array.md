## Intuition

A brute-force approach would be to count the frequency of every element and return the one that appears once. However, this takes **O(n)** time, while the problem asks for **O(log n)** time, which strongly suggests using **Binary Search**.

The important observation is that the array is **sorted**.

Before the single element, every pair starts at an **even index**:

* `(0,1)`
* `(2,3)`
* `(4,5)`

After the single element, this pattern shifts, and every pair starts at an **odd index** because one element no longer has its duplicate before it.

For every middle index:

* If `mid` is **even**, its duplicate should be at `mid + 1`.
* If `mid` is **odd**, its duplicate should be at `mid - 1`.

If this expected pairing exists, it means the single element has **not been reached yet**, so we discard the left half and continue searching on the right.

If the expected pairing is broken, it means the shift has already occurred, so the single element lies in the left half (possibly at `mid` itself). Therefore, we keep `mid` in the search space by setting `high = mid`.

We continue this process until `low == high`. At that point, only one element remains in the search space, which is the required single element.

### Algorithm

1. Initialize `low = 0` and `high = n - 1`.
2. While `low < high`:

   * Compute `mid`.
   * If `mid` is even:

     * If `nums[mid] == nums[mid + 1]`, search the right half.
     * Otherwise, search the left half including `mid`.
   * If `mid` is odd:

     * If `nums[mid] == nums[mid - 1]`, search the right half.
     * Otherwise, search the left half including `mid`.
3. Return `nums[low]`.

### Complexity

* **Time:** `O(log n)` because the search space is halved in every iteration.
* **Space:** `O(1)` since only a few variables are used.
