#include <iostream>
#include <vector>

int main(){
	std::string input;
	std::getline(std::cin,input);
	std::string stringArray[80]; 
	int x=0;
	int lastSpaceIndex=0;
	for(int i=0;i<input.length();i++){
		if(i==0){
			int j=0;
			while(input[j]!=' '){
				j++;
			}
			lastSpaceIndex=j+1;
			stringArray[x]=input.substr(0,j);
			x++;
		}
		if(input[i] == ' ' && x!=0){
			stringArray[x]=input.substr(lastSpaceIndex,2);
			lastSpaceIndex=i;
			x++;

		}

		else if(i==input.length()-1){
			stringArray[x]=input.substr(lastSpaceIndex,i);
			lastSpaceIndex=i;
			x++;
		}
	}
	std::cout<<stringArray[0]<<std::endl;		
	std::cout<<stringArray[1]<<std::endl;		
	std::cout<<stringArray[2]<<std::endl;		
}
