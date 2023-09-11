#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		try
		{
			std ::ifstream inputfile;
			inputfile.open(argv[1], std ::ios::in);
			if (inputfile.is_open())
			{
				int first_char = inputfile.peek();
				if (first_char == EOF)
					throw("File is Empty");
				std ::string line;
				std ::ofstream outfile;
				outfile.open(creat_file(argv[1]), std ::ios::out);
				while (std ::getline(inputfile, line))
				{
					replace(&line, argv[2], argv[3]);
					outfile << line << std ::endl;
				}
			}
			else
				throw("Can't Open File");
		}
		catch (const char *ex)
		{
			std::cerr << ex << std ::endl;
		}
	}
	else
		std ::cerr << "Argumnet Not Valide !!" << std ::endl;
}
