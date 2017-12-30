#************JUMP SEARCH************
# can be performed in sorted array only
# skip and checks block of values, if value is within block
# then linear search is performed in that block
# Input: List values, No. of elements in the list, value to be searched
# Output: Index value of the searched Item

import math

def jump_search(l,val,n):
    
    step = int(math.sqrt(n))

    block = 0
    while l[int(min(step,n)-1)] < val:
        block = step
        step = step + math.sqrt(n)
        if block >= n:
            return -1

    while l[int(block)] < val:
        block = block + 1

        if block == min(step,n):
            return -1

    if l[int(block)] == val:
        return block
    
    return -1


n = int(input("Enter the number of elements in the list (n): "))
arr = [None]*n
print("Enter list elements: ")
for i in range(n):
    e = int(input())
    arr[i] = e

arr = sorted(arr)
print("Sorted list is: ")
print(arr)
x = int(input("Enter the value to be searched: "))
pos = jump_search(arr,x,n)

if pos != -1:
     print("Search Successful: Found at index %d"%(pos))
else:
    print("Search Unsuccessful: Not found!")        