#include <iostream>
#include <bitset>
#include <algorithm>
int main(){
	long num;
	std::cin>>num;
	std::string binary = std::bitset<32>(num).to_string();
	std::cout<<binary<<std::endl;
	unsigned long long binaryInt = stoull(binary);
	std::string binaryStr= std::to_string(binaryInt);
	char binArray[binaryStr.length()];
	for(int i=0;i<sizeof(binArray);i++){
		binArray[i]=binaryStr[i];
	}
	char tempArray[binaryStr.length()];
	int j=0;
	std::string newString="";
	for(int i=sizeof(binArray)-1;i>=0;i--){
		tempArray[j]=binArray[i];
		newString+=tempArray[j];
		j++;
	}
	std::cout<<std::bitset<32>(newString).to_ulong()<<std::endl;
}
