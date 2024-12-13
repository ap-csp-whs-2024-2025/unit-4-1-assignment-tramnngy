#include <iostream>
#include <string>

int main()
{
//Exercise 1:
int x = 25;
int y = 3;
std::cout <<"EXERCISE 1: " <<std::endl;
std::cout <<"x + y = " << x + y <<std::endl;
std::cout <<"x - y = " << y - x <<std::endl;
std::cout <<"x * y = " << x * y <<std::endl;
std::cout <<"x / y = " << x / y <<std::endl;
std::cout <<"x % y = " << x % y <<std::endl;

std::cout <<" " <<std::endl;

//Exercise 2: 
bool isSunny = true;
bool hasUmbrella = false; 
std::cout <<"EXERCISE 2: " <<std::endl;

std::cout <<"isSunny && hasUmbrella is " <<(isSunny && hasUmbrella) <<std::endl;
std::cout <<"isSunny || hasUmbrella is " <<(isSunny || hasUmbrella) <<std::endl;
std::cout <<"!isSunny is " <<(!isSunny) <<std::endl;
std::cout <<"!isSunny && !hasUmbrella is " <<(!isSunny && !hasUmbrella) <<std::endl;

std::cout <<" " <<std::endl;

//Exercise 3: 
int n = 7;
double m = 4.0;
bool hasLicense = false;
std::cout <<"EXERCISE 3: " <<std::endl;

std::cout <<"n > m  is " << (n > m)  <<std::endl;
std::cout <<"m = 4.0 is " << (m == 4.0)  <<std::endl;
std::cout <<"m <= n && hasLicense is " << (m <= n && hasLicense) <<std::endl;
std::cout <<"n > 5 && hasLicense == false is " << (n > 5 && hasLicense == false) <<std::endl;



 return 0;
}
