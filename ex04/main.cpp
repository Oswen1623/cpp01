#include "inc.hpp"

void replacer(std::string& content, const std::string& oldString, const std::string& newString)
{
	std::string::size_type position = 0;
	while ((position = content.find(oldString, position)) != std::string::npos)
	{
		content.erase(position, oldString.length());
		content.insert(position, newString);
		position += newString.length();
	}
	return;
}

bool readFile(const std::string& fileName, std::string& content)
{
	std::ifstream originalFile(fileName.c_str(), std::fstream::in);
	if (!originalFile)
		return false;

	std::ostringstream buffer;
	buffer << originalFile.rdbuf();
	if (!originalFile.good() && !originalFile.eof())
		return false;

	content = buffer.str();
	return true;
}

bool writeFile(const std::string& fileName, const std::string& content)
{
	std::ofstream outputFile(fileName.c_str(), std::fstream::out);
	if (!outputFile)
		return false;

	outputFile << content;
	return outputFile.good();
}

int main (int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << "Wrong number of arguments" << std::endl, 1);

	if (std::string(argv[1]).empty() || std::string(argv[2]).empty())
		return (std::cerr << "Arguments can't be empty" << std::endl, 1);

	std::string content;
	if (!readFile(argv[1], content))
	{
		std::cerr << "Cannot read original file." << std::endl;
		return 1;
	}

	replacer(content, argv[2], argv[3]);

	std::string newFileName = std::string(argv[1]) + ".replace";
	if (!writeFile(newFileName, content))
	{
		std::cerr << "Cannot write to newly created file." << std::endl;
		return 1;
	}

	return 0;
}
