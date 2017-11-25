#include <iostream>
#include <vector>

int main(){
	int testCases;
	std::vector<int> totalMiles;
	while(true){
		std::cin>>testCases;
		if(testCases==-1){
			break;
		}
		int speeds[testCases];
		int hours[testCases];
		for(int i=0;i<testCases;i++){
			std::cin>>speeds[i];
			std::cin>>hours[i];
		}
		int miles=0;
		for(int i=0;i<testCases;i++){
			if(i==0){
				miles+=speeds[i]*hours[i];
			}
			else{
				miles+=speeds[i]*(hours[i]-hours[i-1]);
			}
		}
		totalMiles.push_back(miles);
	}
	for(int i=0;i<totalMiles.size();i++){
		std::cout<<totalMiles[i];
		std::cout<<" miles"<<std::endl;
	}
}
