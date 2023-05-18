#pragma once
#include "Validation.h"
#include "Funcs.h"
#include "LogInF.h"

inline std::vector<std::string> DataOutput;
inline Guest guest;

namespace CasinoWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CasinoF
	/// </summary>
	public ref class CasinoF : public System::Windows::Forms::Form
	{
	public:
		CasinoF(void)
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
		~CasinoF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Login_button;
	protected:

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ StartMenu_label;
	private: System::Windows::Forms::Button^ Exit_button;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Button^ Signup_button;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Login_button = (gcnew System::Windows::Forms::Button());
			this->StartMenu_label = (gcnew System::Windows::Forms::Label());
			this->Exit_button = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Signup_button = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Login_button
			// 
			this->Login_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Login_button->Location = System::Drawing::Point(200, 232);
			this->Login_button->Margin = System::Windows::Forms::Padding(4);
			this->Login_button->Name = L"Login_button";
			this->Login_button->Size = System::Drawing::Size(267, 62);
			this->Login_button->TabIndex = 0;
			this->Login_button->Text = L"LOG IN";
			this->Login_button->UseVisualStyleBackColor = true;
			this->Login_button->Click += gcnew System::EventHandler(this, &CasinoF::Login_button_Click);
			// 
			// StartMenu_label
			// 
			this->StartMenu_label->AutoSize = true;
			this->StartMenu_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StartMenu_label->ForeColor = System::Drawing::Color::Black;
			this->StartMenu_label->Location = System::Drawing::Point(88, 86);
			this->StartMenu_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->StartMenu_label->Name = L"StartMenu_label";
			this->StartMenu_label->Size = System::Drawing::Size(499, 91);
			this->StartMenu_label->TabIndex = 1;
			this->StartMenu_label->Text = L"BLACK GUN";
			// 
			// Exit_button
			// 
			this->Exit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit_button->Location = System::Drawing::Point(200, 453);
			this->Exit_button->Margin = System::Windows::Forms::Padding(4);
			this->Exit_button->Name = L"Exit_button";
			this->Exit_button->Size = System::Drawing::Size(267, 62);
			this->Exit_button->TabIndex = 2;
			this->Exit_button->Text = L"EXIT";
			this->Exit_button->UseVisualStyleBackColor = true;
			this->Exit_button->Click += gcnew System::EventHandler(this, &CasinoF::Exit_button_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(645, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->aboutToolStripMenuItem->Text = L"About...";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &CasinoF::aboutToolStripMenuItem_Click);
			// 
			// Signup_button
			// 
			this->Signup_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Signup_button->Location = System::Drawing::Point(200, 329);
			this->Signup_button->Margin = System::Windows::Forms::Padding(4);
			this->Signup_button->Name = L"Signup_button";
			this->Signup_button->Size = System::Drawing::Size(267, 62);
			this->Signup_button->TabIndex = 5;
			this->Signup_button->Text = L"SIGN UP";
			this->Signup_button->UseVisualStyleBackColor = true;
			this->Signup_button->Click += gcnew System::EventHandler(this, &CasinoF::Signup_button_Click);
			// 
			// CasinoF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(645, 567);
			this->Controls->Add(this->Signup_button);
			this->Controls->Add(this->Exit_button);
			this->Controls->Add(this->StartMenu_label);
			this->Controls->Add(this->Login_button);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"CasinoF";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainMenu";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Exit_button_Click(System::Object^ sender, System::EventArgs^ e) { Application::Exit(); }
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {MessageBox::Show(this, "Casino WinForms version\nGIT: https://github.com/Zeerhiy\nE-MAIL: igressikk@gmail.com", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);}
	private: System::Void Signup_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
