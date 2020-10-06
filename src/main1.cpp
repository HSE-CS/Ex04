#include "task1.h"
#include <algorithm>
#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int arr[102];
  int n;
  cin >> n;
  int size = 10;
  srand(time(nullptr));
  for (int i = 0; i < 10; i++)
    cout << arr[i] << " ";

  qsort(arr, size, sizeof(int), comp1);
  for (int i = 0; i < 10; i++)
    cin >> arr[i];

}
