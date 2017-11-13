#include <iostream> 
int main(){
	int rows;
	int columns;
	std::cin>>rows;
	std::cin>>columns;
	
	char symbol[rows][columns];
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			std::cin>>symbol[i][j];
		}
	}
	int parkingCounter1=0;
	for(int i=0;i<rows-1;i++){
		for(int j=0;j<columns-1;j++){
			if(symbol[i][j]=='.'&&symbol[i+1][j]=='.'&&symbol[i][j+1]=='.'&&symbol[i+1][j+1]=='.'){
				
				parkingCounter1++;
			}

		}
	}
	int parkingCounter2=0;
	for(int i=0;i<rows-1;i++){
		for(int j=0;j<columns-1;j++){
			if(symbol[i][j]=='X'&&symbol[i+1][j]=='.'&&symbol[i][j+1]=='.'&&symbol[i+1][j+1]=='.'){
				
				parkingCounter2++;
			}

			else if(symbol[i][j]=='.'&&symbol[i+1][j]=='X'&&symbol[i][j+1]=='.'&&symbol[i+1][j+1]=='.'){
				
				parkingCounter2++;
			}
			else if(symbol[i][j]=='.'&&symbol[i+1][j]=='.'&&symbol[i][j+1]=='X'&&symbol[i+1][j+1]=='.'){
				
				parkingCounter2++;
			}
			else if(symbol[i][j]=='.'&&symbol[i+1][j]=='.'&&symbol[i][j+1]=='.'&&symbol[i+1][j+1]=='X'){
				
				parkingCounter2++;
			}
		}
	}

	int parkingCounter3=0;
	for(int i=0;i<rows-1;i++){
		for(int j=0;j<columns-1;j++){
			if(symbol[i][j]=='X'&&symbol[i+1][j]=='X'&&symbol[i][j+1]=='.'&&symbol[i+1][j+1]=='.'){
				
				parkingCounter3++;
			}

			else if(symbol[i][j]=='.'&&symbol[i+1][j]=='.'&&symbol[i][j+1]=='X'&&symbol[i+1][j+1]=='X'){
				
				parkingCounter3++;
			}
			else if(symbol[i][j]=='X'&&symbol[i+1][j]=='.'&&symbol[i][j+1]=='.'&&symbol[i+1][j+1]=='X'){
				
				parkingCounter3++;
			}
			else if(symbol[i][j]=='X'&&symbol[i+1][j]=='.'&&symbol[i][j+1]=='X'&&symbol[i+1][j+1]=='.'){
				
				parkingCounter3++;
			}
			else if(symbol[i][j]=='.'&&symbol[i+1][j]=='X'&&symbol[i][j+1]=='X'&&symbol[i+1][j+1]=='.'){
				
				parkingCounter3++;
			}
			else if(symbol[i][j]=='.'&&symbol[i+1][j]=='X'&&symbol[i][j+1]=='.'&&symbol[i+1][j+1]=='X'){
				
				parkingCounter3++;
			}
		}
	}
	int parkingCounter4=0;
	for(int i=0;i<rows-1;i++){
		for(int j=0;j<columns-1;j++){
			if(symbol[i][j]=='X'&&symbol[i+1][j]=='X'&&symbol[i][j+1]=='X'&&symbol[i+1][j+1]=='.'){
				
				parkingCounter4++;
			}

			else if(symbol[i][j]=='X'&&symbol[i+1][j]=='X'&&symbol[i][j+1]=='.'&&symbol[i+1][j+1]=='X'){
				
				parkingCounter4++;
			}
			else if(symbol[i][j]=='X'&&symbol[i+1][j]=='.'&&symbol[i][j+1]=='X'&&symbol[i+1][j+1]=='X'){
				
				parkingCounter4++;
			}
			else if(symbol[i][j]=='.'&&symbol[i+1][j]=='X'&&symbol[i][j+1]=='X'&&symbol[i+1][j+1]=='X'){
				
				parkingCounter4++;
			}
		}
	}
	int parkingCounter5=0;
	for(int i=0;i<rows-1;i++){
		for(int j=0;j<columns-1;j++){
			if(symbol[i][j]=='X'&&symbol[i+1][j]=='X'&&symbol[i][j+1]=='X'&&symbol[i+1][j+1]=='X'){
				
				parkingCounter5++;
			}
		}
	}
	std::cout<<parkingCounter1<<std::endl;
	std::cout<<parkingCounter2<<std::endl;
	std::cout<<parkingCounter3<<std::endl;
	std::cout<<parkingCounter4<<std::endl;
	std::cout<<parkingCounter5<<std::endl;
	}
