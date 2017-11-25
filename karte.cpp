#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	std::string input;
	std::cin>>input;
	int cardCountP=13;
	int cardCountK=13;
	int cardCountH=13;
	int cardCountT=13;
	bool sameCard=false;
	std::vector<std::string> cards;
	for(int i=0;i<input.length();i++){
		if(input[i]=='P' || input[i]=='K' || input[i]=='H' || input[i]=='T'){
			std::string cardNumStr="";
			cardNumStr+=input[i];
			cardNumStr+=input[i+1];
			cardNumStr+=input[i+2];
			cards.push_back(cardNumStr);
			switch(input[i]){
				case 'P':
					cardCountP--;
					break;
				case 'K':
					cardCountK--;
					break;
				case 'H':
					cardCountH--;
					break;
				case 'T':
					cardCountT--;
					break;
			}
		}
	}
	std::sort(cards.begin(),cards.end());
	for(int i=0;i<cards.size()-2;i++){
		if(cards[i]==cards[i+1]){
			sameCard=true;
		}
	}
	if(sameCard){
		std::cout<<"GRESKA"<<std::endl;
	}
	else{
		std::cout<<cardCountP;
		std::cout<<" ";
		std::cout<<cardCountK;
		std::cout<<" ";
		std::cout<<cardCountH;
		std::cout<<" ";
		std::cout<<cardCountT<<std::endl;
	}
}
