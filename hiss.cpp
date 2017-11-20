#include <iostream>

int main(){
	std::string input;
	std::cin>>input;
	std::string output="no hiss";
	for(int i=0;i<input.length();i++){
		if(input[i]=='s' && input[i+1]=='s'){
			output="hiss";
		}
	}
	std::cout<<output<<std::endl;
}
