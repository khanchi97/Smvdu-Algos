# Jump Search Algorithm implemented in Python 3

Jump Search works on sorted list where an optimal block size of
sqaure root n is selected, n is the number of elements in list.
Instead of performing linear search on whole list. Blocks are 
checked in sorted list. If value to be searched falls within the 
block then index of that value is retrieved from linear search
in that block otherwise we jump to next block.

# Algorithm Implemented

Algorithm JumpSearch
  Input: An ordered list L, its length n and a search key val.
  Output: The position of val in L, or nothing if val is not in L.

  block ← 0
  step ← ⌊√n⌋

  while Lmin(step,n)-1 < val do
    block ← step
    step ← step + ⌊√n⌋
    if block ≥ n then
      return nothing

  while L[block] < val do
    block ← block + 1
    if block = min(step,n)
      return nothing

  if L[block] = s then
    return block
  else
    return nothing


# Sample Test case

Enter the number of elements in the list (n): 9
Enter list elements:
5
4
2
3
1
7
6
9
8
Sorted list is:
[1, 2, 3, 4, 5, 6, 7, 8, 9]
Enter the value to be searched: 8
Search Successful: Found at index 7

# Time Complexity

The algorithm runs in O(√n) time