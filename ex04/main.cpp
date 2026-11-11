#include "inc.hpp"

int replacer(const std::string& fileName,
			 const std::string& oldString,
			 const std::string& newString)
{
	std::ifstream inputFile(fileName.c_str());
	if (!inputFile)
		return 1;

	std::ostringstream buffer;
	buffer << inputFile.rdbuf();
	std::string content = buffer.str();

	std::string::size_type position = 0;
	while ((position = content.find(oldString, position))
		!= std::string::npos)
	{
		content.erase(position, oldString.length());
		content.insert(position, newString);
		position += newString.length();
	}

	inputFile.close();

	std::ofstream outputFile(fileName.c_str(),
							 std::fstream::out | std::fstream::trunc);
	if (!outputFile)
		return 1;
	outputFile << content;
	if (outputFile.good() == false)
		return 1;
	else
		return 0;
}

int main (int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "Wrong number of arguments" << std::endl, 1);

	//Define new file's name
	std::string newFileName;
	newFileName = newFileName + argv[1] + ".replace";

	//Input stream creation
	std::ifstream originalFile;
	originalFile.open(argv[1], std::fstream::in);
	//Security
	if (!originalFile)
	{
		std::cerr << "Cannot open original file." << std::endl;
		originalFile.close();
		return 1;
	}

	//Output stream creation
	std::ofstream newFile;
	newFile.open(newFileName.c_str(), std::fstream::out);
	//Security
	if (!newFile)
	{
		std::cerr << "Cannot open newly created file." << std::endl;
		originalFile.close();
		newFile.close();
		return 1;
	}

	//Copy original file in new file
	newFile << originalFile.rdbuf();
	newFile.close();

	//Open the new file and modify its content
	if (replacer(newFileName, argv[2], argv[3]) != 0)
	{
		std::cerr << "Cannot modify output file." << std::endl;
		originalFile.close();
		return 1;
	}

	//Close streams
	originalFile.close();
	return 0;
}
