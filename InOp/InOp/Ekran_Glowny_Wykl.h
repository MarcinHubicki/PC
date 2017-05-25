#pragma once

namespace InOp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ekran_Glowny_Wykl
	/// </summary>
	public ref class Ekran_Glowny_Wykl : public System::Windows::Forms::Form
	{
	public:
		Ekran_Glowny_Wykl(void)
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
		~Ekran_Glowny_Wykl()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  NOWY_TEST_BTN;
	private: System::Windows::Forms::Button^  HIST_WYKL_BTN;
	private: System::Windows::Forms::Button^  RAPORTY_BTN;
	private: System::Windows::Forms::Panel^  WYKL_MENU_PANEL;
	private: System::Windows::Forms::Label^  WYKL_MENU_LBL;
	private: System::Windows::Forms::Panel^  STUD_MAIN_PANEL;

	protected:

	protected:

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
			this->NOWY_TEST_BTN = (gcnew System::Windows::Forms::Button());
			this->HIST_WYKL_BTN = (gcnew System::Windows::Forms::Button());
			this->RAPORTY_BTN = (gcnew System::Windows::Forms::Button());
			this->WYKL_MENU_PANEL = (gcnew System::Windows::Forms::Panel());
			this->WYKL_MENU_LBL = (gcnew System::Windows::Forms::Label());
			this->STUD_MAIN_PANEL = (gcnew System::Windows::Forms::Panel());
			this->WYKL_MENU_PANEL->SuspendLayout();
			this->SuspendLayout();
			// 
			// NOWY_TEST_BTN
			// 
			this->NOWY_TEST_BTN->Location = System::Drawing::Point(50, 90);
			this->NOWY_TEST_BTN->Name = L"NOWY_TEST_BTN";
			this->NOWY_TEST_BTN->Size = System::Drawing::Size(100, 30);
			this->NOWY_TEST_BTN->TabIndex = 1;
			this->NOWY_TEST_BTN->Text = L"Nowy Test";
			this->NOWY_TEST_BTN->UseVisualStyleBackColor = true;
			// 
			// HIST_WYKL_BTN
			// 
			this->HIST_WYKL_BTN->Location = System::Drawing::Point(50, 160);
			this->HIST_WYKL_BTN->Name = L"HIST_WYKL_BTN";
			this->HIST_WYKL_BTN->Size = System::Drawing::Size(96, 29);
			this->HIST_WYKL_BTN->TabIndex = 2;
			this->HIST_WYKL_BTN->Text = L"Historia";
			this->HIST_WYKL_BTN->UseVisualStyleBackColor = true;
			// 
			// RAPORTY_BTN
			// 
			this->RAPORTY_BTN->Location = System::Drawing::Point(50, 230);
			this->RAPORTY_BTN->Name = L"RAPORTY_BTN";
			this->RAPORTY_BTN->Size = System::Drawing::Size(95, 27);
			this->RAPORTY_BTN->TabIndex = 3;
			this->RAPORTY_BTN->Text = L"Raporty";
			this->RAPORTY_BTN->UseVisualStyleBackColor = true;
			// 
			// WYKL_MENU_PANEL
			// 
			this->WYKL_MENU_PANEL->BackColor = System::Drawing::Color::Navy;
			this->WYKL_MENU_PANEL->Controls->Add(this->WYKL_MENU_LBL);
			this->WYKL_MENU_PANEL->Controls->Add(this->NOWY_TEST_BTN);
			this->WYKL_MENU_PANEL->Controls->Add(this->RAPORTY_BTN);
			this->WYKL_MENU_PANEL->Controls->Add(this->HIST_WYKL_BTN);
			this->WYKL_MENU_PANEL->Location = System::Drawing::Point(0, 0);
			this->WYKL_MENU_PANEL->Name = L"WYKL_MENU_PANEL";
			this->WYKL_MENU_PANEL->Size = System::Drawing::Size(200, 360);
			this->WYKL_MENU_PANEL->TabIndex = 4;
			// 
			// WYKL_MENU_LBL
			// 
			this->WYKL_MENU_LBL->AutoSize = true;
			this->WYKL_MENU_LBL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->WYKL_MENU_LBL->Location = System::Drawing::Point(25, 0);
			this->WYKL_MENU_LBL->Name = L"WYKL_MENU_LBL";
			this->WYKL_MENU_LBL->Size = System::Drawing::Size(144, 24);
			this->WYKL_MENU_LBL->TabIndex = 4;
			this->WYKL_MENU_LBL->Text = L"Menu G³ówne";
			// 
			// STUD_MAIN_PANEL
			// 
			this->STUD_MAIN_PANEL->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->STUD_MAIN_PANEL->Location = System::Drawing::Point(200, 0);
			this->STUD_MAIN_PANEL->Name = L"STUD_MAIN_PANEL";
			this->STUD_MAIN_PANEL->Size = System::Drawing::Size(490, 360);
			this->STUD_MAIN_PANEL->TabIndex = 5;
			// 
			// Ekran_Glowny_Wykl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(684, 361);
			this->Controls->Add(this->STUD_MAIN_PANEL);
			this->Controls->Add(this->WYKL_MENU_PANEL);
			this->Name = L"Ekran_Glowny_Wykl";
			this->Text = L"Aplikacja do testow";
			this->WYKL_MENU_PANEL->ResumeLayout(false);
			this->WYKL_MENU_PANEL->PerformLayout();
			this->ResumeLayout(false);

		}

	};
}
