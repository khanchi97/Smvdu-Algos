def countsort(a,n):
    #This array will contain the sorted order
    final = [0]*n 
 
    x=max(a)+1
    #This array contains the count of each element
    count = [0]*x 
 
    #Final sorted array to be returned
    ans = [0]*n 
 
    for i in a:
        count[i] += 1
 
    #Changing count array so that now it contains the actual position of elements in final array
    for i in range(1,x):
        count[i] += count[i-1]
        
    #Building the final array
    for i in range(n):
        final[count[a[i]]-1] = a[i]
        count[a[i]] -= 1
 
    #Copy the sorted order from final array to ans array
    for i in range(n):
        ans[i] = final[i]
    return ans 
 
print countsort( [1, 2, 7, 3, 2, 1, 4, 2, 3, 2, 1], 11 )
