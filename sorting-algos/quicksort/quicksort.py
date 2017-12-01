# Recursive quicksort - Divide and Conquer

def quicksort(arr, start, end):
	'''
	   Implements the recursive part of quicksort.
	   Divide and conquer - Divides the given list based on the partition index returned by the 
	   partition() function and recursively calls itself for divided lists.
	'''
	if(start < end):
		pindex = partition(arr, start, end)
		quicksort(arr, start, pindex - 1)
		quicksort(arr, pindex + 1, end)

def partition(arr, start, end):
	'''
		Reorders all the elements lesser than are equal to pivot towards the left.
		The pivot is considered to be the last element in the list.
		At last the pivot is placed in the correct position.
	'''
	pindex = start
	pivot = arr[end]
	for i in range(start, end):
		if(arr[i] <= pivot):
			arr[i], arr[pindex] = arr[pindex], arr[i]
			pindex += 1
	arr[end], arr[pindex] = arr[pindex], arr[end]
	return pindex

if (__name__ == '__main__'):
	n = int(input("Enter the number of elements in the array"))
	arr = []
	print("Enter the elements")
	for i in range(n):
		temp = int(input())
		arr.append(temp)
	quicksort(arr, 0, n-1)
	print("After quicksort")
	for i in range(n):
		print(arr[i], end = " ")
