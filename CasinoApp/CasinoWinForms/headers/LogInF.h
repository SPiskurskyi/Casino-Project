#pragma once
#include "CasinoF.h"
#include "GuestF.h"

namespace CasinoWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LogInF
	/// </summary>
	public ref class LogInF : public System::Windows::Forms::Form
	{
	public:
		LogInF(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backToTheMainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitTheProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Button^ LogIn_button;
	private: System::Windows::Forms::TextBox^ Email_TextBox;
	private: System::Windows::Forms::TextBox^ Password_TextBox;
	private: System::Windows::Forms::Label^ Password_label;
	private: System::Windows::Forms::Label^ Email_label;








	public:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogInF()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backToTheMainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitTheProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LogIn_button = (gcnew System::Windows::Forms::Button());
			this->Email_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Password_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Password_label = (gcnew System::Windows::Forms::Label());
			this->Email_label = (gcnew System::Windows::Forms::Label());
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->exitToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(649, 30);
			this->menuStrip2->TabIndex = 0;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->backToTheMainMenuToolStripMenuItem,
					this->exitTheProgramToolStripMenuItem
			});
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(47, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// backToTheMainMenuToolStripMenuItem
			// 
			this->backToTheMainMenuToolStripMenuItem->Name = L"backToTheMainMenuToolStripMenuItem";
			this->backToTheMainMenuToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->backToTheMainMenuToolStripMenuItem->Text = L"Back to the main menu";
			this->backToTheMainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &LogInF::backToTheMainMenuToolStripMenuItem_Click);
			// 
			// exitTheProgramToolStripMenuItem
			// 
			this->exitTheProgramToolStripMenuItem->Name = L"exitTheProgramToolStripMenuItem";
			this->exitTheProgramToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->exitTheProgramToolStripMenuItem->Text = L"Exit the program";
			this->exitTheProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &LogInF::exitTheProgramToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(73, 26);
			this->aboutToolStripMenuItem->Text = L"About...";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &LogInF::aboutToolStripMenuItem_Click);
			// 
			// LogIn_button
			// 
			this->LogIn_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LogIn_button->Location = System::Drawing::Point(130, 312);
			this->LogIn_button->Margin = System::Windows::Forms::Padding(4);
			this->LogIn_button->Name = L"LogIn_button";
			this->LogIn_button->Size = System::Drawing::Size(357, 62);
			this->LogIn_button->TabIndex = 4;
			this->LogIn_button->Text = L"Log In";
			this->LogIn_button->UseVisualStyleBackColor = true;
			this->LogIn_button->Click += gcnew System::EventHandler(this, &LogInF::LogIn_button_Click);
			// 
			// Email_TextBox
			// 
			this->Email_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Email_TextBox->Location = System::Drawing::Point(130, 111);
			this->Email_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->Email_TextBox->Name = L"Email_TextBox";
			this->Email_TextBox->Size = System::Drawing::Size(357, 41);
			this->Email_TextBox->TabIndex = 6;
			// 
			// Password_TextBox
			// 
			this->Password_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password_TextBox->Location = System::Drawing::Point(130, 195);
			this->Password_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->Password_TextBox->Name = L"Password_TextBox";
			this->Password_TextBox->Size = System::Drawing::Size(357, 41);
			this->Password_TextBox->TabIndex = 7;
			// 
			// Password_label
			// 
			this->Password_label->AutoSize = true;
			this->Password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password_label->Location = System::Drawing::Point(125, 166);
			this->Password_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Password_label->Name = L"Password_label";
			this->Password_label->Size = System::Drawing::Size(106, 25);
			this->Password_label->TabIndex = 8;
			this->Password_label->Text = L"Password";
			// 
			// Email_label
			// 
			this->Email_label->AutoSize = true;
			this->Email_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Email_label->Location = System::Drawing::Point(125, 82);
			this->Email_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Email_label->Name = L"Email_label";
			this->Email_label->Size = System::Drawing::Size(65, 25);
			this->Email_label->TabIndex = 9;
			this->Email_label->Text = L"Email";
			// 
			// LogInF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(649, 435);
			this->Controls->Add(this->Email_label);
			this->Controls->Add(this->Password_label);
			this->Controls->Add(this->Password_TextBox);
			this->Controls->Add(this->Email_TextBox);
			this->Controls->Add(this->LogIn_button);
			this->Controls->Add(this->menuStrip2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip2;
			this->Name = L"LogInF";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LogInF";
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
private: System::Void backToTheMainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void exitTheProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { Application::Exit(); }
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { MessageBox::Show(this, "Casino WinForms version\nGIT: https://github.com/Zeerhiy\nE-MAIL: igressikk@gmail.com", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information); }
private: System::Void LogIn_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
