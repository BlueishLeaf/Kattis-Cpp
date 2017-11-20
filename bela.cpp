#include <iostream>

int main(){
	int numHands;
	std::cin>>numHands;
	char domSuit;
	std::cin>>domSuit;
	std::string cards[numHands*4];

	int pointsTotal=0;
	for(int i=0;i<numHands*4;i++){
		std::cin>>cards[i];
		if(cards[i][1]==domSuit){
			if(cards[i][0]=='A'){
				pointsTotal+=11;
			}
			else if (cards[i][0]=='K'){
				pointsTotal+=4;
			}
			else if (cards[i][0]=='Q'){
				pointsTotal+=3;
			}
			else if (cards[i][0]=='J'){
				pointsTotal+=20;
			}
			else if (cards[i][0]=='T'){
				pointsTotal+=10;
			}
			else if (cards[i][0]=='9'){
				pointsTotal+=14;
			}
		}
		else{

			if(cards[i][0]=='A'){
				pointsTotal+=11;
			}
			else if (cards[i][0]=='K'){
				pointsTotal+=4;
			}
			else if (cards[i][0]=='Q'){
				pointsTotal+=3;
			}
			else if (cards[i][0]=='J'){
				pointsTotal+=2;
			}
			else if (cards[i][0]=='T'){
				pointsTotal+=10;
			}
		}
	}
	std::cout<<pointsTotal<<std::endl;
}
