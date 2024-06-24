#pragma once

#include <map>
#include <string>
#include <sstream>
#include <iostream>

#include "Utility.hpp"
#include "Config.hpp"

class Request
{
	typedef std::map<std::string, std::string> QueryStringParameters;
	private:
		QueryStringParameters startLine;
		QueryStringParameters headers;
		std::string body; // ???

		Location* location;

	public:
		Request();
		Request(std::string request);

		void parse(std::string request);
		
		QueryStringParameters getStartLine();
		QueryStringParameters getHeaders();

		void setLocation(Location* location);
};
