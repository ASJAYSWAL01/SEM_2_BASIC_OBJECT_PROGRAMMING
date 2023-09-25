#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int arr[n];
    int sum = 0;
    double avg = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    avg = static_cast<double>(sum) / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
