#include <iostream>

int main(){
	double costPerSqMeter;
	std::cin>>costPerSqMeter;
	int numLawns;
	std::cin>>numLawns;
	double total=0;
	for(int i = 0;i<numLawns;i++){
		double width;
		std::cin>>width;
		double length;
		std::cin>>length;
		total+=width*length;
	}
	total*=costPerSqMeter;
	std::cout.precision(7);
	std::cout<<std::fixed<<total<<std::endl;
}
