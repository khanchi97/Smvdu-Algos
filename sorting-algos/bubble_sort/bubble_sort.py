#**********BUBBLE SORT***************
# enter n value and enter that many number in your list
# in bubble sort adjacent values are comapared and swapped
# Input: Value of n, List Elements
# Output: Unsorted list, Sorted List

l = []
n = int(input("Enter no. of elements in list (n): "))
for i in range(n):
    l.append(int(input()))

print("Unsorted list: ")
print(l)

for i in range(n):
    for j in range(0,i+1):
        if l[j]>l[i]:
            temp = l[j]
            l[j] = l[i]
            l[i] = temp

print("Sorted list: ")
print(l)            