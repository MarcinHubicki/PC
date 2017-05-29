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
	private: System::Windows::Forms::TabControl^  WYKL_MAIN_TAB_CTRL;
	private: System::Windows::Forms::TabPage^  NOWY_TEST_TAB;
	private: System::Windows::Forms::TabPage^  HISTORIA_TAB;
	private: System::Windows::Forms::TabPage^  RAPORTY_TAB;
	private: System::Windows::Forms::TabPage^  WYSKL_EXTRA1;
	private: System::Windows::Forms::Label^  DATA_ROZP_LBL;
	private: System::Windows::Forms::Label^  PRZEDMIOT_LBL;
	private: System::Windows::Forms::Label^  NOWY_TEST_NAZW_LBL;
	private: System::Windows::Forms::TextBox^  NOWY_TEST_NAZW_TXTB;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  DATA_ZAKON_LBL;
	private: System::Windows::Forms::TextBox^  DATA_ROZP_TXTB;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  CZAS_TESTU_LBL;
	private: System::Windows::Forms::TextBox^  CZAS_TESTU_TXTB;
	private: System::Windows::Forms::TextBox^  IL_PYTAN_TRUDNYCH_TXTB;
	private: System::Windows::Forms::Label^  IL_PYTAN_TRUDNYCH_LBL;
	private: System::Windows::Forms::TextBox^  IL_PYTAN_SREDNICH_TXTB;
	private: System::Windows::Forms::Label^  IL_PYTAN_SREDNICH_LBL;
	private: System::Windows::Forms::Label^  IL_PYTAN_LATWYCH_LBL;
	private: System::Windows::Forms::TextBox^  IL_PYTAN_LATWYCH_TXTB;

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
			this->WYKL_MAIN_TAB_CTRL = (gcnew System::Windows::Forms::TabControl());
			this->NOWY_TEST_TAB = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->DATA_ZAKON_LBL = (gcnew System::Windows::Forms::Label());
			this->DATA_ROZP_TXTB = (gcnew System::Windows::Forms::TextBox());
			this->DATA_ROZP_LBL = (gcnew System::Windows::Forms::Label());
			this->PRZEDMIOT_LBL = (gcnew System::Windows::Forms::Label());
			this->NOWY_TEST_NAZW_LBL = (gcnew System::Windows::Forms::Label());
			this->NOWY_TEST_NAZW_TXTB = (gcnew System::Windows::Forms::TextBox());
			this->HISTORIA_TAB = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RAPORTY_TAB = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->WYSKL_EXTRA1 = (gcnew System::Windows::Forms::TabPage());
			this->CZAS_TESTU_TXTB = (gcnew System::Windows::Forms::TextBox());
			this->CZAS_TESTU_LBL = (gcnew System::Windows::Forms::Label());
			this->IL_PYTAN_LATWYCH_TXTB = (gcnew System::Windows::Forms::TextBox());
			this->IL_PYTAN_LATWYCH_LBL = (gcnew System::Windows::Forms::Label());
			this->IL_PYTAN_SREDNICH_LBL = (gcnew System::Windows::Forms::Label());
			this->IL_PYTAN_SREDNICH_TXTB = (gcnew System::Windows::Forms::TextBox());
			this->IL_PYTAN_TRUDNYCH_LBL = (gcnew System::Windows::Forms::Label());
			this->IL_PYTAN_TRUDNYCH_TXTB = (gcnew System::Windows::Forms::TextBox());
			this->WYKL_MENU_PANEL->SuspendLayout();
			this->STUD_MAIN_PANEL->SuspendLayout();
			this->WYKL_MAIN_TAB_CTRL->SuspendLayout();
			this->NOWY_TEST_TAB->SuspendLayout();
			this->HISTORIA_TAB->SuspendLayout();
			this->RAPORTY_TAB->SuspendLayout();
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
			this->NOWY_TEST_BTN->Click += gcnew System::EventHandler(this, &Ekran_Glowny_Wykl::NOWY_TEST_BTN_Click);
			// 
			// HIST_WYKL_BTN
			// 
			this->HIST_WYKL_BTN->Location = System::Drawing::Point(50, 160);
			this->HIST_WYKL_BTN->Name = L"HIST_WYKL_BTN";
			this->HIST_WYKL_BTN->Size = System::Drawing::Size(96, 29);
			this->HIST_WYKL_BTN->TabIndex = 2;
			this->HIST_WYKL_BTN->Text = L"Historia";
			this->HIST_WYKL_BTN->UseVisualStyleBackColor = true;
			this->HIST_WYKL_BTN->Click += gcnew System::EventHandler(this, &Ekran_Glowny_Wykl::HIST_WYKL_BTN_Click);
			// 
			// RAPORTY_BTN
			// 
			this->RAPORTY_BTN->Location = System::Drawing::Point(50, 230);
			this->RAPORTY_BTN->Name = L"RAPORTY_BTN";
			this->RAPORTY_BTN->Size = System::Drawing::Size(95, 27);
			this->RAPORTY_BTN->TabIndex = 3;
			this->RAPORTY_BTN->Text = L"Raporty";
			this->RAPORTY_BTN->UseVisualStyleBackColor = true;
			this->RAPORTY_BTN->Click += gcnew System::EventHandler(this, &Ekran_Glowny_Wykl::RAPORTY_BTN_Click);
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
			this->STUD_MAIN_PANEL->Controls->Add(this->WYKL_MAIN_TAB_CTRL);
			this->STUD_MAIN_PANEL->Location = System::Drawing::Point(200, 0);
			this->STUD_MAIN_PANEL->Name = L"STUD_MAIN_PANEL";
			this->STUD_MAIN_PANEL->Size = System::Drawing::Size(490, 360);
			this->STUD_MAIN_PANEL->TabIndex = 5;
			// 
			// WYKL_MAIN_TAB_CTRL
			// 
			this->WYKL_MAIN_TAB_CTRL->Controls->Add(this->WYSKL_EXTRA1);
			this->WYKL_MAIN_TAB_CTRL->Controls->Add(this->NOWY_TEST_TAB);
			this->WYKL_MAIN_TAB_CTRL->Controls->Add(this->HISTORIA_TAB);
			this->WYKL_MAIN_TAB_CTRL->Controls->Add(this->RAPORTY_TAB);
			this->WYKL_MAIN_TAB_CTRL->Dock = System::Windows::Forms::DockStyle::Fill;
			this->WYKL_MAIN_TAB_CTRL->ItemSize = System::Drawing::Size(1, 1);
			this->WYKL_MAIN_TAB_CTRL->Location = System::Drawing::Point(0, 0);
			this->WYKL_MAIN_TAB_CTRL->Margin = System::Windows::Forms::Padding(0);
			this->WYKL_MAIN_TAB_CTRL->Name = L"WYKL_MAIN_TAB_CTRL";
			this->WYKL_MAIN_TAB_CTRL->Padding = System::Drawing::Point(0, 0);
			this->WYKL_MAIN_TAB_CTRL->SelectedIndex = 0;
			this->WYKL_MAIN_TAB_CTRL->Size = System::Drawing::Size(490, 360);
			this->WYKL_MAIN_TAB_CTRL->TabIndex = 0;
			// 
			// NOWY_TEST_TAB
			// 
			this->NOWY_TEST_TAB->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->NOWY_TEST_TAB->Controls->Add(this->IL_PYTAN_TRUDNYCH_TXTB);
			this->NOWY_TEST_TAB->Controls->Add(this->IL_PYTAN_TRUDNYCH_LBL);
			this->NOWY_TEST_TAB->Controls->Add(this->IL_PYTAN_SREDNICH_TXTB);
			this->NOWY_TEST_TAB->Controls->Add(this->IL_PYTAN_SREDNICH_LBL);
			this->NOWY_TEST_TAB->Controls->Add(this->IL_PYTAN_LATWYCH_LBL);
			this->NOWY_TEST_TAB->Controls->Add(this->IL_PYTAN_LATWYCH_TXTB);
			this->NOWY_TEST_TAB->Controls->Add(this->CZAS_TESTU_LBL);
			this->NOWY_TEST_TAB->Controls->Add(this->CZAS_TESTU_TXTB);
			this->NOWY_TEST_TAB->Controls->Add(this->textBox1);
			this->NOWY_TEST_TAB->Controls->Add(this->DATA_ZAKON_LBL);
			this->NOWY_TEST_TAB->Controls->Add(this->DATA_ROZP_TXTB);
			this->NOWY_TEST_TAB->Controls->Add(this->DATA_ROZP_LBL);
			this->NOWY_TEST_TAB->Controls->Add(this->PRZEDMIOT_LBL);
			this->NOWY_TEST_TAB->Controls->Add(this->NOWY_TEST_NAZW_LBL);
			this->NOWY_TEST_TAB->Controls->Add(this->NOWY_TEST_NAZW_TXTB);
			this->NOWY_TEST_TAB->Location = System::Drawing::Point(4, 14);
			this->NOWY_TEST_TAB->Name = L"NOWY_TEST_TAB";
			this->NOWY_TEST_TAB->Padding = System::Windows::Forms::Padding(3);
			this->NOWY_TEST_TAB->Size = System::Drawing::Size(482, 342);
			this->NOWY_TEST_TAB->TabIndex = 0;
			this->NOWY_TEST_TAB->Text = L" ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(374, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(80, 20);
			this->textBox1->TabIndex = 6;
			// 
			// DATA_ZAKON_LBL
			// 
			this->DATA_ZAKON_LBL->AutoSize = true;
			this->DATA_ZAKON_LBL->Location = System::Drawing::Point(265, 100);
			this->DATA_ZAKON_LBL->Name = L"DATA_ZAKON_LBL";
			this->DATA_ZAKON_LBL->Size = System::Drawing::Size(93, 13);
			this->DATA_ZAKON_LBL->TabIndex = 5;
			this->DATA_ZAKON_LBL->Text = L"Data zakoñczenia";
			// 
			// DATA_ROZP_TXTB
			// 
			this->DATA_ROZP_TXTB->Location = System::Drawing::Point(119, 100);
			this->DATA_ROZP_TXTB->Name = L"DATA_ROZP_TXTB";
			this->DATA_ROZP_TXTB->Size = System::Drawing::Size(80, 20);
			this->DATA_ROZP_TXTB->TabIndex = 4;
			// 
			// DATA_ROZP_LBL
			// 
			this->DATA_ROZP_LBL->AutoSize = true;
			this->DATA_ROZP_LBL->Location = System::Drawing::Point(10, 100);
			this->DATA_ROZP_LBL->Name = L"DATA_ROZP_LBL";
			this->DATA_ROZP_LBL->Size = System::Drawing::Size(93, 13);
			this->DATA_ROZP_LBL->TabIndex = 3;
			this->DATA_ROZP_LBL->Text = L"Data rozpoczêcia ";
			// 
			// PRZEDMIOT_LBL
			// 
			this->PRZEDMIOT_LBL->AutoSize = true;
			this->PRZEDMIOT_LBL->Location = System::Drawing::Point(265, 50);
			this->PRZEDMIOT_LBL->Name = L"PRZEDMIOT_LBL";
			this->PRZEDMIOT_LBL->Size = System::Drawing::Size(53, 13);
			this->PRZEDMIOT_LBL->TabIndex = 2;
			this->PRZEDMIOT_LBL->Text = L"Przedmiot";
			// 
			// NOWY_TEST_NAZW_LBL
			// 
			this->NOWY_TEST_NAZW_LBL->AutoSize = true;
			this->NOWY_TEST_NAZW_LBL->Location = System::Drawing::Point(10, 50);
			this->NOWY_TEST_NAZW_LBL->Name = L"NOWY_TEST_NAZW_LBL";
			this->NOWY_TEST_NAZW_LBL->Size = System::Drawing::Size(70, 13);
			this->NOWY_TEST_NAZW_LBL->TabIndex = 1;
			this->NOWY_TEST_NAZW_LBL->Text = L"Nazwa Testu";
			// 
			// NOWY_TEST_NAZW_TXTB
			// 
			this->NOWY_TEST_NAZW_TXTB->Location = System::Drawing::Point(120, 50);
			this->NOWY_TEST_NAZW_TXTB->Name = L"NOWY_TEST_NAZW_TXTB";
			this->NOWY_TEST_NAZW_TXTB->Size = System::Drawing::Size(80, 20);
			this->NOWY_TEST_NAZW_TXTB->TabIndex = 0;
			// 
			// HISTORIA_TAB
			// 
			this->HISTORIA_TAB->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->HISTORIA_TAB->Controls->Add(this->label1);
			this->HISTORIA_TAB->Location = System::Drawing::Point(4, 14);
			this->HISTORIA_TAB->Name = L"HISTORIA_TAB";
			this->HISTORIA_TAB->Padding = System::Windows::Forms::Padding(3);
			this->HISTORIA_TAB->Size = System::Drawing::Size(482, 342);
			this->HISTORIA_TAB->TabIndex = 1;
			this->HISTORIA_TAB->Text = L" ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(137, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Lul";
			// 
			// RAPORTY_TAB
			// 
			this->RAPORTY_TAB->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->RAPORTY_TAB->Controls->Add(this->label2);
			this->RAPORTY_TAB->Location = System::Drawing::Point(4, 14);
			this->RAPORTY_TAB->Name = L"RAPORTY_TAB";
			this->RAPORTY_TAB->Padding = System::Windows::Forms::Padding(3);
			this->RAPORTY_TAB->Size = System::Drawing::Size(482, 342);
			this->RAPORTY_TAB->TabIndex = 2;
			this->RAPORTY_TAB->Text = L" ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(131, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"cuœ";
			// 
			// WYSKL_EXTRA1
			// 
			this->WYSKL_EXTRA1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->WYSKL_EXTRA1->Location = System::Drawing::Point(4, 5);
			this->WYSKL_EXTRA1->Name = L"WYSKL_EXTRA1";
			this->WYSKL_EXTRA1->Padding = System::Windows::Forms::Padding(3);
			this->WYSKL_EXTRA1->Size = System::Drawing::Size(482, 351);
			this->WYSKL_EXTRA1->TabIndex = 3;
			this->WYSKL_EXTRA1->Text = L" ";
			// 
			// CZAS_TESTU_TXTB
			// 
			this->CZAS_TESTU_TXTB->Location = System::Drawing::Point(120, 160);
			this->CZAS_TESTU_TXTB->Name = L"CZAS_TESTU_TXTB";
			this->CZAS_TESTU_TXTB->Size = System::Drawing::Size(79, 20);
			this->CZAS_TESTU_TXTB->TabIndex = 7;
			// 
			// CZAS_TESTU_LBL
			// 
			this->CZAS_TESTU_LBL->AutoSize = true;
			this->CZAS_TESTU_LBL->Location = System::Drawing::Point(10, 163);
			this->CZAS_TESTU_LBL->Name = L"CZAS_TESTU_LBL";
			this->CZAS_TESTU_LBL->Size = System::Drawing::Size(56, 13);
			this->CZAS_TESTU_LBL->TabIndex = 8;
			this->CZAS_TESTU_LBL->Text = L"Czas testu";
			// 
			// IL_PYTAN_LATWYCH_TXTB
			// 
			this->IL_PYTAN_LATWYCH_TXTB->Location = System::Drawing::Point(115, 222);
			this->IL_PYTAN_LATWYCH_TXTB->Name = L"IL_PYTAN_LATWYCH_TXTB";
			this->IL_PYTAN_LATWYCH_TXTB->Size = System::Drawing::Size(45, 20);
			this->IL_PYTAN_LATWYCH_TXTB->TabIndex = 9;
			// 
			// IL_PYTAN_LATWYCH_LBL
			// 
			this->IL_PYTAN_LATWYCH_LBL->AutoSize = true;
			this->IL_PYTAN_LATWYCH_LBL->Location = System::Drawing::Point(10, 225);
			this->IL_PYTAN_LATWYCH_LBL->Name = L"IL_PYTAN_LATWYCH_LBL";
			this->IL_PYTAN_LATWYCH_LBL->Size = System::Drawing::Size(99, 13);
			this->IL_PYTAN_LATWYCH_LBL->TabIndex = 10;
			this->IL_PYTAN_LATWYCH_LBL->Text = L"Iloœæ pytañ ³atwych";
			// 
			// IL_PYTAN_SREDNICH_LBL
			// 
			this->IL_PYTAN_SREDNICH_LBL->AutoSize = true;
			this->IL_PYTAN_SREDNICH_LBL->Location = System::Drawing::Point(166, 225);
			this->IL_PYTAN_SREDNICH_LBL->Name = L"IL_PYTAN_SREDNICH_LBL";
			this->IL_PYTAN_SREDNICH_LBL->Size = System::Drawing::Size(101, 13);
			this->IL_PYTAN_SREDNICH_LBL->TabIndex = 11;
			this->IL_PYTAN_SREDNICH_LBL->Text = L"Iloœæ pytañ œrednich";
			// 
			// IL_PYTAN_SREDNICH_TXTB
			// 
			this->IL_PYTAN_SREDNICH_TXTB->Location = System::Drawing::Point(268, 222);
			this->IL_PYTAN_SREDNICH_TXTB->Name = L"IL_PYTAN_SREDNICH_TXTB";
			this->IL_PYTAN_SREDNICH_TXTB->Size = System::Drawing::Size(45, 20);
			this->IL_PYTAN_SREDNICH_TXTB->TabIndex = 12;
			// 
			// IL_PYTAN_TRUDNYCH_LBL
			// 
			this->IL_PYTAN_TRUDNYCH_LBL->AutoSize = true;
			this->IL_PYTAN_TRUDNYCH_LBL->Location = System::Drawing::Point(319, 225);
			this->IL_PYTAN_TRUDNYCH_LBL->Name = L"IL_PYTAN_TRUDNYCH_LBL";
			this->IL_PYTAN_TRUDNYCH_LBL->Size = System::Drawing::Size(102, 13);
			this->IL_PYTAN_TRUDNYCH_LBL->TabIndex = 13;
			this->IL_PYTAN_TRUDNYCH_LBL->Text = L"Iloœæ pytañ trudnych";
			// 
			// IL_PYTAN_TRUDNYCH_TXTB
			// 
			this->IL_PYTAN_TRUDNYCH_TXTB->Location = System::Drawing::Point(423, 222);
			this->IL_PYTAN_TRUDNYCH_TXTB->Name = L"IL_PYTAN_TRUDNYCH_TXTB";
			this->IL_PYTAN_TRUDNYCH_TXTB->Size = System::Drawing::Size(45, 20);
			this->IL_PYTAN_TRUDNYCH_TXTB->TabIndex = 14;
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
			this->STUD_MAIN_PANEL->ResumeLayout(false);
			this->WYKL_MAIN_TAB_CTRL->ResumeLayout(false);
			this->NOWY_TEST_TAB->ResumeLayout(false);
			this->NOWY_TEST_TAB->PerformLayout();
			this->HISTORIA_TAB->ResumeLayout(false);
			this->HISTORIA_TAB->PerformLayout();
			this->RAPORTY_TAB->ResumeLayout(false);
			this->RAPORTY_TAB->PerformLayout();
			this->ResumeLayout(false);

		}

	private: System::Void NOWY_TEST_BTN_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//nowy test
		//NOWY_TEST_TAB->Show();
		WYKL_MAIN_TAB_CTRL->SelectTab("NOWY_TEST_TAB");


	}
private: System::Void HIST_WYKL_BTN_Click(System::Object^  sender, System::EventArgs^  e)
{
	//HISTORIA
	//HISTORIA_TAB->Show();
	WYKL_MAIN_TAB_CTRL->SelectTab("HISTORIA_TAB");


}
private: System::Void RAPORTY_BTN_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//RAPORTY
	WYKL_MAIN_TAB_CTRL->SelectTab("RAPORTY_TAB");

}

};
}
