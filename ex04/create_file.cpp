#include "Sed.hpp"

std ::string creat_file(std ::string name)
{
	std ::size_t pos;
	pos = name.find(".");
	if (pos == std ::string ::npos)
		return (name.append(".replace"));
	name = name.erase(pos + 1);
	name = name.append("replace");
	return (name);
}