#include <iostream>
#include <math.h>

int main(){
	int numMatches;
	int width;
	int height;
	std::cin>>numMatches;
	std::cin>>width;
	std::cin>>height;
	std::string result[numMatches];
	for(int i=0;i<numMatches;i++){
		int matchLength;
		std::cin>>matchLength;
		int diagonal = sqrt(pow(width,2) + pow(height,2));
		if(matchLength<=height){
			result[i]="DA";
		}

		else if(matchLength<=width){
			result[i]="DA";
		}

		else if(matchLength<=diagonal){
			result[i]="DA";
		}
		else{
			result[i]="NE";
		}
	}
	for(int i=0;i<numMatches;i++){
		std::cout<<result[i]<<std::endl;
	}
}
