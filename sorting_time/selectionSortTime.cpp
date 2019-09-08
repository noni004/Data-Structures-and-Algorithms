#include<iostream>

#include<ctime>

using namespace std; 

void swap(int *x, int *y) 
{ 
	int temp = *x; 
	
  *x = *y; 
	
  *y = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
	
  int i, j, min_idx; 
  
	for (i = 0; i < n-1; i++) 
	{ 
		min_idx = i; 
		
    for (j = i+1; j < n; j++) 
    {
		  if (arr[j] < arr[min_idx]) 
		  {
        min_idx = j; 

		    swap(&arr[min_idx], &arr[i]); 
      }
	} 
} 
 
int main() 
{ 
    clock_t st , ed;
    
    double time_taken;

    cout << "Enter size of array"<<endl;
    
    cout<< "Press 1 for size = 5000 "<<endl;
    
    cout<< "Press 2 for size = 10000 "<<endl;
    
    cout<< "Press 3 for size = 15000 "<<endl;
    
    int size;
    
    int choice;
    
    cin>>choice;


    switch(choice)
    {
        case 1:
            size = 5000;
            
            break;

        case 2:
            size = 10000;
            
            break;

        case 3: 
            size = 15000;
            
            break;

        default:
            
            cout<< "Invalid choice"<<endl;            
            
            break;
    }

    int arr[size];
    

    // best case


    for(int i = 0; i < size; i++)
    {
        arr[i] = i;
    }

    st = clock();
    
    selectionSort(arr,size);
    
    ed = clock();

    time_taken = double(ed - st)/CLOCKS_PER_SEC;
    
    cout << "Best case time : " << time_taken<<endl;

     // Average case
    
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % size;
    }

    st = clock();
    
    selectionSort(arr,size);
    
    ed = clock();

    time_taken = double(ed - st)/CLOCKS_PER_SEC;
    
    cout << "Average case : " << time_taken<<endl;


    // Worst case


    for(int i = 0; i < size; i++)
    {
        arr[i] = size - i;
    }

    st = clock();
   
    selectionSort(arr,size);
    
    ed = clock();

    time_taken = double(ed - st)/CLOCKS_PER_SEC;
    
    cout << "Worst case : " << time_taken<<endl;
    
    
	return 0; 
} 

