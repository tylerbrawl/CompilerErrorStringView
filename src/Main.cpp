#include <string>

// Importing instead doesn't work, either...
// import <string>;

import Manifest;

namespace
{
	static constexpr const char* THIS_WORKS_SOMEHOW = "Okay...";
}

int main(int argc, char* argv[])
{
	const std::string_view thisDoesWork{ THIS_WORKS_SOMEHOW };
	
	const std::string_view butThisDoesNot{ Manifest::BREAK_IT };

	return 0;
}