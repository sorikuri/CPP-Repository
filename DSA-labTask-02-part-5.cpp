
#include <iostream>
using namespace std;

// Binary Search Algorithm
int BinarySearch(int A[], int s, int T)
{
    int start = 0, end = s - 1;
    int comparison_count_binary = 0;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        comparison_count_binary++;

        if (T > A[mid])
        {
            start = mid + 1;
        }
        else if (T < A[mid])
        {
            end = mid - 1;
        }
        else
        {
            cout << "Binary Search Index: " << mid << endl;
            cout << "Total Comparisons in Binary Search: "
                 << comparison_count_binary << endl;
            return mid;
        }
    }

    cout << "Not Found in Binary Search" << endl;
    cout << "Total Comparisons in Binary Search: "
         << comparison_count_binary << endl;

    return -1;
}

// Linear Search Algorithm
int LinearSearch(int Arr[], int S, int Target)
{
    int comparison_count_linear = 0;

    for (int j = 0; j < S; j++)
    {
        comparison_count_linear++;

        if (Target == Arr[j])
        {
            cout << "Linear Search Index: " << j << endl;
            cout << "Total Comparisons in Linear Search: "
                 << comparison_count_linear << endl;
            return j;
        }
    }

    cout << "Not Found in Linear Search" << endl;
    cout << "Total Comparisons in Linear Search: "
         << comparison_count_linear << endl;

    return -1;
}

int main()
{
    int size = 9;
    int arr[] = {3, 6, 9, 12, 15, 18, 21, 24, 27};
    int target = 24;

    cout << "--- Binary Search ---" << endl;
    BinarySearch(arr, size, target);

    cout << endl;

    cout << "--- Linear Search ---" << endl;
    LinearSearch(arr, size, target);

    return 0;
}
