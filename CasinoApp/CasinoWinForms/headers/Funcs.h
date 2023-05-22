#ifndef FUNCS
#define FUNCS

#include <string>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

//CONVERTING//
std::string& Convert_String_to_string(String^ s, std::string& os); 
String^ Convert_string_to_String(std::string& os, String^ s); 
std::string& Convert_String_to_string(String^ s);
String^ Convert_string_to_String(std::string& os);
System::String^ Convert_char_to_String(char* ch); 
char* Convert_String_to_char(System::String^ string); 

//GUEST CLASS/
class Guest {
private:
	std::string email = "";
	std::string password = "";
	std::string first_name = "";
	std::string last_name = "";
	int age = 0;
	int cash = 0;
	int tokens = 0;
public:
	Guest() {};
	void SetGuestEmail(std::string name);
	void SetGuestPassword(std::string name);
	void SetGuestFirst_name(std::string name);
	void SetGuestLast_name(std::string name);
	void SetGuestAge(int age);
	void SetGuestCash(int cash);
	void SetGuestTokens(int tokens);

	std::string GetGuestEmail();
	std::string GetGuestPassword();
	std::string GetGuestFirst_name();
	std::string GetGuestLast_name();
	int GetGuestAge();
	int GetGuestCash();
	int GetGuestTokens();

	void AddGuestTokens(int tokens);
	void SubGuestTokens(int tokens);
};

#endif
