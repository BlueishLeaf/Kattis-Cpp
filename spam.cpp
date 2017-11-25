#include <iostream>

int main(){
	std::string input;
	std::cin>>input;
	double spaceCounter=0;
	double lowercaseCounter=0;
	double uppercaseCounter=0;
	double symbolCounter=0;
	for(int i=0;i<input.length();i++){
		if(input[i] == '_'){
			spaceCounter++;
		}
		else if(islower(input[i])){
			lowercaseCounter++;
		}
		else if(isupper(input[i])){
			uppercaseCounter++;
		}
		else{
			symbolCounter++;
		}
	}
	double spaceRatio = spaceCounter/input.length();
	double lowercaseRatio = lowercaseCounter/input.length();
	double uppercaseRatio = uppercaseCounter/input.length();
	double symbolRatio = symbolCounter/input.length();
	std::cout<<spaceRatio<<std::endl;
	std::cout<<lowercaseRatio<<std::endl;
	std::cout<<uppercaseRatio<<std::endl;
	std::cout<<symbolRatio<<std::endl;
}
