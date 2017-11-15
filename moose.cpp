#include <iostream>

int main(){
	int side1;
	std::cin>>side1;
	int side2;
	std::cin>>side2;

	if (side1 == 0 && side2 == 0){
		std::cout<<"Not a moose"<<std::endl;
	}

	else if(side1 == side2){
		std::cout<<"Even ";
		std::cout<<side1+side2<<std::endl;
	}
	
	else if(side1 != side2){
		std::cout<<"Odd ";
		if(side1>side2){
			std::cout<<side1+side1<<std::endl;
		}
		else{
			std::cout<<side2+side2<<std::endl;
		}
	}
}
