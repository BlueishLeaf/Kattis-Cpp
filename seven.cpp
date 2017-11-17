#include <iostream>
#include <math.h>

int main(){
	int tCount=0;
	int cCount=0;
	int gCount=0;
	int bonus=0;
	std::string cards;
	std::cin>>cards;

	for(int i=0;i<cards.length();i++){
		if(cards[i]=='T'){
			tCount++;
		}
		else if(cards[i]=='C'){
			cCount++;
		}
		else if(cards[i]=='G'){
			gCount++;
		}
	}
	int initialPoints =  pow(tCount,2) + pow(cCount,2) + pow(gCount,2);

	while(tCount!=0 && cCount!=0 && gCount!=0){
		bonus+=7;
		tCount--;
		cCount--;
		gCount--;
	}
	int totalPoints = initialPoints+bonus;
	std::cout<<totalPoints<<std::endl;
}

