#include<iostream>
#define SIZE 8

using namespace std;

class CircularQueue
{
    private:
    int array[SIZE],front,rear;

    public:
    CircularQueue()
    {
        front = rear = -1;
    }

    void insert(int);
    void display();
    void remove();
};

void CircularQueue::insert(int data)
{
        if(front==rear+1||(front==0&&rear==SIZE-1))
        {
                cout<<"\nQueue has reached maximum limit of"<<SIZE;
                return;
        }

        else if(front==-1)
        {
            front = rear = 0;
        }

        else if(rear==SIZE-1)
            rear=0;

        else
        rear++;


        array[rear]=data;
}

void CircularQueue::display()
{
        int i;

        if(front==-1)
        {
            cout<<"\nQueue is empty";
            return;
        }

        if(rear>=front)
        {
            for(i=front;i<rear;i++)
            cout<<array[i]<<"<--";

            cout<<array[rear];
        }

        else
        {
            for(i=front;i<SIZE;i++)
            cout<<array[i]<<"<--";
            for(i=0;i<rear;i++)
            cout<<array[i]<<"<--";

            cout<<array[rear];
        }
}

void CircularQueue::remove()
{
        if(front==-1)
        {
            cout<<"\nQueue is empty, nothing to remove";
            return;
        }

        cout<<"\nElement deleted is : "<<array[front];
        array[front]=0;

        if(front==rear)
        {
            front = rear = -1;
        }

        else if (front == SIZE -1)
        {
            front = 0;
        }

        else
        front++;

}

main()
{

    char choice;
    int data;
    CircularQueue cq;

    do
    {
        cout<<"\nMain Menu\n1.Insert\n2.Remove\n3.Display\n4.Exit\n\nEnter your choice....";
        cin>>choice;

        switch(choice)
        {
            case '1':   cout<<"\nEnter the data : ";
                        cin>>data;
                        cq.insert(data);
                        break;
            case '2':   cq.remove();
                        break;
            case '3':   cq.display();
                        break;
            case '4':   return 0;

            default:    cout<<"\nInvalid choice";
        }

    }while(choice!='4');

    return 0;
}



