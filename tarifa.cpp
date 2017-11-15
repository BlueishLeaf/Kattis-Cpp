#include <iostream>

int main(){
	int monthlyMb;
	std::cin>>monthlyMb;
	int numMonths;
	std::cin>>numMonths;
	
	int nextMonthMb=0;
	for(int i=0;i<numMonths;i++){
		int currentMonthMb;
		std::cin>>currentMonthMb;
		int leftovers = monthlyMb-currentMonthMb;
		nextMonthMb+=leftovers;
	}
	nextMonthMb+=monthlyMb;
	std::cout<<nextMonthMb<<std::endl;

}
