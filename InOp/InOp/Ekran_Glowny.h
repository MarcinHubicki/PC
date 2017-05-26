#pragma once


namespace InOp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ekran_Glowny
	/// </summary>
	public ref class Ekran_Glowny : public System::Windows::Forms::Form
	{
	public:
		Ekran_Glowny(void)
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
		~Ekran_Glowny()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  DOST_TEST_BTN;
	private: System::Windows::Forms::Button^  HIST_STUD_BTN;
	private: System::Windows::Forms::Panel^  STUD_MENU_PANEL;
	private: System::Windows::Forms::Label^  STUD_MENU_LBL;

	private: System::Windows::Forms::Panel^  STUD_MAIN_PANEL;
	private: System::Windows::Forms::TabControl^  STUD_MAIN_TAB_CTRL;
	private: System::Windows::Forms::TabPage^  DOSTEPNE_TESTY_TAB;
	private: System::Windows::Forms::TabPage^  HISTORIA_TAB;
	private: System::Windows::Forms::TabPage^  EXTRA1_TAB;








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
			this->DOST_TEST_BTN = (gcnew System::Windows::Forms::Button());
			this->HIST_STUD_BTN = (gcnew System::Windows::Forms::Button());
			this->STUD_MENU_PANEL = (gcnew System::Windows::Forms::Panel());
			this->STUD_MENU_LBL = (gcnew System::Windows::Forms::Label());
			this->STUD_MAIN_PANEL = (gcnew System::Windows::Forms::Panel());
			this->STUD_MAIN_TAB_CTRL = (gcnew System::Windows::Forms::TabControl());
			this->DOSTEPNE_TESTY_TAB = (gcnew System::Windows::Forms::TabPage());
			this->HISTORIA_TAB = (gcnew System::Windows::Forms::TabPage());
			this->EXTRA1_TAB = (gcnew System::Windows::Forms::TabPage());
			this->STUD_MENU_PANEL->SuspendLayout();
			this->STUD_MAIN_PANEL->SuspendLayout();
			this->STUD_MAIN_TAB_CTRL->SuspendLayout();
			this->SuspendLayout();
			// 
			// DOST_TEST_BTN
			// 
			this->DOST_TEST_BTN->Location = System::Drawing::Point(39, 121);
			this->DOST_TEST_BTN->Name = L"DOST_TEST_BTN";
			this->DOST_TEST_BTN->Size = System::Drawing::Size(100, 30);
			this->DOST_TEST_BTN->TabIndex = 1;
			this->DOST_TEST_BTN->Text = L"Dostepne Testy";
			this->DOST_TEST_BTN->UseVisualStyleBackColor = true;
			this->DOST_TEST_BTN->Click += gcnew System::EventHandler(this, &Ekran_Glowny::DOST_TEST_BTN_Click);
			// 
			// HIST_STUD_BTN
			// 
			this->HIST_STUD_BTN->Location = System::Drawing::Point(39, 202);
			this->HIST_STUD_BTN->Name = L"HIST_STUD_BTN";
			this->HIST_STUD_BTN->Size = System::Drawing::Size(100, 30);
			this->HIST_STUD_BTN->TabIndex = 2;
			this->HIST_STUD_BTN->Text = L"Historia";
			this->HIST_STUD_BTN->UseVisualStyleBackColor = true;
			this->HIST_STUD_BTN->Click += gcnew System::EventHandler(this, &Ekran_Glowny::HIST_STUD_BTN_Click);
			// 
			// STUD_MENU_PANEL
			// 
			this->STUD_MENU_PANEL->BackColor = System::Drawing::Color::Navy;
			this->STUD_MENU_PANEL->Controls->Add(this->STUD_MENU_LBL);
			this->STUD_MENU_PANEL->Controls->Add(this->DOST_TEST_BTN);
			this->STUD_MENU_PANEL->Controls->Add(this->HIST_STUD_BTN);
			this->STUD_MENU_PANEL->Location = System::Drawing::Point(0, 0);
			this->STUD_MENU_PANEL->Name = L"STUD_MENU_PANEL";
			this->STUD_MENU_PANEL->Size = System::Drawing::Size(200, 360);
			this->STUD_MENU_PANEL->TabIndex = 3;
			// 
			// STUD_MENU_LBL
			// 
			this->STUD_MENU_LBL->AutoSize = true;
			this->STUD_MENU_LBL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->STUD_MENU_LBL->Location = System::Drawing::Point(12, 22);
			this->STUD_MENU_LBL->Name = L"STUD_MENU_LBL";
			this->STUD_MENU_LBL->Size = System::Drawing::Size(144, 24);
			this->STUD_MENU_LBL->TabIndex = 3;
			this->STUD_MENU_LBL->Text = L"Menu G³ówne";
			// 
			// STUD_MAIN_PANEL
			// 
			this->STUD_MAIN_PANEL->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->STUD_MAIN_PANEL->Controls->Add(this->STUD_MAIN_TAB_CTRL);
			this->STUD_MAIN_PANEL->Location = System::Drawing::Point(200, 0);
			this->STUD_MAIN_PANEL->Name = L"STUD_MAIN_PANEL";
			this->STUD_MAIN_PANEL->Size = System::Drawing::Size(490, 360);
			this->STUD_MAIN_PANEL->TabIndex = 4;
			// 
			// STUD_MAIN_TAB_CTRL
			// 
			this->STUD_MAIN_TAB_CTRL->Controls->Add(this->DOSTEPNE_TESTY_TAB);
			this->STUD_MAIN_TAB_CTRL->Controls->Add(this->HISTORIA_TAB);
			this->STUD_MAIN_TAB_CTRL->Controls->Add(this->EXTRA1_TAB);
			this->STUD_MAIN_TAB_CTRL->Dock = System::Windows::Forms::DockStyle::Fill;
			this->STUD_MAIN_TAB_CTRL->ItemSize = System::Drawing::Size(10, 1);
			this->STUD_MAIN_TAB_CTRL->Location = System::Drawing::Point(0, 0);
			this->STUD_MAIN_TAB_CTRL->Name = L"STUD_MAIN_TAB_CTRL";
			this->STUD_MAIN_TAB_CTRL->Padding = System::Drawing::Point(0, 0);
			this->STUD_MAIN_TAB_CTRL->SelectedIndex = 0;
			this->STUD_MAIN_TAB_CTRL->Size = System::Drawing::Size(490, 360);
			this->STUD_MAIN_TAB_CTRL->TabIndex = 0;
			// 
			// DOSTEPNE_TESTY_TAB
			// 
			this->DOSTEPNE_TESTY_TAB->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->DOSTEPNE_TESTY_TAB->Location = System::Drawing::Point(4, 5);
			this->DOSTEPNE_TESTY_TAB->Margin = System::Windows::Forms::Padding(0);
			this->DOSTEPNE_TESTY_TAB->Name = L"DOSTEPNE_TESTY_TAB";
			this->DOSTEPNE_TESTY_TAB->Size = System::Drawing::Size(482, 351);
			this->DOSTEPNE_TESTY_TAB->TabIndex = 0;
			this->DOSTEPNE_TESTY_TAB->Text = L" ";
			// 
			// HISTORIA_TAB
			// 
			this->HISTORIA_TAB->Location = System::Drawing::Point(4, 5);
			this->HISTORIA_TAB->Name = L"HISTORIA_TAB";
			this->HISTORIA_TAB->Padding = System::Windows::Forms::Padding(3);
			this->HISTORIA_TAB->Size = System::Drawing::Size(482, 351);
			this->HISTORIA_TAB->TabIndex = 1;
			this->HISTORIA_TAB->Text = L" ";
			this->HISTORIA_TAB->UseVisualStyleBackColor = true;
			// 
			// EXTRA1_TAB
			// 
			this->EXTRA1_TAB->Location = System::Drawing::Point(4, 5);
			this->EXTRA1_TAB->Name = L"EXTRA1_TAB";
			this->EXTRA1_TAB->Padding = System::Windows::Forms::Padding(3);
			this->EXTRA1_TAB->Size = System::Drawing::Size(482, 351);
			this->EXTRA1_TAB->TabIndex = 2;
			this->EXTRA1_TAB->Text = L" ";
			this->EXTRA1_TAB->UseVisualStyleBackColor = true;
			// 
			// Ekran_Glowny
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(684, 361);
			this->Controls->Add(this->STUD_MAIN_PANEL);
			this->Controls->Add(this->STUD_MENU_PANEL);
			this->Name = L"Ekran_Glowny";
			this->Text = L"Aplikacja do testow";
			this->STUD_MENU_PANEL->ResumeLayout(false);
			this->STUD_MENU_PANEL->PerformLayout();
			this->STUD_MAIN_PANEL->ResumeLayout(false);
			this->STUD_MAIN_TAB_CTRL->ResumeLayout(false);
			this->ResumeLayout(false);

		}
private: System::Void DOST_TEST_BTN_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//testy
	DOSTEPNE_TESTY_TAB->Show();

}


private: System::Void HIST_STUD_BTN_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//hist
	HISTORIA_TAB->Show();

}
};
}
