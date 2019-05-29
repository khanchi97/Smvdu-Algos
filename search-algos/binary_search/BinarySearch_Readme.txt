
-->Binary Search is a searching algorithm that can find a required element in an array in O(log(n)) time
   where n is the number of elements present in array.
-->In this we will be given with an sorted array we will search the element by dividing our region of interest 
   i.e. array in two halves.We will use indices to limit our search i.e start, mid and end.
-->Initially we will set start to 0 and end to n (array size).. mid will be the average of start and end.
-->We will verify if element is present at mid then we will return the index else we will shift our starting
   point or ending point accordingly. Like if the array is sorted in increasing order.Then if currently element
   x to be found is greater than current element at mid then it means it will only be present in later half of
   array so we will shift our start after mid i.e mid+1.. else we will look for first half if element is smaller
   than mid element i.e end=mid-1... we will continously repeat these steps until we find the presence of element
   or if start gets bigger than end then our search gets finished. 

-->We can implement binary search recursively or iteratively too i have shown both implementations
   of the same in the code binarySearch.java  ..

for example for this code..

/* INPUT:
   enter the size of the array : 5
   enter element 1 : 1
   enter element 2 : 2
   enter element 3 : 3
   enter element 4 : 4
   enter element 5 : 5
   Enter element to be searched : 4
   
   OUTPUT:
   Index from iterative binarySearch : 3
   Index from recursive binarySearch : 3
 */ 