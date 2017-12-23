A circular queue is a kind of queue where the first and last positions are connected together to form a circle. As it is a queue, here also, insertions take place from rear and deletions take place from the front.
In a normal queue, as we add and delete elements, when rear reaches the last element of the array, we cannot add any more elements even if we have empty places at the start. However, in a circular queue, when rear reaches last if we have empty spaces at start of array, then rear shifts to first element of array and the process continues so that the spaces can be utilized in a better way.

A circular queue is empty when front = rear = -1

A circular queue is full when either front = rear+1, or when front=0 and rear = size-1


In the program, array for circular queue, variables for front and rear, and functions to insert, remove and display the elements are combined together in a class.

The variables front, rear, and the array are obviously declared private to keep them safe.


The functions work as follows:

1)	Inserting

In the array, array[rear] refers to last added element to array(when rear = -1, no element is present in the array), so while adding, we need to change rear to new position and then set array[rear]=value

a.  Check whether the queue is full. If so, display message and return
b.  If queue is empty, set front and rear equal to 0
c.  If rear has reached last position of array, set rear=0
d.  Otherwise, increase rear by 1
e.  Finally set array[rear]=data



2)	Removing

a.  Check whether the queue is empty. If so, display message and return
b.  Change value of array[front] to 0, which is done to say that element is deleted.
c.  If there is only one element(i.e. front = rear), we need to change both to -1 as the queue is empty now
d.  If front is at the last element of the array, set front = 0
e.  Otherwise, increase front by 1


3)	Displaying

a.  Check whether the queue is empty and show queue empty message.
b.  If rear is ahead of front, that means all elements are between front and rear, so use a simple loop from front to rear to show the elements.
c.  If rear is not ahead of front, that means elements are filled from front to SIZE-1 and then from 0 to rear. So, we use loop accordingly.
d.  Since we are showing "<--" between two elements, we don't display last element through the loop. Rather, we write separate line for displaying array[rear], which is the last element of the queue.


The main function simply displays a menu asking users to choose the operation on the queue.



