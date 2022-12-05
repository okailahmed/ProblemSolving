
//==============================
//  This code developed by :   
//     
//   Ahmed Abdel kareem  &  mohsen mahmoud 
// 
//==============================


#include <iostream>

using namespace std;

void rotation(int A[], int K, int arr_size)
{
    int temp;
    for (int j = 0; j < K; j++) // to rotate array in times
    {
        temp = A[arr_size - 1];                 // this mean i assign last value of array in temp
        for (int m = arr_size - 1; m >= 0; m--) // to rotate all array element one time         [3,8,9,7,6]
        {
            A[m] = A[m - 1];                    // a[4] = a[3]   , a[3] = a[2] ,a[2] = a[1] , a[1] = a[0]
        }
        A[0] = temp;
    }

    for (int l = 0; l < arr_size; l++)
    {
        cout << A[l] << " ";
    }
    cout << endl;
}

int main()
{
    int A[5], K;
    int arr_size = 5;

    cout << "Plz enter array elment";

    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }

    cout << "pleaze enter number to rotate ";
    cin >> K;

    rotation(A, K, arr_size);
}