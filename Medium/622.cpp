class MyCircularQueue
{
private:
    int *arr;
    int front;
    int rear;
    int size;
    int noOfElements;

public:
    MyCircularQueue(int k)
    {
        size = k;
        arr = new int[size];
        front = 0;
        rear = -1;
        noOfElements = 0;
    }

    bool enQueue(int value)
    {
        if (isFull())
            return false;
        if (rear == (size - 1))
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = value;
        noOfElements++;
        return true;
    }

    bool deQueue()
    {
        if (isEmpty())
            return false;
        if (front == (size - 1))
        {
            front = 0;
        }
        else
        {
            front++;
        }

        noOfElements--;
        return true;
    }

    int Front()
    {
        if (isEmpty())
            return -1;
        return arr[front];
    }

    int Rear()
    {
        if (isEmpty())
            return -1;
        return arr[rear];
    }

    bool isEmpty()
    {
        return noOfElements == 0;
    }

    bool isFull()
    {
        return noOfElements == size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */