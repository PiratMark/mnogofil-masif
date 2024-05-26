#include "sum.hpp"



void OdnomernMasiv()
{
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << endl << "Max: " << max << endl << "Min: " << min;
}


