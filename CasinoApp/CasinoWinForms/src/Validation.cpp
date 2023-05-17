#include "../headers/Validation.h"

const static std::regex r_email(
	"([\\w][\\w-\.]+)"
	"(@)"
	"([\\w-]+)"
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


    std::regex upper_case_expression{ "[A-Z]+" };
    std::regex lower_case_expression{ "[a-z]+" }; 
    std::regex number_expression{ "[0-9]+" }; 

    bool done = false;

    if (input.length() <= 8) { 
        return false;
    }
    else {

        upper_case = std::regex_search(input, upper_case_expression); 
        lower_case = std::regex_search(input, lower_case_expression); 
        number_case = std::regex_search(input, number_expression);

        if (upper_case + lower_case + number_case != 3) { 
            return false;
        }
        else { 
            outputVector.push_back(input);
            return true;
        }

    }
}