// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     string str = "shweta";
//     stack<char> s;

//     for (int i = 0; i < str.length(); i++)
//     {
//         char ch = str[i];
//         s.push(ch);
//     }

//     string ans = "";

//     while (!s.empty())
//     {
//         char ch = s.top();
//         ans.push_back(ch);
//         s.pop();
//     }
//     cout << " answer is : " << ans << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int capacity;

public:
    // Constructor to initialize the stack
    Stack(int size)
    {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    // Destructor to free memory
    ~Stack()
    {
        delete[] arr;
    }

    // Push operation to add an element to the stack
    void push(int x)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    // Pop operation to remove an element from the stack
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return arr[top--];
    }

    // Peek operation to return the top element of the stack
    int peek()
    {
        if (!isEmpty())
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    // Check if the stack is empty
    bool isEmpty()
    {
        return top == -1;
    }

    // Check if the stack is full
    bool isFull()
    {
        return top == capacity - 1;
    }

    // Get the size of the stack
    int size()
    {
        return top + 1;
    }
};

int main()
{
    Stack stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element is: " << stack.peek() << endl;

    cout << "Stack size is: " << stack.size() << endl;

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop(); // Attempting to pop from an empty stack

    if (stack.isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
