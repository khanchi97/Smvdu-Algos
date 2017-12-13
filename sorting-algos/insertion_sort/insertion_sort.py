def insertion_sort(arr,size):
    i=1             #array with one element is already sorted so i starts with 1
    while(i<size):
        j=i-1
        key=arr[i]
        while(key<arr[j] and j>=0): #loop inserts key in the already sorted array
            arr[j+1]=arr[j]
            arr[j]=key
            j=j-1
        i=i+1

if(__name__=='__main__'):
    arr=[]
    size=int(input('Enter the number of elements in array\n'))
    print('Enter the elements')
    for i in range(size):
        temp=int(input())
        arr.append(temp)
    insertion_sort(arr,size)
    print('The array after sorting is')
    print(arr)