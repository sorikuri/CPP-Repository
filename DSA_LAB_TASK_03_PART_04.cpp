#include <iostream>
#include <ctime>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Insertion Sort
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int original[20] =
    {
        45, 12, 89, 23, 5,
        67, 34, 90, 11, 56,
        78, 2, 39, 81, 17,
        63, 8, 29, 95, 41
    };

    cout << "Comparison of Sorting Algorithms\n\n";

    cout << "Elements\tBubble Sort\tInsertion Sort\n";

    for (int n = 15; n <= 20; n++)
    {
        int arr1[20], arr2[20];

        // Copy original array
        for (int i = 0; i < n; i++)
        {
            arr1[i] = original[i];
            arr2[i] = original[i];
        }

        // Measure Bubble Sort time
        clock_t start1 = clock();

        bubbleSort(arr1, n);

        clock_t end1 = clock();

        double bubbleTime =
            double(end1 - start1) / CLOCKS_PER_SEC;

        // Measure Insertion Sort time
        clock_t start2 = clock();

        insertionSort(arr2, n);

        clock_t end2 = clock();

        double insertionTime =
            double(end2 - start2) / CLOCKS_PER_SEC;

        cout << n << "\t\t"
             << bubbleTime << " sec\t"
             << insertionTime << " sec\n";
    }

    return 0;
}

