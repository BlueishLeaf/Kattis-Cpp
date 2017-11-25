#include <iostream>

int main(){
	int rows;
	std::cin>>rows;
	int columns;
	std::cin>>columns;
	int mRows;
	std::cin>>mRows;
	int mColumns;
	std::cin>>mColumns;
	char table[rows][columns];
	for (int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			std::cin>>table[i][j];
		}
	}
	char newTable[rows*mRows][columns*mColumns];
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			for(int x=0;x<mColumns;x++){
				newTable[i][x]=table[i][j];
			}
			for(int x=0;x<mRows;x++){
				newTable[x][j]=table[i][j];
			}
		}
	}

	for (int i=0;i<mRows;i++){
		for(int j=0;j<mColumns;j++){
			std::cout<<newTable[i][j];
		}
		std::cout<<std::endl;
	}
}
