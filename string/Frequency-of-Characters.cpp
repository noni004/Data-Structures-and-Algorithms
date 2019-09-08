// Program to Find Frequency of Characters of a String Object

#include <iostream>

using namespace std;

int main()
{
   string str;
   
   cout << "Enter a string"<<endl;
   
   getline(cin , str);
   
   int count =  0;
   
   char check;
   
   cout<< "Enter the character to get its frequency"<<endl;
   
   cin>>check;
   
   for(int i = 0 ; i < str.size(); i++)
   {
       if(str[i] == check)
       {
           count++;
       }
   }
   
   cout<< "Frequency of " << check<<"in string = " << count;
   
   return 0;
}
