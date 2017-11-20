#include <iostream>

int main(){
	std::string name;
	std::cin>>name;
	int j=0;
	for(int i=0;i<=name.length()-1;i++){
		if(name[i]!=name[i+1]){
			j++;
		}
	}

	char nameArray[j];
	j=0;
	for(int i=0;i<name.length();i++){
		if(name[i]!=name[i+1]){
			nameArray[j]=name[i];
			std::cout<<nameArray[j];
			j++;
		}	
	}
	std::cout<<""<<std::endl;

}
