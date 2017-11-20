#include <iostream>
#include <bitset>
#include <algorithm>

int main(){
	int input;
	std::cin>>input;
	std::string initialBinString="";
	std::string inputString = std::to_string(input);
	if(input>0 && input <=7){
		switch(input){
		case 1:
			initialBinString="1000";
			break;
		case 2:
			initialBinString="0100";
			break;
		case 3:
			initialBinString="1100";
			break;
		case 4:
			initialBinString="0010";
			break;
		case 5:
			initialBinString="1010";
			break;
		case 6:
			initialBinString="0110";
			break;
		case 7:
			initialBinString="1110";
			break;
		}
	}
	else{
	int dividend=input;
	int result;
	while(result!=0){
		int remainder = dividend%2;
		initialBinString+=std::to_string(remainder);
		result=dividend/2;
		dividend=result;
	}
	}
	unsigned long finBinString = std::bitset<32>(initialBinString).to_ulong();
	std::cout<<finBinString<<std::endl;
	
}

