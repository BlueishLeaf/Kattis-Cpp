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
	std::string outputs[100][2];
	int x=0;
	for(int i=2;i<=maxIndex;i++){
		for(int j=1;j<=i;j++){
			if(i-j==1 || i==j){
				if(){
					outputs[x][0]=std::to_string(i);
					outputs[x][1]=std::to_string(j);
					x++;
				}
			}
		}
	}

	for(int i=0;i<maxIndex;i++){
		std::cout<<outputs[i][0];
		std::cout<<",";
		std::cout<<outputs[i][1]<<std::endl;
	}
}
