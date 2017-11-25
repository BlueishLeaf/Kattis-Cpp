#include <iostream>

int main(){
	std::string input;
	std::getline(std::cin, input);
	char sentenceChars[input.length()];
	for(int i=0;i<sizeof(sentenceChars);i++){
		sentenceChars[i]=input[i];
	}
	std::string decodedString="";
	for(int i=0;i<sizeof(sentenceChars);i++){
		if(sentenceChars[i]=='a' || sentenceChars[i]=='e' || sentenceChars[i]=='i' || sentenceChars[i]=='o' || sentenceChars[i]=='u'){
			decodedString+=sentenceChars[i];
			i+=2;
		}
		else{
			decodedString+=sentenceChars[i];
		}
	}
	std::cout<<decodedString<<std::endl;
}
