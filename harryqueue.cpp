
#include <iostream>
using namespace std;

class Queue
{
public:
    int f;
    int r;
    int *arr;
    int size;
    Queue()
    {
        arr = new int[size];
    }
};

int isfull(Queue *q)
{
    if (q->f == q->size - 1)
    {
        cout << "queue is full " << endl;
    }
    return 0;
}
int isempty(Queue *q)
{
    if (q->f == q->r)
    {
        cout << "queue is empty " << endl;
    }
    return 0;
}
void enque(int val, Queue *q)
{
    if (isfull(q))
    {
        cout << "FULL" << endl;
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        cout << "Enqued element: " << val << endl;
    }
}

int deque(int val, Queue *q)
{
    int a = -1;
    if (isempty(q))
    {
        cout << "empty" << endl;
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    Queue q;
    q.size = 5;
    q.f = q.r = 0;

    enque(12, &q);
    enque(15, &q);
    enque(16, &q);
    enque(17, &q);
    enque(18, &q);
    enque(18, &q);

    cout << "dequeing element: " << deque(12, &q) << endl;
    cout << "dequeing element: " << deque(15, &q) << endl;

    if (isempty(&q))
    {
        printf("Queue is empty\n");
    }
    if (isfull(&q))
    {
        printf("Queue is full\n");
    }

    return 0;
}