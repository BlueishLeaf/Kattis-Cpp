#include <iostream>

int main(){
	int numContestants;
	int numProblems;
	int numCarrots;
	std::string contMessage;
	std::cin>>numContestants;
	std::cin>>numProblems;
	numCarrots=numProblems;
	std::string contMessages[numContestants];
	for(int i=0;i<numContestants;i++){
		std::cin>>contMessage;
		contMessages[i]=contMessage;
	}
	std::cout<<numProblems<<std::endl;

}
