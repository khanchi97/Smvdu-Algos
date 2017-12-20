#Implementation of Fibonacci Search
def Fibonacci_Search(arr, n):
    #n - element to search
    #arr - array in which we are gonna operate
    length = len(arr)   #Length of the array
    fib_2 = 0 #Fibonacci Number
    fib_1 = 1 #Next Fibonacci Number
    fib_n = fib_1 + fib_2

    #Storing the smallest fibonacci to
    #fib_n upto n
    while(fib_n < length):
        fib_2 = fib_1
        fib_1 = fib_n
        fib_n = fib_1 + fib_2

    #Setting up a offset variable
    offset = -1

    #Main logic behind the fibonacci Sort
    while(fib_n > 1):
        i = min(offset+fib_2, n-1)
        if(arr[i] < n):
            fib_n = fib_1
            fib_1 = fib_2
            fib_2 = fib_n - fib_1
            #Resetting the offset
            offset = i

        elif(arr[i] > n):
            fib_n = fib_2
            fib_1 = fib_1 - fib_2
            fib_2 = fib_n - fib_1

        else:
            return i
    #Comparing the last element with n 
    if(fib_1 & arr[offset + 1] == n):
        return offset+1

    return -1

#main function
def main():
    arr = [int(i) for i in input().split()]
    n = int(input("Enter the element you want to search\n"))
    ans = Fibonacci_Search(arr, n)
    if(ans == -1):
        print("Element not found")
    else:
        print("ELement found in position ", ans+1)

main()
