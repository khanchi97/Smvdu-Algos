Binary search is a search method which find position of target value within sorted array.
Divide and conquer technique is used to solve this problem.
Binary search compares the target value to the middle element of the array; if they are unequal, the half in which the target cannot lie is eliminated and the search continues on the remaining half until it is successful. 
If the search ends with the remaining half being empty, the target is not in the array.
Worst-case performance	O(log n)
Best-case performance	O(1)
Average performance	O(log n)
Worst-case space complexity O(1)