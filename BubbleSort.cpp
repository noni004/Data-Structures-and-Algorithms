#include<iostream>
using namespace std;



void swap (int *x , int *y)
{ 
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void bubbleSort (int arr[] , int size)
{
    int flag = 0;
    for (int i = 0; i < size - 1; i++ )
    {
        flag = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[ j + 1 ])
            {
                swap ( &arr[j] , &arr[ j + 1 ]);
                flag = 1;
            }
        }
        if ( flag == 0 )
        break;
    }
}


int main()
{
    int size;
    cout << " Enter the size of the array " << endl;
    cin >> size;

    int arr[size];
    cout << " Enter the unsorted elements in the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << " You have entered : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }


    bubbleSort (arr , size);
    
    cout << " After sorting " << endl;
    
    for ( int i = 0; i < size ; i++ )
    {
        cout << arr[i] << endl;
    }

return 0;

}
