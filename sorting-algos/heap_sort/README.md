## Heap Sort Algorithm

Heap Sort algorithm inserts all elements (from an unsorted array) into a heap then swap the first element (maximum) with the last element(minimum) and reduce the heap size (array size) by one because last element is already at its final location in the sorted array. Then we heapify the first element because swapping has broken the max heap property. We continue this process until heap size remains one.

Hereafter swapping, it may not satisfy the heap property. So, we need to adjust the location of element to maintain heap property. This process is called heapify. Here we Recursively fix the children until all of them satisfy the heap property.

[visualize Heap Sort Algorithm](https://www.cs.usfca.edu/~galles/visualization/HeapSort.html)
