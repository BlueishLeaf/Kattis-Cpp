#include <iostream>

int main(){
	std::string input;
	std::cin>>input;

	std::string firstHalf=input.substr(0,input.length()/2);
	std::string secondHalf=input.substr(input.length()/2,input.length());
	int firstHalfTotal=0;
	int secondHalfTotal=0;
	for(int i=0;i<firstHalf.length();i++){
		firstHalfTotal+=((int)firstHalf[i])-65;
		secondHalfTotal+=((int)secondHalf[i])-65;
	}
	std::cout<<firstHalfTotal<<std::endl;
	std::cout<<secondHalfTotal<<std::endl;
	std::string newFirstHalf="";
	std::string newSecondHalf="";
	for(int i=0;i<firstHalf.length();i++){
		if(((int)firstHalf[i])-65>25){
			newFirstHalf+=(char)((int)firstHalf[i]-90);
		}
		newFirstHalf+=(char)(((int)firstHalf[i])+firstHalfTotal);
		newSecondHalf+=(char)(secondHalf[i]+firstHalfTotal);
	}
	std::cout<<newFirstHalf<<std::endl;
	std::cout<<newSecondHalf<<std::endl;
}
