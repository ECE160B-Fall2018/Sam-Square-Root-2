#include <iostream>

using namespace std;

double factorial(int x)
{
  double sum = x;
  if(x == 0 || x == 1)
  {
    return 1;	  
  }	  
  do
  {
    sum = sum*(x-1); 	  
    x--;	  
  }  while(x > 1); 
  return sum;	
}


int main()
{
  //cout << factorial(5) << endl;
 
  int i;
  double adder = .5;
  double total = 1;
  double deriv = .5;
  total += .5;  
  for(i = 2; i < 100; i++)
  {
    deriv -= 1;	  
    adder = adder*deriv;	  
    total += adder/factorial(i);	  
  }  

  cout << total << endl;

  return 0;	
}

