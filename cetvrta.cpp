#include <iostream>

int main(){
	int points[3][2];
	std::cin>>points[0][0];
	std::cin>>points[0][1];
	std::cin>>points[1][0];
	std::cin>>points[1][1];
	std::cin>>points[2][0];
	std::cin>>points[2][1];
	int y;
	int x;
	if(points[0][0]!=points[1][0] && points[0][0]!= points[2][0]){
		y=points[0][0];
	}
	else if(points[1][0]!=points[0][0] && points[1][0]!= points[2][0]){
		y=points[1][0];
	}
	else if(points[2][0]!=points[0][0] && points[2][0]!= points[1][0]){
		y=points[2][0];
	}
	if(points[0][1]!=points[1][1] && points[0][1]!= points[2][1]){
		x=points[0][1];
	}
	else if(points[1][1]!=points[0][1] && points[1][1]!= points[2][1]){
		x=points[1][1];
	}
	else if(points[2][1]!=points[1][1] && points[2][1]!= points[0][1]){
		x=points[2][1];
	}
	std::cout<<y;
	std::cout<<" ";
	std::cout<<x<<std::endl;
}
