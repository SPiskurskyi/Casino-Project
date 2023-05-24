#include "../headers/SignUpF.h"

System::Void CasinoWinForms::SignUpF::backToTheMainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	CasinoF^ form = gcnew CasinoF();
	this->Hide();
	form->Show();
}

System::Void CasinoWinForms::SignUpF::SignUp_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	auto diff = System::DateTime::Now - DateTimePicker->Value;
	int age = diff.TotalDays / 365;
	std::string first_name;
	std::string last_name;
	std::string email;
	std::string password;
	if (FirstName_textBox->Text != "" && LastName_textBox->Text != "" &&
		Email_TextBox->Text != "" && Password_TextBox->Text != "" ){
		Convert_String_to_string(FirstName_textBox->Text, first_name);
		Convert_String_to_string(LastName_textBox->Text, last_name);
		Convert_String_to_string(Email_TextBox->Text, email);
		Convert_String_to_string(Password_TextBox->Text, password);
	}
	else {
		MessageBox::Show("Empty field(s). Try again", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (ValidateName(first_name) && ValidateSurname(last_name) && ValidateAge(age) &&
		ValidateEmail(email) && ValidatePassword(password)){
		guest.SetGuestName(first_name);
		guest.SetGuestSurname(last_name);
		guest.SetGuestEmail(email);
		guest.SetGuestPassword(password);
		GuestF^ form = gcnew GuestF();
		this->Hide();
		form->Show();
	}
	else {
		MessageBox::Show("\tInvalid email or password. \n\nPasswords must be at least 7 characters long,\nmust contains one upper case letter and one digit.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
}
