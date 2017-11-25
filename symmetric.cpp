#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	int setNum;
	std::vector<std::vector<std::string>> stringSets;
	while(true){
		std::cin>>setNum;
		if(setNum==0){
			break;
		}
		std::string names[setNum];
		std::vector<std::string> firstNames;
		std::vector<std::string> secondNames;
		for(int i=0;i<setNum;i++){
			std::cin>>names[i];
			if(i%2==0){
				firstNames.push_back(names[i]);
			}
			else{
				secondNames.push_back(names[i]);
			}
		}
		stringSets.push_back(firstNames);
		std::reverse(secondNames.begin(),secondNames.end());
		stringSets.push_back(secondNames);
	}
	int j=1;
	for(int i=0;i<stringSets.size();i++){
		if(i%2==0 && i<stringSets.size()-1){
			std::cout<<"SET ";
			std::cout<<j<<std::endl;
			j++;
		}
		for(int x=0;x<stringSets[i].size();x++){
			std::cout<<stringSets[i][x]<<std::endl;
		}
	}
}
