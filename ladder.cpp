#include <iostream>
#include <math.h>

#define PI 3.14159265

int main(){
	float height;
	std::cin>>height;
	float angle;
	std::cin>>angle;

	float ladderLength = ceil(height/sin(angle*PI/180));
	std::cout<<ladderLength<<std::endl;
}
