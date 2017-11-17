#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	int numCases;
	std::cin>>numCases;
	int sizes[numCases];
	for(int i=0;i<numCases;i++){
		int numCities;
		std::cin>>numCities;
		std::vector <std::string> cityArray;
		for(int j=0;j<numCities;j++){
			std::string input;
			std::cin>>input;
			cityArray.push_back(input);
		}
		std::sort(cityArray.begin(), cityArray.end());
		std::vector <std::string> trimmedArray;
		int x=0;
		trimmedArray.push_back(cityArray[0]);
		for(int j=1;j<numCities;j++){
			if(cityArray[j]!=trimmedArray[x]){
				trimmedArray.push_back(cityArray[j]);
				x++;
			}
		}
		sizes[i] = trimmedArray.size();
	}
	for(int i=0;i<numCases;i++){
		std::cout<<sizes[i]<<std::endl;
	}
}
