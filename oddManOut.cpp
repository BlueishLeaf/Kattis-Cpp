#include <iostream>
#include <algorithm>
#include <array>

using namespace std;
int main(){
	int numTests;
	std::cin>>numTests;
	for(int i=0;i<numTests;i++){
		int numGuests;
		std::cin>>numGuests;
		int guestCode[numGuests];
		for(int j=0;j<numGuests;j++){
			std::cin>>guestCode[j];
		}
		std::sort(guestCode,guestCode+numGuests);
		int oddOneOut;
		for(int j=0;j<numGuests;j+=2){
			if(guestCode[j]!=guestCode[j+1]){
				oddOneOut=guestCode[j];
				break;
			}
		}
		std::cout<<"Case #"+to_string(i+1)+": ";
		std::cout<<oddOneOut<<std::endl;
	}
}
