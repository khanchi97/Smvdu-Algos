## Merge Sort Algorithm
Merge Sort follows the rule of *Divide and Conquer*. In merge sort the unsorted list is divided into N sublists, each having one element, because a list consisting of one element is always sorted. Then, it repeatedly merges these sublists, to produce new sortqed sublists, and in the end, only one sorted list is produced.

Merge Sort is quite fast, and has a time complexity of O(n log n). It is also a stable sort, which means the "equal" elements are ordered in the same order in the sorted list.

### Complexity Analysis
Worst Case Time Complexity : O(n log n)<br>
Best Case Time Complexity : O(n log n)<br>
Average Time Complexity : O(n log n)<br>
Space Complexity : O(n)<br>
Time complexity of Merge Sort is O(n Log n) in all 3 cases (worst, average and best) as merge sort always divides the array in two halves and take linear time to merge two halves.<br>
It requires equal amount of additional space as the unsorted list. Hence its not at all recommended for searching large unsorted lists.<br>
It is the best Sorting technique used for sorting Linked Lists.<br>

[visualize merge sort algorithm](https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/visualize/)
