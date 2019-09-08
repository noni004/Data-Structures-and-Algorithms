#include<iostream>
using namespace std;

struct array
{
    int *A;
    int size;
    int length;
};

void display(struct array arr)
{
    for(int i = 0 ; i < arr.length; i++)
    {
        cout<< arr.A[i] << " ";
    }
}


int main()
{
    struct array arr;
    arr.A = new int [arr.size];
    cout<< "Enter the size of the array "<<endl;
    cin>>arr.size;

    cout<< "Enter the number of elements in the array "<<endl;
    cin>>arr.length;

    cout<< "Enter the elements of the array"<<endl;
    for(int i = 0 ; i < arr.length; i++)
    {
        cin>>arr.A[i];

    } 

    cout<< "You've entered "<<endl;
    display(arr);

    return 0;

}
