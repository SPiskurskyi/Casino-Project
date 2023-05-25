#pragma once
#include "CasinoF.h"

namespace CasinoWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignUpF
	/// </summary>
	public ref class SignUpF : public System::Windows::Forms::Form
	{
	public:
		SignUpF(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignUpF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backToTheMainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitTheProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem1;

	private: System::Windows::Forms::TextBox^ Email_TextBox;
	private: System::Windows::Forms::Label^ Password_label;
	private: System::Windows::Forms::TextBox^ Password_TextBox;
	private: System::Windows::Forms::DateTimePicker^ DateTimePicker;
	private: System::Windows::Forms::Label^ Email_label;
	private: System::Windows::Forms::Label^ DateBirth_label;
	private: System::Windows::Forms::Label^ LastName_label;
	private: System::Windows::Forms::TextBox^ LastName_textBox;
	private: System::Windows::Forms::Label^ FirstName_label;
	private: System::Windows::Forms::TextBox^ FirstName_textBox;
	private: System::Windows::Forms::Button^ SignUp_button;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backToTheMainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitTheProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Email_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Password_label = (gcnew System::Windows::Forms::Label());
			this->Password_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->DateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->Email_label = (gcnew System::Windows::Forms::Label());
			this->DateBirth_label = (gcnew System::Windows::Forms::Label());
			this->LastName_label = (gcnew System::Windows::Forms::Label());
			this->LastName_textBox = (gcnew System::Windows::Forms::TextBox());
			this->FirstName_label = (gcnew System::Windows::Forms::Label());
			this->FirstName_textBox = (gcnew System::Windows::Forms::TextBox());
			this->SignUp_button = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->aboutToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(649, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->backToTheMainMenuToolStripMenuItem,
					this->exitTheProgramToolStripMenuItem
			});
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(47, 24);
			this->aboutToolStripMenuItem->Text = L"Exit";
			// 
			// backToTheMainMenuToolStripMenuItem
			// 
			this->backToTheMainMenuToolStripMenuItem->Name = L"backToTheMainMenuToolStripMenuItem";
			this->backToTheMainMenuToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->backToTheMainMenuToolStripMenuItem->Text = L"Back to the main menu";
			this->backToTheMainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &SignUpF::backToTheMainMenuToolStripMenuItem_Click);
			// 
			// exitTheProgramToolStripMenuItem
			// 
			this->exitTheProgramToolStripMenuItem->Name = L"exitTheProgramToolStripMenuItem";
			this->exitTheProgramToolStripMenuItem->Size = System::Drawing::Size(244, 26);
			this->exitTheProgramToolStripMenuItem->Text = L"Exit the program";
			this->exitTheProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &SignUpF::exitTheProgramToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem1
			// 
			this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			this->aboutToolStripMenuItem1->Size = System::Drawing::Size(73, 24);
			this->aboutToolStripMenuItem1->Text = L"About...";
			this->aboutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &SignUpF::aboutToolStripMenuItem1_Click);
			// 
			// Email_TextBox
			// 
			this->Email_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Email_TextBox->Location = System::Drawing::Point(163, 273);
			this->Email_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->Email_TextBox->Name = L"Email_TextBox";
			this->Email_TextBox->Size = System::Drawing::Size(357, 41);
			this->Email_TextBox->TabIndex = 10;
			// 
			// Password_label
			// 
			this->Password_label->AutoSize = true;
			this->Password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password_label->Location = System::Drawing::Point(158, 322);
			this->Password_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Password_label->Name = L"Password_label";
			this->Password_label->Size = System::Drawing::Size(106, 25);
			this->Password_label->TabIndex = 13;
			this->Password_label->Text = L"Password";
			// 
			// Password_TextBox
			// 
			this->Password_TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password_TextBox->Location = System::Drawing::Point(163, 351);
			this->Password_TextBox->Margin = System::Windows::Forms::Padding(4);
			this->Password_TextBox->Name = L"Password_TextBox";
			this->Password_TextBox->Size = System::Drawing::Size(357, 41);
			this->Password_TextBox->TabIndex = 12;
			// 
			// DateTimePicker
			// 
			this->DateTimePicker->Location = System::Drawing::Point(163, 216);
			this->DateTimePicker->MaxDate = System::DateTime(2022, 12, 31, 0, 0, 0, 0);
			this->DateTimePicker->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->DateTimePicker->Name = L"DateTimePicker";
			this->DateTimePicker->Size = System::Drawing::Size(200, 22);
			this->DateTimePicker->TabIndex = 14;
			this->DateTimePicker->Value = System::DateTime(2022, 12, 31, 0, 0, 0, 0);
			// 
			// Email_label
			// 
			this->Email_label->AutoSize = true;
			this->Email_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Email_label->Location = System::Drawing::Point(158, 244);
			this->Email_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Email_label->Name = L"Email_label";
			this->Email_label->Size = System::Drawing::Size(65, 25);
			this->Email_label->TabIndex = 11;
			this->Email_label->Text = L"Email";
			// 
			// DateBirth_label
			// 
			this->DateBirth_label->AutoSize = true;
			this->DateBirth_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DateBirth_label->Location = System::Drawing::Point(158, 188);
			this->DateBirth_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DateBirth_label->Name = L"DateBirth_label";
			this->DateBirth_label->Size = System::Drawing::Size(107, 25);
			this->DateBirth_label->TabIndex = 15;
			this->DateBirth_label->Text = L"Date Birth";
			// 
			// LastName_label
			// 
			this->LastName_label->AutoSize = true;
			this->LastName_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LastName_label->Location = System::Drawing::Point(158, 116);
			this->LastName_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LastName_label->Name = L"LastName_label";
			this->LastName_label->Size = System::Drawing::Size(99, 25);
			this->LastName_label->TabIndex = 19;
			this->LastName_label->Text = L"Surname";
			// 
			// LastName_textBox
			// 
			this->LastName_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LastName_textBox->Location = System::Drawing::Point(163, 145);
			this->LastName_textBox->Margin = System::Windows::Forms::Padding(4);
			this->LastName_textBox->Name = L"LastName_textBox";
			this->LastName_textBox->Size = System::Drawing::Size(357, 41);
			this->LastName_textBox->TabIndex = 18;
			// 
			// FirstName_label
			// 
			this->FirstName_label->AutoSize = true;
			this->FirstName_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FirstName_label->Location = System::Drawing::Point(158, 38);
			this->FirstName_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->FirstName_label->Name = L"FirstName_label";
			this->FirstName_label->Size = System::Drawing::Size(68, 25);
			this->FirstName_label->TabIndex = 17;
			this->FirstName_label->Text = L"Name";
			// 
			// FirstName_textBox
			// 
			this->FirstName_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FirstName_textBox->Location = System::Drawing::Point(163, 67);
			this->FirstName_textBox->Margin = System::Windows::Forms::Padding(4);
			this->FirstName_textBox->Name = L"FirstName_textBox";
			this->FirstName_textBox->Size = System::Drawing::Size(357, 41);
			this->FirstName_textBox->TabIndex = 16;
			// 
			// SignUp_button
			// 
			this->SignUp_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SignUp_button->Location = System::Drawing::Point(163, 416);
			this->SignUp_button->Margin = System::Windows::Forms::Padding(4);
			this->SignUp_button->Name = L"SignUp_button";
			this->SignUp_button->Size = System::Drawing::Size(357, 62);
			this->SignUp_button->TabIndex = 20;
			this->SignUp_button->Text = L"Sign up";
			this->SignUp_button->UseVisualStyleBackColor = true;
			this->SignUp_button->Click += gcnew System::EventHandler(this, &SignUpF::SignUp_button_Click);
			// 
			// SignUpF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 491);
			this->Controls->Add(this->SignUp_button);
			this->Controls->Add(this->LastName_label);
			this->Controls->Add(this->LastName_textBox);
			this->Controls->Add(this->FirstName_label);
			this->Controls->Add(this->FirstName_textBox);
			this->Controls->Add(this->DateBirth_label);
			this->Controls->Add(this->DateTimePicker);
			this->Controls->Add(this->Password_label);
			this->Controls->Add(this->Password_TextBox);
			this->Controls->Add(this->Email_label);
			this->Controls->Add(this->Email_TextBox);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"SignUpF";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignUpF";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void backToTheMainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void exitTheProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { Application::Exit(); }
private: System::Void aboutToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) { MessageBox::Show(this, "BLACK GUN CASINO\nDETAILS: https://github.com/Zeerhiy/Casino-Project\n(c) SIGMAS", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information); }
private: System::Void SignUp_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
