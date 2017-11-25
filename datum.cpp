#include <iostream>

int main(){
	int day;
	std::cin>>day;
	int month;
	std::cin>>month;
	std::string daysOfWeek[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int startingDay;
	switch(month){
		case 6:
		startingDay=0;
		break;

		case 9:
		case 12:
		startingDay=1;
		break;

		case 4:
		case 7:
		startingDay=2;
		break;

		case 1:
		case 10:
		startingDay=3;
		break;

		case 5:
		startingDay=4;
		break;

		case 8:
		startingDay=5;
		break;

		case 2:
		case 3:
		case 11:
		startingDay=6;
		break;
	}
	for(int i=1;i<=day;i++){
		if(i==day){
			std::cout<<daysOfWeek[startingDay]<<std::endl;
		}
		startingDay++;
		if(startingDay==7){
			startingDay=0;
		}
	}
}
