#include<iostream>

using namespace std;

void printArray(int arr[] , int size)
{

    for(int i = 0 ; i < size ; i++)
    
    {
     
     cout << arr[i] << "  " ;
    
    }
}

void insertionSort(int arr[] , int size)
{
    int key ;
    
    for(int i = 1 ; i < size ; i++)
    
    {
        int j = i - 1 ;
        
        key = arr[i] ;
        
        while(j >= 0 && arr[j] > key)
        
        {
        
            arr[j + 1] = arr[j] ;
            
            j = j - 1 ;

        }
        
        arr[j + 1] = key ;
    }
}

int main()
{
    rand() ;

    int size ;
    
    cout << " Enter the size of the array " << endl ;
    
    cin >> size ;

    int arr[size] ;

    for(int i = 0 ; i < size ; i++)
    
    {
        arr[i] = rand() % size ;
    }
    
    cout << " -----------Before sorting ----------- " << endl ;

    printArray(arr , size) ;
    
    insertionSort(arr , size) ;
    
    cout << endl ;
    
    cout << " ------------After sorting------------- " << endl ;
    
    printArray(arr , size) ;

return 0 ;

}
