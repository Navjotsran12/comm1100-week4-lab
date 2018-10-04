#include <iostream>
#include <string>
#include<sstream>
// Include the library that will allow you to convert from string to integer
int a,b,c,d;

int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once
int i,j,k,product;
    std::cout<<"Enter value of i,j,k";
    std::cin>> i >> j >> k ;
    




  // Multiply the three integers
  std::cout<<"product="<<(i*j*k);




  // Output the result of the multiplication



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

std::string sleep;
std::string flies;
std::string please;


std::cout<< "The name of sleep"<<std::endl;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::getline(std::cin,sleep);

std::cout<< "The name  of flies"<<std::endl;
std::getline(std::cin,flies);
std::cout<<" the name of  please"<<std::endl;
std::getline(std::cin,please);
std::cout<<"          "<<std::endl;

std::cout<<" I  want to "<<sleep<<std::endl;
std::cout<<" swat the "<<flies<<std::endl;
std::cout<<" softly "<<please<<std::endl;











  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
int myint;
std::stringstream (myNumber)>>myint;

  
  std::cout<<myint << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}