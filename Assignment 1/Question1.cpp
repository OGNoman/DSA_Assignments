#include <iostream>
using namespace std;
int main()
{
  int arr[100];
  int n = 0, choice;

  cout << "\n-- MENU --\n";
  cout << "1. CREATE\n";
  cout << "2. DISPLAY\n";
  cout << "3. INSERT\n";
  cout << "4. DELETE\n";
  cout << "5. LINEAR SEARCH\n";
  cout << "6. EXIT\n";
  cout << "Enter your choice: ";
  cin >> choice;

  switch (choice)
  {
  case 1:
  {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    cout << "Array created.\n";
    break;
  }
  case 2:
  {
    if (n == 0)
      cout << "Array is empty!\n";
    else
    {
      cout << "Array elements: ";
      for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
      cout << endl;
    }
    break;
  }
  case 3:
  {
    int pos, val;
    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;
    for (int i = n; i >= pos; i--)
      arr[i] = arr[i - 1];
    arr[pos - 1] = val;
    n++;
    cout << "Element inserted.\n";
    break;
  }
  case 4:
  {
    int pos;
    cout << "Enter position: ";
    cin >> pos;
    for (int i = pos - 1; i < n - 1; i++)
      arr[i] = arr[i + 1];
    n--;
    cout << "Element deleted.\n";
    break;
  }
  case 5:
  {
    int key, found = 0;
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == key)
      {
        cout << "Element found at position " << i + 1 << endl;
        found = 1;
        break;
      }
    }
    if (!found)
      cout << "Element not found.\n";
    break;
  }
  case 6:
  {
    cout << "Exiting program...\n";
    break;
  }
  default:
    cout << "Invalid choice!\n";
  }
  return 0;
}
