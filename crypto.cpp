#include <iostream>

int main(){
	std::string cipherText;
	std::cin>>cipherText;
	char textArray[cipherText.length()];
	for(int i=0;i<cipherText.length();i++){
		textArray[i]=cipherText[i];
	}
	int cycle=0;
	int days=0;
	for(int i=0;i<sizeof(textArray);i++){
		if( cycle==0){
			if(textArray[i]!='P'){
				days++;
			}
			cycle=1;
		}
		else if (cycle==1){
			if(textArray[i]!='E'){
				days++;
			}
			cycle=2;
		}
		else if(cycle==2){
			if(textArray[i]!='R'){
				days++;
			}
			cycle=0;
		}
	}
	std::cout<<days<<std::endl;
}
