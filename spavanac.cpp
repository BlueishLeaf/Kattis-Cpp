#include <iostream>

int main(){
	int hourInput;
	std::cin>>hourInput;
	int minuteInput;
	std::cin>>minuteInput;

	if(minuteInput<45){
		hourInput--;
		minuteInput= (60+minuteInput)-45;
	}
	else{
		minuteInput-=45;
	}
	if(hourInput<0){
		hourInput=23;
	}
	std::cout<<hourInput;
	std::cout<<" ";
	std::cout<<minuteInput<<std::endl;
}
