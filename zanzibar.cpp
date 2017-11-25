#include <iostream>
#include <vector>

int main(){
	int numCases;
	std::cin>>numCases;
	int turtles[numCases];
	for(int i=0;i<numCases;i++){
		std::vector<int> numTurtles;
		while(true){
			int num;
			std::cin>>num;
			if(num==0){
				break;
			}
			numTurtles.push_back(num);
		}
		int importTurtles=0;
		for(int j=1;j<numTurtles.size();j++){
			if(numTurtles[j]>numTurtles[j-1]*2){
				importTurtles+=	numTurtles[j]-(numTurtles[j-1]*2);
			}
		}
		turtles[i]=importTurtles;
	}
	for(int i=0;i<numCases;i++){
		std::cout<<turtles[i]<<std::endl;
	}
}
