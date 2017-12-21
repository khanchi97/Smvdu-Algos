##Bubble Sort

Bubble Sort is an algorithm which is used to sort N elements that are given in a memory for eg: an Array with N number of elements. Bubble Sort compares all the element one by one and sort them based on their values.

It is called Bubble sort, because with each iteration the largest element in the list bubbles up towards the last place, just like a water bubble rises up to the water surface.

Sorting takes place by stepping through all the data items one-by-one in pairs and comparing adjacent data items and swapping each pair that is out of order.

###Time Complexity
In Bubble Sort, n-1 comparisons will be done in 1st pass, n-2 in 2nd pass, n-3 in 3rd pass and so on. So the total number of comparisons will be

(n-1)+(n-2)+(n-3)+.....+3+2+1
Sum = n(n-1)/2
i.e O(n2)
**Hence the complexity of Bubble Sort is O(n2).**
The main advantage of Bubble Sort is the simplicity of the algorithm. Space complexity for Bubble Sort is O(1), because only single additional memory space is required i.e. for temp variable

Best-case Time Complexity will be O(n), it is when the list is already sorted.

###Complexity Analasis
Worst Case Time Complexity : O(n^2)
Best Case Time Complexity : O(n)
Average Time Complexity : O(n^2)
Space Complexity : O(1)



[visualize Bubble Sort](https://visualgo.net/bn/sorting)
