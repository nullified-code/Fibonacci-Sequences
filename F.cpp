#include <iostream>
using 
 std::cout;
  using std::cin;
    using std::endl;
#include <iomanip>
  using std::setw;
  
int 
main () 
{

int 
  c, n1 = 0, n2 = 1, F, NUMBER = 2;
  
cout << "Greetings!\n What number should the Fibonacci sequence stop at?"   
 <<endl;
 
cout << "   "; 
cin >> c;
  
cout << setw (4) << " Number:" << setw (25) << "Fibonacci Number:" <<
    endl; 
cout << "   0" << setw (22) << n1 << endl;
   
if (c != 0)
    {     
cout << "   1" << setw (22) << n2 << endl;  
}
  
while ((NUMBER <= c) && (c != 1))
{ 
 
   F = n1 + n2;
      const int 
	arraysize = c;
int 
      b[arraysize] = { F };
cout << setw (4) << NUMBER << setw (22) << b[0] << endl;
    
n1 = n2;      
n2 = F;
NUMBER++;

} 
return 0;

}


