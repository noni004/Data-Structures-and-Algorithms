#include<iostream>
#include<ctime>

using namespace std ;

clock_t start , finish ;
void swap(int *x , int *y)
{
    int temp = *x ;
    *x = *y ;
    *y = temp ;
}

void printarray(int arr[] , int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " , " ;
    }
} 

void bbsort(int arr[] , int n)
{   int flag ;
    for(int i = 0 ; i < n - 1 ; i++)
    {   flag = 0 ;
        for(int j = 0 ; j < n - i - 1 ; j++ )
        {
            if(arr[j] > arr[j + 1])
            {
                swap( &arr[j] , &arr[j + 1]) ;
                flag = 1 ;
            }
        }
    }

    if(flag == 0) ;
    {
        return ;
    }
    
}

int main()
{   
    
    start = clock() ;
    rand() ;
    int size ;
    cout << " Enter the size of the array " << endl ;
    cin >> size ;

    int arr[size] ;
    for(int i = 0 ; i < size ; i++)
    {
        arr[i] = rand() % size ;
    }
    
    cout << " Array before sorting " << endl ;
    printarray(arr , size) ;
    cout << endl ;
    bbsort(arr , size) ;

    
    cout << " Array after sorting " << endl ;
    printarray(arr , size) ;

    cout << endl ;
    finish = clock() ;

    float time_taken = float(finish - start)/float(CLOCKS_PER_SEC) ;
    cout << " Time taken in sorting " << float(time_taken) << endl ;
    return 0 ;
}
