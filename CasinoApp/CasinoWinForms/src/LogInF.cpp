#include "../headers/LogInF.h"

System::Void CasinoWinForms::LogInF::backToTheMainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	CasinoF^ form = gcnew CasinoF();
	this->Hide();
	form->Show();
}

System::Void CasinoWinForms::LogInF::LogIn_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string email;
	std::string password;
	if (Email_TextBox->Text != "" && Password_TextBox->Text != "") {
		Convert_String_to_string(Email_TextBox->Text, email);
		Convert_String_to_string(Password_TextBox->Text, password);
	}
	else {
		MessageBox::Show("Empty field(s). Try again", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	if (ValidateEmail(email) && ValidatePassword(password)) {
		
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

