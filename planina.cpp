#include <iostream>

int main(){
	int numIterations;
	std::cin>>numIterations;
	int numPlanets;
	int pointsWidth=2;
	int j=0;
	for(int i=1;i<=numIterations;i++){
		j+=pointsWidth/2;
		pointsWidth+=j;
	}
	numPlanets=pointsWidth*pointsWidth;
	std::cout<<numPlanets<<std::endl;
}
