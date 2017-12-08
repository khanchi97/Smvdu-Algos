def gnome_sort(arr,size):
    i=0
    while(i<size):
        if (i==0):          #first element has no previous element
            i=i+1
        elif(arr[i-1]>arr[i]):
            temp=arr[i-1]
            arr[i-1]=arr[i]
            arr[i]=temp
            i=i-1           #swaps previous element with current and moves one step back
        else:
            i=i+1           #moves one step front


if(__name__=='__main__'):
    size=int(input('Enter the number of elements in array\n'))
    print('Enter the elements')
    arr=[int(input()) for i in range(size)]
    gnome_sort(arr,size)
    print('The sorted array is')
    print(arr)