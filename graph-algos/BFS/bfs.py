class listnode:
    def __init__(self):
        self.data=None
        self.next=None
        self.pred=None
        self.dist=0
        self.color="white"

def calculatedistance(a,i):
    b=list()
    b.append(a[i])
    print(0 , "                     " , a[i].data)
    while(len(b)!=0):
        x=b.pop(0)
        temp=x.next
        while temp!=None:
            if temp.color=="white" and a[temp.data].color=='white':
                temp.dist=1+x.dist
                temp.color="grey"
                temp.pred=x
                if a[temp.data].data==temp.data:
                    a[temp.data].color=temp.color
                    a[temp.data].dist=temp.dist
                    a[temp.data].pred=temp.pred
                b.append(a[temp.data])
                print(temp.dist,"                     ",temp.data)
            temp=temp.next
        x.color="black"







print("Enter the number of vertices")
v=int(input())
a=list()
for i in range(v):
    temp=listnode()
    temp.data=i
    a.append(temp)
print("Enter the number of edges")
e=int(input())
print("Start entering the edges vertices")




for i in range(e):
    x,y=input().split()
    x=int(x)
    y=int(y)
    temp1=listnode()
    temp2=listnode()
    temp1.data=x
    temp2.data=y
    if a[x].data==x:
        temp=a[x].next
        a[x].next=temp2
        temp2.next=temp

    if a[y].data==y:
        temp=a[y].next
        a[y].next=temp1
print("Distance       DataValue")
calculatedistance(a,1)
