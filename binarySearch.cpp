

#include <iostream>

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    int mid;
    std::cout << left << std::endl;
    std::cout << right << std::endl;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        std::cout << mid << std::endl;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int target = 10;
    int index = binarySearch(myArray, size, target);

    if (index == -1)
    {
        std::cout << "Element not found" << std::endl;
    }
    else
    {
        std::cout << "Element found at index " << index << std::endl;
    }

    return 0;
}
