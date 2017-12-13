## Heap Sort Algorithm

Heap Sort algorithm inserts all elements (from an unsorted array) into a heap then swap the first element (maximum) with the last element(minimum) and reduce the heap size (array size) by one because last element is already at its final location in the sorted array. Then we heapify the first element because swapping has broken the max heap property. We continue this process until heap size remains one.

Hereafter swapping, it may not satisfy the heap property. So, we need to adjust the location of element to maintain heap property. This process is called heapify. Here we Recursively fix the children until all of them satisfy the heap property.
### HERE ARE SOME KEY POINTS OF HEAP SORT ALGORITHM –

1.Heap Sort is one of the best examples of comparison based sorting algorithm.<br>

2.Time complexity of Max-Heapify function is O(logn). Time complexity of Build-Max-Heap() function is O(n) .<br>

3.Performance of Heap Sort is O(n+n*logn) which is evaluated to O(n*logn) in all  3 cases (worst, average and best) .<br>

4.It is an in-place sorting algorithm as it requires a constant amount of additional space.<br>

5.Heap sort and Quick Sort both are in-place sorting algorithm but heap sort has an advantage over quick sort in worst case as heap sort run in O(n*logn) even in worst case.<br>

6.Heap Sort is not a stable sort, it does not retrieve the same order of equal elements in the sorted array.<br>

**In case of Min heap We need to use min-heapify in palce of max-heapify**

[visualize Heap Sort Algorithm](https://www.cs.usfca.edu/~galles/visualization/HeapSort.html)
