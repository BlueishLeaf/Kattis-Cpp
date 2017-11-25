#include <iostream>
#include <math.h>
#include <vector>

#define PI 3.14159265

float calcTime(float V, float A, float D){
	return (D/(V*(cos(A*PI/180))));
}

float calcHeight(float V, float A, float T){
	return ((V*T*sin(A*PI/180))-(0.5*9.81*pow(T,2)));
}

int main(){
	int numCases;
	std::cin>>numCases;
	std::vector<std::string> results;
	for(int i=0;i<numCases;i++){
		float velocity;
		std::cin>>velocity;
		float angle;
		std::cin>>angle;
		float distance;
		std::cin>>distance;
		float height1;
		std::cin>>height1;
		float height2;
		std::cin>>height2;
		float time = calcTime(velocity,angle,distance);
		float ballHeight = calcHeight(velocity,angle,time);
		if(ballHeight>=height1+1 && ballHeight<=height2-1){
			results.push_back("Safe");
		}
		else{
			results.push_back("Not Safe");
		}
	}
	for(int i=0;i<results.size();i++){
		std::cout<<results[i]<<std::endl;
	}
}

