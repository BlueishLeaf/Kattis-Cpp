#include <iostream>
#include <vector>

int getCounter(int numQuestions, char questions[], std::vector<char> pattern){
	int x=0;
	int counter=0;
	for(int i=0;i<numQuestions;i++){
		if(questions[i]==pattern[x]){
			if(x==pattern.size()-1){
				counter++;
				x=0;
			}
			else{
				counter++;
				x++;
			}
		}
		else{
			if(x==pattern.size()-1){
				x=0;
			}
			else{
				x++;
			}
		}
	}
	return counter;
}
int main(){
	int numQuestions;
	std::cin>>numQuestions;
	std::vector<char> adrian = {'A','B','C'};
	std::vector<char> bruno = {'B','A','B','C'};
	std::vector<char> goran = {'C','C','A','A','B','B'};
	char questions[numQuestions];
	for(int i=0;i<numQuestions;i++){
		std::cin>>questions[i];
	}
	int adrianCounter=getCounter(numQuestions,questions,adrian);
	int brunoCounter=getCounter(numQuestions,questions,bruno);
	int goranCounter=getCounter(numQuestions,questions,goran);
	int highest;
	std::vector<std::string> winnerArray;
	if (adrianCounter>=brunoCounter && adrianCounter>=goranCounter){
		highest=adrianCounter;
		winnerArray.push_back("Adrian");
	}
	if (brunoCounter>=adrianCounter && brunoCounter>=goranCounter){
		highest=brunoCounter;
		winnerArray.push_back("Bruno");
	}
	if (goranCounter>=brunoCounter && goranCounter>=adrianCounter){
		highest=goranCounter;
		winnerArray.push_back("Goran");
	}
	std::cout<<highest<<std::endl;
	for(int i=0;i<winnerArray.size();i++){
		std::cout<<winnerArray[i]<<std::endl;
	}

}
