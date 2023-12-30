#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {23, 15, 0, 91, 1};
    int small = 999, temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];   // 23
                arr[i] = arr[j]; // 15
                arr[j] = temp;   // 23
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "after sorting " << arr[i] << endl;
    }

    // checking if the arr[i] is greater than the small and if so then
    // val of small will be the arr[i]
    // for (int i = 0; i < 5; i++)
    // {
    //     if (small > arr[i])
    //     {
    //         small = arr[i];
    //     }
    // }

    // for (size_t i = 0; i < count; i++)
    // {
    //     /* code */
    // }

    // cout << "Smallest is " << small << endl;
    // cout << "Largest is " << large << endl;
}