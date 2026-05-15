#include <iostream>
using namespace std;

// Binary Search using Recursion

int binarysearch(int arr[], int start, int end, int target)
{
    // Base condition
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;

    // Element found
    if (arr[mid] == target)
    {
        return mid;
    }

    // Search right half
    else if (target > arr[mid])
    {
        return binarysearch(arr, mid + 1, end, target);
    }

    // Search left half
    else
    {
        return binarysearch(arr, start, mid - 1, target);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = 7;
    int target = 10;

    int result = binarysearch(arr, 0, n - 1, target);

    if (result != -1)
    {
        cout << "Element found at index: " << result;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}
