print("Enter the number of elements you want to search from")
z = int(input("> ")) # no of elements to search from

print("enter the numbers")
a = [int(x) for x in input("> ").split()] # creating list of elements from which we can search

print("\nenter the number you want to search\n ")
x = int(input(">")) # Target element want to be searched

if len(a) == z:  # checking if array length and no of elements in a list is same or not
    z = sorted(a) # sorting the array
    print("entered sorted list is %r" % z) # printing the list in ascending order

    def binary_Search(z, bottom, top, x):
        while bottom <= top:

            mid = bottom + (top - bottom) // 2 #same as (bottom + top / 2) but considers overflow condition when bottom + top might be larger than range of int

            # Checking  if x is present at mid
            if z[mid] == x:
                return mid

            # If x is greater than mid, ignore left half
            elif z[mid] < x:
                bottom = mid + 1

            # If x is smaller than mid, ignore right half
            else:
                top = mid - 1

        return -1 # if element is not present it will retuen -1


    result = binary_Search(z, 0, len(z) - 1, x)
    print("the number is at %d position" % result)

else:
    print("No of elements and input no of elements not matching \nplease try again")