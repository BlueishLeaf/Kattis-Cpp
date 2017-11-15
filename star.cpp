#include <iostream>

int main(){
	int numStars;
	std::cin>>numStars;
	int maxIndex;
	if (numStars%2==0){
		maxIndex=numStars/2;
	}
	else{
		maxIndex=(numStars/2)+1;
	}
	std::string outputs[100];
	int x=0;
	for(int i=2;i<maxIndex;i++){
		for(int j=1;j<i;j++){
			if(i-j==1 || i==j){
				outputs[x]=std::to_string(j);
				outputs[x+1]=std::to_string(j);
				x+=2;
			}
		}
		std::cout<<outputs[x]<<std::endl;
	}
}
