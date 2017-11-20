#include <iostream>

int main(){
	int x;
	std::cin>>x;
	int y;
	std::cin>>y;
	int n;
	std::cin>>n;

	for(int i=1;i<=n;i++){
		if(i%y==0 && i%x==0){
			std::cout<<"FizzBuzz"<<std::endl;
		}
		else if (i%x==0){
			std::cout<<"Fizz"<<std::endl;
		}
		else if(i%y==0){
			std::cout<<"Buzz"<<std::endl;
		}
		else{
			std::cout<<i<<std::endl;
		}
	}
}
