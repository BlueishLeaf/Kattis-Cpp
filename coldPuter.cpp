#include <iostream>

int main(){
	int numDays;
	std::cin>>numDays;
	int temps[numDays];
	int tempCounter=0;
	for(int i=0;i<numDays;i++){
		std::cin>>temps[i];
		if(temps[i]<0){
			tempCounter++;
		}
	}
	std::cout<<tempCounter<<std::endl;
}
