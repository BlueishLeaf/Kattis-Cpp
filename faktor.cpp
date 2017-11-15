#include <iostream>
#include <math.h>

int main(){
	int numArticles;
	int impFactor;
	std::cin>>numArticles;
	std::cin>>impFactor;
	impFactor--;

	int numCitations = (numArticles * impFactor)+1;
	std::cout<<numCitations<<std::endl;
}
