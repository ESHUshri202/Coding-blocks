#include <bits/stdc++.h>
using namespace std;

int merge(int arr1[], int k, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int o = 0;
    while (i < k && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[o] = arr1[i];
            o++;
            i++;
        }
        else
        {
            arr3[o++] = arr2[j++];
        }
    }
    while (i < k)
    {
        arr3[o++] = arr1[i++];
    }

    while (j < m)
    {
        arr3[o++] = arr2[j++];
    }
}

void print(int arr[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};
    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
}