#include <iostream>

int main(){
	int currentPieces[6];
	int optimalPieces[6]={1,1,2,2,2,8};

	for(int i=0;i<6;i++){
		std::cin>>currentPieces[i];
		optimalPieces[i]-=currentPieces[i];
		std::cout<<optimalPieces[i];
		std::cout<<" ";
	}
}
