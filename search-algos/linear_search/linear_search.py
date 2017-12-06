#******* LINEAR SEARCH *******
# in linear search value to be searched is checked with each element in
# the sequence
# linear search performed on list, tuple, dictionary and string data type

def list_search(l):
    val = int(input("Enter the value to be searched: "))
    try:
        print("Search Successful: %d found at index %d"%(val,l.index(val)))
    except ValueError:
        print("Search Unsucessful: Value not found")


def d_search(d):
    key = input("Enter the key to be searched: ")
    try:
        print("Search Successful: %s found, value retrieved is %s"%(key,d.get(key)))
    except:
        print("Search Unsuccessful: Key-value not found")

def tuple_search(t):
    n = int(input("Enter number to be searched: "))
    if n in t:
        print("Search Successful: %d found at index %d"%(n,t.index(n)))
    else:
        print("Search Unsuccessful: Value not found")    

def strsearch(s):
    substr = input("Enter the substring to be searched: ")
    try:
        print("Search Successful: %s found at index %d"%(substr,s.index(substr,0,len(s))))
    except:
        print("Search Unsuccessful: Substring not found") 

choice = 0
while(choice!=5):
    print("1. List Search \n2. Dictionary Search \n3. Tuple Search \n4. String Search \n5. Exit ")
    n = int(input("Enter your choice: "))

    if n == 1:
        l = []
        n1 = int(input("Enter number of elements in list (n): "))
        print("Enter elements in List: ")
        for i in range(n1):
            l.append(int(input()))

        list_search(l)
    elif n == 2:
        d = {}
        n2 = int(input("Enter the number of dictionary elements (n): "))
        for i in range(n2):
            key = input("Enter key: ")
            value = input("Enter value: ")
            d[key] = value  
        d_search(d)
    elif n == 3:
        l1 = []
        n3 = int(input("Enter the number of tuple elements (n): "))
        print("Enter the elements")
        for i in range(n3):
            l1.append(int(input()))
        t = tuple(l1)
        tuple_search(t)
    elif n == 4:
        s = input("Enter the string element")
        strsearch(s)
    else:
        exit()