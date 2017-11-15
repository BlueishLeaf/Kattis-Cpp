#include <iostream>

int main(){
	int numStones;
	std::cin>>numStones;

	std::string winner;
	for(int i=1;i<=numStones;i++){
		if(i%2==0){
			winner="Bob";
		}

		else if(i%2==1){
			winner="Alice";
		}
	}
	std::cout<<winner<<std::endl;
}
