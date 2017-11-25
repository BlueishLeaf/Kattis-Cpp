#include <iostream>

int main(){
	int numCases;
	std::cin>>numCases;
	int rows;
	std::cin>>rows;
	int columns;
	std::cin>>columns;
	char table[rows][columns];
	char newTable[rows][columns];
	int x=0;
	int y=0;
	for(x=0;x<rows;x++){
		for(y=0;y<columns;y++){
			std::cin>>table[x][y];
		}
	}
	x=0;
	y=0;
	for(int i=rows-1;i>=0;i--){
		for(int j=columns-1;j>=0;j--){
			newTable[x][y]=table[i][j];
			y++;
		}
		x++;
	}
	x=0;
	y=0;
	for(x=0;x<rows;x++){
		for(y=0;y<columns;y++){
			std::cout<<newTable[x][y];
		}
		std::cout<<std::endl;
	}
}
