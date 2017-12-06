#********** SELECTION_SORT *********
# enter n value and enter that many number in your list
# in-place sorting algorithm
# The smallest element is selected from the unsorted list 
# and swapped with the leftmost element, and that element becomes a part of the sorted list.
# This continues until whole list is sorted 
# Input: Value of n, List Elements
# Output: Unsorted list, Sorted List

l = []
n = int(input("Enter no. of elements in list (n): "))

for i in range(n):
    l.append(int(input()))

print("Unsorted list: ")
print(l)

MIN = l[0]

for i in range(n-1):
    
    MIN = i
    
    for j in range(i+1,n):
        if l[j] < l[MIN]:
            temp = l[j]
            l[j] = l[MIN]
            l[MIN] = temp

print("Sorted List: ")
print(l)