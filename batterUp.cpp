#include <iostream>

int main(){
	int numBats;
	std::cin>>numBats;
	double denom=numBats;
	double bats[numBats];
	double total=0;
	for(int i=0;i<numBats;i++){
		std::cin>>bats[i];
		if(bats[i]==-1){
			denom--;
			total++;
		}
		total+=bats[i];
	}	
	double batAvg = total / denom;
	std::cout<<batAvg<<std::endl;
}
