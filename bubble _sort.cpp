#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {7, 3, 9, 2, 8};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
