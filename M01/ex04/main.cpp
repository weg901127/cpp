#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::string	fs;
	std::string	res;

	if (argc == 4)
	{
		std::string str1(argv[2]);
		std::string str2(argv[3]);
		std::ifstream file(argv[1]);
		if (!file.is_open())
			goto err;
		std::ofstream ofile(std::string(argv[1]) + ".replace");
		fs = std::string((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
		while (1)
		{
			int at = fs.find(str1);
			if (at != 0)
				res += fs.substr(0, at);
			if (at == -1)
				break;
			res += str2;
			fs = fs.substr(at + str1.length(), std::string::npos);
		}
		if (ofile.is_open()){
			ofile << res;
			ofile.close();
		}
		return 0;
	}
err:
	std::cout << "ERROR" << std::endl;
	return 1;
}
