#******* INSERTION SORT ***********
# enter n value and enter that many number in your list
# in-place comparison-based sorting algorithm
# the lower part of an array is maintained to be sorted
# An element which is to be 'inserted in this sorted 
# sub-list, has to find its appropriate place and then 
# it has to be inserted there. 
# Input: Value of n, List Elements
# Output: Unsorted list, Sorted List

def insertion_sort(a,size):
    index = 0
    value = 0
    for i in range(size):
        index = i
        value = a[i]
        while index > 0 and a[index-1] > value:
            a[index] = a[index-1]
            index = index - 1
        a[index] = value    


l = []
n = int(input("Enter no. of elements in the list (n): "))

for i in range(n):
    l.append(int(input()))

print("Unsorted list: ")
print(l)

insertion_sort(l,n)

print("Sorted list: ")
print(l)

