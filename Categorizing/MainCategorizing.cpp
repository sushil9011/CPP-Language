#include "Categorizing.cpp"

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    vector<int> numbers;
    cout << "Enter elements below:\n";
    for (int i = 0; i < size; i++) {
        int x;
        cout << "Element " << i + 1 << ": ";
        cin >> x;
        numbers.push_back(x);
    }

    cout << "\nCurrent List: ";
    for (int val : numbers)
        cout << val << " ";

    int option;
    do {
        cout << "\n\nChoose an operation:\n";
        cout << "1. Selection Sort (Descending)\n";
        cout << "2. Merge Sort (Ascending)\n";
        cout << "3. Linear Search\n";
        cout << "4. Binary Search\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                sortSelectionDesc(numbers, size);
                cout << "After Selection Sort (Descending): ";
                for (int v : numbers)
                    cout << v << " ";
                break;

            case 2:
                sortMergeAsc(numbers, 0, size - 1);
                cout << "After Merge Sort (Ascending): ";
                for (int v : numbers)
                    cout << v << " ";
                break;

            case 3: {
                int pos = findLinear(numbers, size);
                if (pos == -1)
                    cout << "Element not found.\n";
                else
                    cout << "Element found at index: " << pos << endl;
                break;
            }

            case 4: {
                int target;
                cout << "Enter element to search: ";
                cin >> target;
                sortMergeAsc(numbers, 0, size - 1);
                int res = findBinary(numbers, 0, size - 1, target);
                if (res == -1)
                    cout << "Element not found.\n";
                else
                    cout << "Element found at index: " << res << endl;
                break;
            }

            case 0:
                cout << "Program terminated.\n";
                break;

            default:
                cout << "Invalid input. Try again.\n";
        }

    } while (option != 0);

    return 0;
}
