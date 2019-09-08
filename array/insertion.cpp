#include<iostream>
using namespace std;



class insertion
{
    public:
    int *A;
    int size;
    int length;
};

void Display(insertion ar)
{
    for(int i = 0; i < ar.length; i++)
    {
        cout<< ar.A[i]<<" ";
    }
}

int main()
{   
    insertion ar;
    
    cout<< "Enter the size of the array"<<endl;
    cin >> ar.size;

    ar.A = new int[ar.size];  

    cout<< "Enter the number of elements "<<endl;
    cin>> ar.length;

    cout<< "Enter the elements of the array"<<endl;
    for(int i = 0; i < ar.length; i++)
    {
        cin>>ar.A[i];
    }
    cout<< "You've entered "<< endl;
    Display(ar);

return 0;

}
