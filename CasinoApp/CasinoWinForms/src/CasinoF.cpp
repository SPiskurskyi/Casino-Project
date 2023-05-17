#include "../headers/CasinoF.h"
#include "../headers/CreateGuestF.h"
#include "../headers/Funcs.h"



using namespace System;
using namespace System::Windows::Forms;
using namespace System::Text::RegularExpressions;

static std::vector<std::string> DataOutput;

[STAThreadAttribute]
int main(array<String^>^) {
    
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CasinoWinForms::CasinoF form;
	Application::Run(% form);
	

}

System::Void CasinoWinForms::CasinoF::Login_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	//if (ValidateEmail("igressikk@gmail.com", DataOutput) && ValidatePassword("Qwerty123", DataOutput)) 
		CreateGuestF^ form = gcnew CreateGuestF();
		this->Hide();
		form->Show();
	
}

System::Void CasinoWinForms::CasinoF::Signup_button_Click(System::Object^ sender, System::EventArgs^ e)
{


	CreateGuestF^ form = gcnew CreateGuestF();
	this->Hide();
	form->Show();
}
