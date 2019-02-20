#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int&,int&,int&);
void swap(int&,int&);

int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;                //Store values in variable numA, numB, numC

  //Starting sorting functions
  sortDescending(numA, numB, numC);
  
  cout<<"From greatest to least, they are: ";
  //Outputs results in decending order
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

void sortDescending(int &first, int &second, int &third)
{
  //Checks for various case statements depending on the users input.
  if( first < third )
  {
    swap(first,third);
  }
  if( first > second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
  if( second > first )
  {
      swap(second,first);
  }
}

//Swaps our values by using a temporarly variable
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
