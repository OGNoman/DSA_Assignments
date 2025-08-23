#include <iostream>
using namespace std;
void removeDuplicates(int arr[], int n)
{
  int k = 0;
  for (int i = 0; i < n; i++)
  {
    bool isDuplicate = false;
    for (int j = 0; j < k; j++)
    {
      if (arr[i] == arr[j])
      {
        isDuplicate = true;
        break;
      }
    }
    if (isDuplicate == false)
    {
      arr[k++] = arr[i];
    }
  }
  cout << "Array after removing duplicates: ";
  for (int i = 0; i < k; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int arr[] = {2, 3, 2, 5, 3, 7, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  removeDuplicates(arr, n);
  return 0;
}
