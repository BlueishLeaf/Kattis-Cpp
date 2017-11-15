#include <iostream>

int main(){
	std::string moves;
	std::cin>>moves;
	int position=1;
	for(int i=0;i<moves.length();i++){
		if(moves[i]=='A'){
			if(position==1){
				position=2;
			}
			else if(position==2){
				position=1;
			}
		}
		else if(moves[i]=='B'){
			if(position==2){
				position=3;
			}
			else if(position==3){
				position=2;
			}
		}
		else if(moves[i]=='C'){
			if(position==3){
				position=1;
			}
			else if(position==1){
				position=3;
			}
		}
	}
	std::cout<<position<<std::endl;
}
