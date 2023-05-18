#include "../headers/Validation.h"

const static std::regex r_email(
	"([A-Za-z]{3,}[\\w-\\.]{2,})"
	"(@)"
	"([a-z]{3,10})"
	"(\\.)"
	"([a-z]{2,5})");

bool ValidateEmail(const std::string input, std::vector<std::string> outputVector){

	std::cmatch result;
	if (std::regex_match(input.c_str(), result, r_email)) {
		outputVector.push_back(input);
		return true;
	}
	else return false;

}

bool ValidatePassword(const std::string input, std::vector<std::string> outputVector) {

    bool upper_case = false;
    bool lower_case = false;
    bool number_case = false;
    bool tabulation_case = false;

    std::regex upper_case_expression{ "[A-Z]+" };
    std::regex lower_case_expression{ "[a-z]+" }; 
    std::regex number_expression{ "[0-9]+" };
    std::regex tabulation_expression{ "[\\s]+" };

    bool done = false;

    if (input.length() <= 8) { 
        return false;
    }
    else {

        upper_case = std::regex_search(input, upper_case_expression); 
        lower_case = std::regex_search(input, lower_case_expression); 
        number_case = std::regex_search(input, number_expression);
        tabulation_case = std::regex_search(input, tabulation_expression);

        if (upper_case + lower_case + tabulation_case + number_case != 3) {
            return false;
        }
        else { 
            outputVector.push_back(input);
            return true;
        }

    }
}