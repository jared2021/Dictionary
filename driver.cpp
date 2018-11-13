#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
int main()
{
	std::ifstream File("Dictionary.txt");
	std::string word;
	while(!File.eof())
	{
		std::getline(File,word);
		std::cout<<word<<'\n';
	}
	return 0;
}
