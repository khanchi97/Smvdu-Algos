# Binary search program
def binary_search(array, target):
    lower = 0
    upper = len(array)
    while lower < upper:
        mid = lower + (upper - lower) // 2     #calculating mid
        val = array[mid]
        if target == val:        # checking if target value is at mid or not
            return mid
        elif target > val:       # if target value is greater than vaue at mid we will search at left of mid
            if lower == mid:
                break
            lower = mid
        elif target < val:       # if target value is lesser than vaue at mid we will search at right of mid
            upper = mid
    return "Target not foud"     # if target not present


print("Enter the number of elements you want to search from")
z = int(input(">"))
print("Enter the numbers")
a = [int(x) for x in input("> ").split()]   # entering the array
array = sorted(a)                           # sorting the array

if z == len(array):
     print("enter the target number")
     target = int(input(">"))                # entering target element
     ans = binary_search(array, target)      # calling binary_search function
     print("The target number %d is at %r position" %(target, ans))