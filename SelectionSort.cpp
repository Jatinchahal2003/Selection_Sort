#include <iostream>
using namespace std;

void SelectionSort(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        int minindex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minindex])
            {
                minindex = j;
            }
        }
        swap(a[i], a[minindex]);
    }

    cout << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter Number of elements : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    SelectionSort(n, arr);

    return 0;
}