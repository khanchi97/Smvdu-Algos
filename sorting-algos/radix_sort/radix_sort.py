def count_sort(arr,exp,size):   #radix sort is only applicable for non-negative integers
    aux = [0]*size          #contains sorted array
    freq=[0]*10             #frequency of digits 0 to 9
    for i in arr:
        temp = int(i/exp)   #exp is power of 10 according to digit used for sorting
        temp=temp%10        #temp stores the required digit of the number
        freq[temp]+=1
    for i in range(1,10):
        freq[i]+=freq[i-1]  #finding cumulative frequency for determining place to insert
    j=size-1
    while(j>=0):
        temp=int(arr[j]/exp)
        temp=temp%10
        aux[freq[temp]-1]=arr[j]    #inserting the element and decreasing frequency
        freq[temp]=freq[temp]-1
        j=j-1
    for i in range(0,size):
        arr[i] = aux[i]         #copying sorted array into original array


def radix_sort(arr,size):
    temp=max(arr)
    digit=0
    while(temp!=0):
        digit=digit+1
        temp=int(temp/10)
    exp=1
    for i in range(digit):
        count_sort(arr,exp,size)
        exp*=10

if(__name__=='__main__'):
    size=int(input('Enter the number of elements in array\n'))
    print('Enter the elements')
    arr=[int(input()) for i in range(size)]
    radix_sort(arr,size)
    print('The sorted array is')
    print(arr)