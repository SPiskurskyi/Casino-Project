#include "../headers/CasinoF.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Text::RegularExpressions;



[STAThreadAttribute]
int main(array<String^>^) {
    
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CasinoWinForms::CasinoF form;
	Application::Run(% form);
	

}

System::Void CasinoWinForms::CasinoF::Login_button_Click(System::Object^ sender, System::EventArgs^ e)
{
		LogInF^ form = gcnew LogInF();
		this->Hide();
		form->Show();
}

System::Void CasinoWinForms::CasinoF::Signup_button_Click(System::Object^ sender, System::EventArgs^ e)
{
		SignUpF^ form = gcnew SignUpF();
		this->Hide();
		form->Show();
}
