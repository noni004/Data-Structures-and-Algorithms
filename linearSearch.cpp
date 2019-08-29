#include<iostream>

using namespace std;

int lsearch(int arr[] , int size , int key)
{
    
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == key)
        {
            return i ;
        }
    }
    return -1 ;
        
}

int  main()
{
    int size , key ;
    cout << " Enter the size of the array " << endl ;
    cin >> size ;

    int arr[size] ;

    cout << " Enter the elements of the array " << endl ;

    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i] ;
    }

    cout << " Enter the element to be searched " << endl ;
    cin >> key ;
    int search = lsearch(arr , size , key) ;

    if(search == -1)
    {
        cout << " Element not found " << endl ;

    }
    else
    {
        cout << " Element found at position " << search + 1 << endl ;
    }
    
    
    return 0 ;
}
