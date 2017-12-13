#******************* Binary Search *******************************

def binary_search(l,beg,end,val):
            mid = int((beg + end)/2)
            if beg > end:
                return -1
            if l[mid] == val:
                return mid
            elif l[mid] > val:
                return binary_search(l,beg,mid-1,val)
            else:
                return binary_search(l,mid+1,end,val)
                

l = []
n = int(input("enter no. of elements in list (n): "))
print("Enter elements: ")
for i in range(n):
    l.append(int(input()))

l.sort()
print("List: ")
print(l)

val = int(input("Enter value to be searched: "))
beg = 0
end = len(l) - 1
index = binary_search(l,beg,end,val)

if index != -1:
    print("Search sunccessful: Found at index: ",index)
else:
    print("Element Not Found!")            
            
