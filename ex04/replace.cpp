#include "Sed.hpp"

std ::string replace(std ::string *line, std ::string s1, std ::string s2)
{
	std ::size_t pos;

	pos = (*line).find(s1);
	if (pos == std ::string ::npos)
		return ("");
	while (pos < (*line).size() && s1.size() != 0)
	{
		(*line).erase(pos, s1.size());
		(*line).insert(pos, s2);
		pos+=s2.size();
		pos = (*line).find(s1, pos);
		if (pos == std ::string ::npos)
			break;
	}
	return (*line);
}