import random

dic = {}
class MinHeapNode:
    def setNode(self, left, right, freq, char):
        self.left = left
        self.right = right
        self.freq = freq
        self.char = char
        return self
def huffmanCoding(arr, freq):
    heapArr = []

    for i in range(len(arr)):
        heapArr.append(MinHeapNode().setNode(None, None , freq[i], arr[i]))
        print(heapArr[i].freq, heapArr[i].char)

    while(len(heapArr)>1):
       left = heapArr.pop(0)
       right = heapArr.pop(0)
       insertionSort(heapArr, MinHeapNode().setNode(left, right, left.freq+right.freq, left.char + right.char))

    rootheap= heapArr.pop()

    return rootheap


def printHeap(heap, str):
    if heap.left != None:
        printHeap(heap.left, str + '0')

    if heap.right !=None:
        printHeap(heap.right, str + '1' )

    if heap.left == None:
        print(heap.char, str)
        dic[heap.char] = str

def insertionSort(heapArr, heap):
    index = len(heapArr)
    for i in range(len(heapArr)):
        if heap.freq < heapArr[i].freq:
           index  = i
           break
    heapArr.insert(index, heap)

def makeNewString(arr, freq):

    freqcopy = freq[:]
    arrcopy = arr[:]
    strval = ''
    while len(freqcopy) >0:
        number = random.randrange(0,len(freqcopy))
        freqcopy[number] = freqcopy[number]-1
        strval = strval + arrcopy[number]
        if freqcopy[number] == 0:
            freqcopy.pop(number)
            arrcopy.pop(number)

    return strval

def endcoding(str):
    strval = ''
    for i in range(len(str)):
        strval = strval + dic[str[i]]

    return strval

def huffmandecode(rootheap, strvalencoded):

    index = 0;
    orgstr = '';

    while index < len(strvalencoded):
        str = getchar(rootheap, index, strvalencoded)
        index = index + len(dic[str])
        orgstr = orgstr + str
    return orgstr

def getchar(rootheap, index, strvalencoded):
    if rootheap.left == None:
        return rootheap.char

    number = int(strvalencoded[index])
    if number ==0:
        return getchar(rootheap.left, index+1, strvalencoded)

    if number ==1:
        return getchar(rootheap.right, index+1, strvalencoded)

arr = ['a', 'b', 'c', 'd', 'e', 'f']
freq = [5, 9, 12, 13, 16, 45]
rootheap = huffmanCoding(arr, freq)

printHeap(rootheap, '')

strval  = makeNewString(arr, freq)
print("org     ", strval)

strvalencoded = endcoding(strval)
print("encoded ",strvalencoded)

orgencoded = huffmandecode(rootheap, strvalencoded)
print("decoded ", orgencoded)
