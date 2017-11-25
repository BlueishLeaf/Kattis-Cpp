#include <iostream>
#include <map>

int main(){
	int numCups;
	std::cin>>numCups;
	std::map<int,std::string> cups;
	for(int i=0;i<numCups;i++){
		std::string string1;
		std::cin>>string1;
		std::string string2;
		std::cin>>string2;
		std::string colour;
		int radius;
		if(isdigit(string1[0])){
			radius=stoi(string1)/2;
			colour= string2;
			cups[radius]=colour;
		}
		else if(isdigit(string2[0])){
			radius=stoi(string2);
			colour= string1;
			cups[radius]=colour;
		}
	}
	for(int i=0;i<1000;i++){
		if(cups[i]!=""){
			std::cout<<cups[i]<<std::endl;
		}
	}
}
