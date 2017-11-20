#include <iostream>

int main(){
	int numCases;
	std::cin>>numCases;
	int winCounter=0;
	for(int i=0;i<numCases;i++){
		std::string moves;
		std::cin>>moves;
		for(int j=0;j<moves.length()-1;j++){
			if(moves[j]=='C' && moves[j+1]=='D'){
				winCounter++;
				break;
			}
		}
	}
	std::cout<<numCases - winCounter<<std::endl;
}
