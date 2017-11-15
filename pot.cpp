#include <iostream>
#include <math.h>
int main(){
	int numNums;
	std::cin>>numNums;

	int nums[numNums];
	std::string numStrings[numNums];

	int total=0;
	for(int i=0;i<numNums;i++){
		std::cin>>nums[i];
		numStrings[i]=std::to_string(nums[i]);
	}
	for(int i=0;i<numNums;i++){
		char powerChar= numStrings[i].back();
		int power = powerChar-'0';
		nums[i]=nums[i]/10;
		total+=pow(nums[i],power);
	}
	std::cout<<total<<std::endl;

	
}
