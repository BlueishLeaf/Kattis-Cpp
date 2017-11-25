#include <iostream>
#include <vector>

int getDigits(int x){
	int num=x;
	int digitCount=0;
	while(num>0){
		num/=10;
		digitCount++;
	}
	return digitCount;
}

void constructArray(int x,int digitCount,int lArray[]){
	int num=x;
	for(int i=digitCount-1;i>=0;i--){
		lArray[i] = num % 10;
		num/=10;
	}
}

int main(){
	int L;
	std::cin>>L;
	int D;
	std::cin>>D;
	int X;
	std::cin>>X;
	std::vector<int> matchedNums;
	for(int i=L;i<=D;i++){
		int digitCount = getDigits(i);
		int lArray[digitCount];
		constructArray(i,digitCount,lArray);
		int sum=0;
		for(int j=0;j<digitCount;j++){
			sum+=lArray[j];
		}
		if(sum==X){
			matchedNums.push_back(i);
		}
	}
	std::cout<<matchedNums[0]<<std::endl;
	std::cout<<matchedNums[matchedNums.size()-1]<<std::endl;
}
