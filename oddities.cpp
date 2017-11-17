#include <iostream>

int main(){
	int numNums;
	std::cin>>numNums;
	int nums[numNums];
	for(int i=0;i<numNums;i++){
		std::cin>>nums[i];
	}
	for(int i=0;i<numNums;i++){
		if(nums[i]%2==0){
			std::cout<<std::to_string(nums[i]) + " is even"<<std::endl;
		}
		else{
			std::cout<<std::to_string(nums[i]) + " is odd"<<std::endl;
		}
	}
}
