#include <iostream>

int main(){
	int numCases;
	std::cin>>numCases;
	std::string string1Array[numCases];
	std::string string2Array[numCases];
	std::string differences[numCases];
	for(int i=0;i<numCases;i++){
		std::cin>>string1Array[i];
		std::cin>>string2Array[i];
		differences[i]="";
		for(int j=0;j<string1Array[i].length();j++){
			if(string1Array[i][j]!=string2Array[i][j]){
				differences[i]+="*";
			}
			else{
				differences[i]+=".";
			}
		}

	}
	for(int i=0;i<numCases;i++){
		std::cout<<string1Array[i]<<std::endl;
		std::cout<<string2Array[i]<<std::endl;
		std::cout<<differences[i]<<std::endl;
		std::cout<<std::endl;
	}
}
