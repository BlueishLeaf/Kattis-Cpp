#include <iostream>
#include <algorithm>

int main(){
	int nums[10];
	int moduluses[10];
	for(int i=0;i<10;i++){
		std::cin>>nums[i];
		moduluses[i]=nums[i]%42;
	}
	std::sort(moduluses,moduluses + 10);
	int uniques=1;
	int temp=moduluses[0];
	for(int i=0;i<10;i++){
		if(moduluses[i]>temp){
			temp=moduluses[i];
			uniques++;
		}
	}
	std::cout<<uniques<<std::endl;

}
