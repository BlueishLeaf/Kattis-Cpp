#include <iostream>

int main(){
	int scores[5][4];
	int totals[5];
	for(int i=0;i<5;i++){
		int currentTotal=0;
		for(int j=0;j<4;j++){
			std::cin>>scores[i][j];
			currentTotal+=scores[i][j];
		}
		totals[i]=currentTotal;
	}
	int highest;
	int highestIndex;
	int temp = totals[0];
	for(int i=0;i<5;i++){
		if(totals[i]>=temp){
			temp=totals[i];
			highest=totals[i];
			highestIndex=i;
		}
	}
	std::cout<<highestIndex+1;
	std::cout<<" ";
	std::cout<<highest<<std::endl;
}
