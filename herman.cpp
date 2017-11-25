#include <iostream>
#include <iomanip>

#define PI 3.14159265359

int main(){
	std::cout<<std::setiosflags(std::ios::fixed);
	std::cout<<std::setprecision(6);
	double radius;
	std::cin>>radius;
	double eucArea= PI * (radius*radius);
	double cabArea= ((radius*radius)/2.000)*4.000;
	std::cout<<eucArea<<std::endl;
	std::cout<<cabArea<<std::endl;
}
