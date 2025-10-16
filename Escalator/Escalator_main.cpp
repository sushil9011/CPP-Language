#include "Escalator.cpp"
using namespace std;
int main()
{
    int n, choice, value;
    cout << "Enter size of stack: ";
    cin >> n;
    Stack s(n);

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top Element\n";
        cout << "4. Display\n";
        cout << "5. Check if Empty\n";
        cout << "6. Check if Full\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.top_element();
            break;
        case 4:
            s.display();
            break;
        case 5:
            cout << (s.isEmpty() ? "Stack is Empty" : "Stack is not Empty") << endl;
            break;
        case 6:
            cout << (s.isFull() ? "Stack is Full" : "Stack is not Full") << endl;
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}
