#include <iostream>

int main(){
	int x;
	int y;
	std::cin>>x;
	std::cin>>y;

	int quadrant;
	if(x>0){
		if(y>0){
			quadrant=1;
		}
		if(y<0){
			quadrant=4;
		}
	}
	else if(x<0){
		if(y>0){
			quadrant=2;
		}
		if(y<0){
			quadrant=3;
		}
	}

	std::cout<<quadrant<<std::endl;
}
