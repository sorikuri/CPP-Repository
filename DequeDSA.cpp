#include <iostream>
using namespace std;

const int MAX = 5;

int arr[MAX];
int front = -1;
int rear = -1;
int size = 0;

// INSERT FROM FRONT
void insertFront(int value)
{
    if (size == MAX)
    {
        cout << "Deque Overflow! Deque is full.\n";
        return;
    }

    if (size == 0)
    {
        front = rear = 0;
    }
    else
    {
        front = (front - 1 + MAX) % MAX;
    }

    arr[front] = value;
    size++;

    cout << value << " inserted from Front.\n";
}

// INSERT FROM REAR
void insertRear(int value)
{
    if (size == MAX)
    {
        cout << "Deque Overflow! Deque is full.\n";
        return;
    }

    if (size == 0)
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }

    arr[rear] = value;
    size++;

    cout << value << " inserted from Rear.\n";
}

// DELETE FROM FRONT
void deleteFront()
{
    if (size == 0)
    {
        cout << "Deque Underflow! Deque is empty.\n";
        return;
    }

    cout << "Deleted element: " << arr[front] << endl;

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }

    size--;
}

// DELETE FROM REAR
void deleteRear()
{
    if (size == 0)
    {
        cout << "Deque Underflow! Deque is empty.\n";
        return;
    }

    cout << "Deleted element: " << arr[rear] << endl;

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        rear = (rear - 1 + MAX) % MAX;
    }

    size--;
}

// DISPLAY DEQUE
void display()
{
    if (size == 0)
    {
        cout << "Deque is empty.\n";
        return;
    }

    cout << "Deque elements: ";

    int i = front;

    for (int count = 0; count < size; count++)
    {
        cout << arr[i] << " ";
        i = (i + 1) % MAX;
    }

    cout << endl;
}

// CHECK OPERATION PERMISSION
bool isAllowed(int type, int operation)
{
    // 1 = Input Restricted
    // 2 = Output Restricted
    // 3 = General Deque
    // 4 = Queue-like Deque

    if (type == 1)
    {
        return operation != 1;
    }

    else if (type == 2)
    {
        return operation != 4;
    }

    else if (type == 3)
    {
        return true;
    }

    else if (type == 4)
    {
        return operation == 2 || operation == 3;
    }

    return false;
}

int main()
{
    int type, choice, value;

    cout << "========== DEQUE IMPLEMENTATION ==========\n";

    cout << "\nSelect Deque Configuration:\n";
    cout << "1. Input Restricted Deque\n";
    cout << "2. Output Restricted Deque\n";
    cout << "3. General Deque\n";
    cout << "4. Queue-like Deque\n";

    cout << "\nEnter your choice: ";
    cin >> type;

    if (type < 1 || type > 4)
    {
        cout << "Invalid configuration!\n";
        return 0;
    }

    cout << "\nDeque configuration selected successfully!\n";

    do
    {
        cout << "\n========== DEQUE MENU ==========\n";
        cout << "1. Insert from Front\n";
        cout << "2. Insert from Rear\n";
        cout << "3. Delete from Front\n";
        cout << "4. Delete from Rear\n";
        cout << "5. Display Deque\n";
        cout << "6. Exit\n";

        cout << "\nEnter your operation: ";
        cin >> choice;

        if (choice == 6)
        {
            cout << "Exiting Deque Program...\n";
            break;
        }

        if (choice == 5)
        {
            display();
            continue;
        }

        if (choice < 1 || choice > 4)
        {
            cout << "Invalid operation!\n";
            continue;
        }

        if (!isAllowed(type, choice))
        {
            cout << "Operation not allowed in this Deque configuration!\n";
            continue;
        }

        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertFront(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                insertRear(value);
                break;

            case 3:
                deleteFront();
                break;

            case 4:
                deleteRear();
                break;
        }

    } while (choice != 6);

    return 0;
}