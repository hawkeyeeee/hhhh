#include <iostream>
  
int main()
{
    int n {};       
    while(true)
    {
        std::cout << "Enter a number: ";
        std::cin >> n; 
        
        if(n == 0) break; 
        
        std::cout << n * n << std::endl;   
    }
}