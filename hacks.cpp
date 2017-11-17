#include <iostream>
#include <vector>

int main(){
	int numCases;
	std::cin>>numCases;
	std::vector<std::string> outputs;
	for(int i=0;i<numCases;i++){
		int revNoAd;
		std::cin>>revNoAd;
		int revAd;
		std::cin>>revAd;
		int adCost;
		std::cin>>adCost;

		if(revAd-adCost<revNoAd){
			outputs.push_back("do not advertise");
		}
		else if(revAd-adCost>revNoAd){
			outputs.push_back("advertise");
		}
		else if(revAd-adCost==revNoAd){
			outputs.push_back("does not matter");
		}
	}
	for(int i=0;i<numCases;i++){
		std::cout<<outputs[i]<<std::endl;
	}	
}
