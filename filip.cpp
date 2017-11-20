#include <iostream>
#include <string>
#include <algorithm>

int main(){
	std::string a;
	std::cin>>a;
	std::string b;
	std::cin>>b;
	std::reverse(a.begin(),a.end());
	std::reverse(b.begin(),b.end());
	int newAint=std::stoi(a);
	int newBint=std::stoi(b);
	if(newAint>newBint){
		std::cout<<newAint<<std::endl;
	}

	else if(newAint<newBint){
		std::cout<<newBint<<std::endl;
	}
}
