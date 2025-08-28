#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target)
{
  int left = 0;
  int right = n - 1;
  while (left <= right)
  {
    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] > target)
    {
      right = mid - 1;
    }
    else
    {
      left = mid + 1;
    }
  }
  return -1;
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target;
  cout << "Enter the target element: ";
  cin >> target;
  int ans = binarySearch(arr, n, target);
  if (ans == -1)
  {
    cout << "The target element was not found" << endl;
  }
  else
  {
    cout << "The target element was found at index " << ans << endl;
  }
  return 0;
}