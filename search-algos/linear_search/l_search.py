# Declaration of array.

arr = []

# Taking input the total size of the array from the user.

n = int(input("Enter size of the array :  "))

# The function below takes input the numbers from the users as stdin.

for i in range(0,n):
    print("Enter element %d : " %i+1)
    arr.append(int(input()))

k = int(input("Enter the value you want to find : "))

# found is a boolean variable which tells whether the value we want to find 
# is present in the array or not.

found = False

for i in range(len(arr)):
    # If k is present in arr
 if(arr[i] == k):
    found = True
    print("%d found at %dth position : " %(k,i+1))
    break
# If k is not present in arr
if(found == False):
 print("%d is not in the list." %k)