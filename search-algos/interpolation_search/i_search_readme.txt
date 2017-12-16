The Interpolation Search is used for uniformly distributed sorted array.
The Interpolation Search is an improvement over Binary Search for instances, where the values in a sorted array are uniformly distributed. 
Binary Search always goes to middle element to check. 
On the other hand interpolation search may go to different locations according the value of key being searched. 
For example if the value of key is closer to the last element, interpolation search is likely to start search toward the end side.

To find the position to be searched, it uses following formula for pos instead of midpoint
The idea of formula is to return higher value of pos
when element to be searched is closer to arr[hi]. And
smaller value when closer to arr[lo]
pos = low + [ (x-arr[low])*(high-low) / (arr[high]-arr[low]) ]

RECURSIVE ALGORITHM


Step1: FIRST,calculate the value of “pos” using the probe position formula.
Step2: If it is a match, return the index of the item, and exit.
Step3: If the item is less than arr[pos],recursively search the element in the left sub-array by calculate the pos position of the left sub-array. 
	Otherwise recursively search in the right sub-array.
Step4: Repeat until a match is found or if the sub-array reduces to zero, return -1 and exit.

*****
Selection sort has been used to sort the array
After sorting,the original indexes of elements are lost. So, a separate array oindexA is used in c and cpp implementations
to convert between sorted and unsorted indices.