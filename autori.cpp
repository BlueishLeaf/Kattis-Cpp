#include <iostream>

int main(){
	std::string fullName;
	std::cin>>fullName;
	char initialArray[10];
	initialArray[0]=fullName[0];
	int counter = 1;
	for(int i=1;i<fullName.length();i++){
		if(fullName[i]=='-'){
			initialArray[counter]=fullName[i+1];
			counter++;
		}
	}
	for(int i=0;i<counter;i++){
		std::cout<<initialArray[i];
	}
}

