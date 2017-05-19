#pragma once
#include"Ekran_Glowny.h"
#include "Ekran_Glowny_Wykl.h"
#include <libpq\libpq-fs.h>
#include <libpq-fe.h>

namespace InOp {



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InOp
	/// </summary>
	public ref class InOp : public System::Windows::Forms::Form
	{
	public:
		InOp(void)
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
		~InOp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ZALOGUJ_STUD_BTN;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::TextBox^  NR_ALB_TXTB;
	private: System::Windows::Forms::TextBox^  IMIE_TXTB;
	private: System::Windows::Forms::TextBox^  IMIE_STUD_TXTB;
	protected:




	private: System::Windows::Forms::Label^  NR_ALB_LBL;
	private: System::Windows::Forms::Label^  IMIE_STUD_LBL;

	private: System::Windows::Forms::Label^  STUD_LBL;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  IMIE_LBL;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  NAZW_TXTB;
	private: System::Windows::Forms::TextBox^  HASLO_WYKL_TXTB;
	private: System::Windows::Forms::Label^  HASLO_WYKL_LBL;
	private: System::Windows::Forms::TextBox^  NAZW_STUD_TXTB;
	private: System::Windows::Forms::Label^  NAZW_STUD_LBL;
	private: System::Windows::Forms::Button^  ZALOGUJ_WYKL_BTN;

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
			this->ZALOGUJ_STUD_BTN = (gcnew System::Windows::Forms::Button());
			this->NR_ALB_TXTB = (gcnew System::Windows::Forms::TextBox());
			this->IMIE_TXTB = (gcnew System::Windows::Forms::TextBox());
			this->IMIE_STUD_TXTB = (gcnew System::Windows::Forms::TextBox());
			this->NR_ALB_LBL = (gcnew System::Windows::Forms::Label());
			this->IMIE_STUD_LBL = (gcnew System::Windows::Forms::Label());
			this->STUD_LBL = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->IMIE_LBL = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->NAZW_TXTB = (gcnew System::Windows::Forms::Label());
			this->HASLO_WYKL_TXTB = (gcnew System::Windows::Forms::TextBox());
			this->HASLO_WYKL_LBL = (gcnew System::Windows::Forms::Label());
			this->NAZW_STUD_TXTB = (gcnew System::Windows::Forms::TextBox());
			this->NAZW_STUD_LBL = (gcnew System::Windows::Forms::Label());
			this->ZALOGUJ_WYKL_BTN = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ZALOGUJ_STUD_BTN
			// 
			this->ZALOGUJ_STUD_BTN->Location = System::Drawing::Point(100, 280);
			this->ZALOGUJ_STUD_BTN->Name = L"ZALOGUJ_STUD_BTN";
			this->ZALOGUJ_STUD_BTN->Size = System::Drawing::Size(70, 30);
			this->ZALOGUJ_STUD_BTN->TabIndex = 0;
			this->ZALOGUJ_STUD_BTN->Text = L"Zaloguj";
			this->ZALOGUJ_STUD_BTN->UseVisualStyleBackColor = true;
			this->ZALOGUJ_STUD_BTN->Click += gcnew System::EventHandler(this, &InOp::ZALOGUJ_BTN_Click);
			// 
			// NR_ALB_TXTB
			// 
			this->NR_ALB_TXTB->Location = System::Drawing::Point(73, 239);
			this->NR_ALB_TXTB->Name = L"NR_ALB_TXTB";
			this->NR_ALB_TXTB->Size = System::Drawing::Size(124, 20);
			this->NR_ALB_TXTB->TabIndex = 1;
			// 
			// IMIE_TXTB
			// 
			this->IMIE_TXTB->Location = System::Drawing::Point(297, 161);
			this->IMIE_TXTB->Name = L"IMIE_TXTB";
			this->IMIE_TXTB->Size = System::Drawing::Size(141, 20);
			this->IMIE_TXTB->TabIndex = 2;
			// 
			// IMIE_STUD_TXTB
			// 
			this->IMIE_STUD_TXTB->Location = System::Drawing::Point(74, 161);
			this->IMIE_STUD_TXTB->Name = L"IMIE_STUD_TXTB";
			this->IMIE_STUD_TXTB->Size = System::Drawing::Size(123, 20);
			this->IMIE_STUD_TXTB->TabIndex = 3;
			// 
			// NR_ALB_LBL
			// 
			this->NR_ALB_LBL->AutoSize = true;
			this->NR_ALB_LBL->Location = System::Drawing::Point(70, 223);
			this->NR_ALB_LBL->Name = L"NR_ALB_LBL";
			this->NR_ALB_LBL->Size = System::Drawing::Size(75, 13);
			this->NR_ALB_LBL->TabIndex = 4;
			this->NR_ALB_LBL->Text = L"Numer albumu";
			// 
			// IMIE_STUD_LBL
			// 
			this->IMIE_STUD_LBL->AutoSize = true;
			this->IMIE_STUD_LBL->Location = System::Drawing::Point(71, 143);
			this->IMIE_STUD_LBL->Name = L"IMIE_STUD_LBL";
			this->IMIE_STUD_LBL->Size = System::Drawing::Size(26, 13);
			this->IMIE_STUD_LBL->TabIndex = 5;
			this->IMIE_STUD_LBL->Text = L"Imiê";
			// 
			// STUD_LBL
			// 
			this->STUD_LBL->AutoSize = true;
			this->STUD_LBL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->STUD_LBL->Location = System::Drawing::Point(69, 35);
			this->STUD_LBL->Name = L"STUD_LBL";
			this->STUD_LBL->Size = System::Drawing::Size(73, 20);
			this->STUD_LBL->TabIndex = 6;
			this->STUD_LBL->Text = L"Student";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(295, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Wykladowca";
			// 
			// IMIE_LBL
			// 
			this->IMIE_LBL->AutoSize = true;
			this->IMIE_LBL->Location = System::Drawing::Point(296, 143);
			this->IMIE_LBL->Name = L"IMIE_LBL";
			this->IMIE_LBL->Size = System::Drawing::Size(26, 13);
			this->IMIE_LBL->TabIndex = 8;
			this->IMIE_LBL->Text = L"Imiê";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(297, 200);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 9;
			// 
			// NAZW_TXTB
			// 
			this->NAZW_TXTB->AutoSize = true;
			this->NAZW_TXTB->Location = System::Drawing::Point(296, 184);
			this->NAZW_TXTB->Name = L"NAZW_TXTB";
			this->NAZW_TXTB->Size = System::Drawing::Size(53, 13);
			this->NAZW_TXTB->TabIndex = 10;
			this->NAZW_TXTB->Text = L"Nazwisko";
			// 
			// HASLO_WYKL_TXTB
			// 
			this->HASLO_WYKL_TXTB->Location = System::Drawing::Point(299, 239);
			this->HASLO_WYKL_TXTB->Name = L"HASLO_WYKL_TXTB";
			this->HASLO_WYKL_TXTB->Size = System::Drawing::Size(140, 20);
			this->HASLO_WYKL_TXTB->TabIndex = 11;
			// 
			// HASLO_WYKL_LBL
			// 
			this->HASLO_WYKL_LBL->AutoSize = true;
			this->HASLO_WYKL_LBL->Location = System::Drawing::Point(296, 223);
			this->HASLO_WYKL_LBL->Name = L"HASLO_WYKL_LBL";
			this->HASLO_WYKL_LBL->Size = System::Drawing::Size(34, 13);
			this->HASLO_WYKL_LBL->TabIndex = 12;
			this->HASLO_WYKL_LBL->Text = L"Haslo";
			// 
			// NAZW_STUD_TXTB
			// 
			this->NAZW_STUD_TXTB->Location = System::Drawing::Point(73, 200);
			this->NAZW_STUD_TXTB->Name = L"NAZW_STUD_TXTB";
			this->NAZW_STUD_TXTB->Size = System::Drawing::Size(121, 20);
			this->NAZW_STUD_TXTB->TabIndex = 13;
			// 
			// NAZW_STUD_LBL
			// 
			this->NAZW_STUD_LBL->AutoSize = true;
			this->NAZW_STUD_LBL->Location = System::Drawing::Point(70, 184);
			this->NAZW_STUD_LBL->Name = L"NAZW_STUD_LBL";
			this->NAZW_STUD_LBL->Size = System::Drawing::Size(53, 13);
			this->NAZW_STUD_LBL->TabIndex = 14;
			this->NAZW_STUD_LBL->Text = L"Nazwisko";
			// 
			// ZALOGUJ_WYKL_BTN
			// 
			this->ZALOGUJ_WYKL_BTN->Location = System::Drawing::Point(332, 280);
			this->ZALOGUJ_WYKL_BTN->Name = L"ZALOGUJ_WYKL_BTN";
			this->ZALOGUJ_WYKL_BTN->Size = System::Drawing::Size(70, 30);
			this->ZALOGUJ_WYKL_BTN->TabIndex = 15;
			this->ZALOGUJ_WYKL_BTN->Text = L"Zaloguj";
			this->ZALOGUJ_WYKL_BTN->UseVisualStyleBackColor = true;
			this->ZALOGUJ_WYKL_BTN->Click += gcnew System::EventHandler(this, &InOp::ZALOGUJ_WYKL_BTN_Click);
			// 
			// InOp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(504, 361);
			this->Controls->Add(this->ZALOGUJ_WYKL_BTN);
			this->Controls->Add(this->NAZW_STUD_LBL);
			this->Controls->Add(this->NAZW_STUD_TXTB);
			this->Controls->Add(this->HASLO_WYKL_LBL);
			this->Controls->Add(this->HASLO_WYKL_TXTB);
			this->Controls->Add(this->NAZW_TXTB);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->IMIE_LBL);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->STUD_LBL);
			this->Controls->Add(this->IMIE_STUD_LBL);
			this->Controls->Add(this->NR_ALB_LBL);
			this->Controls->Add(this->IMIE_STUD_TXTB);
			this->Controls->Add(this->IMIE_TXTB);
			this->Controls->Add(this->NR_ALB_TXTB);
			this->Controls->Add(this->ZALOGUJ_STUD_BTN);
			this->Name = L"InOp";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &InOp::InOp_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InOp_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void ZALOGUJ_BTN_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->Hide();
	Ekran_Glowny^ EKR_GL = gcnew Ekran_Glowny();
	EKR_GL->ShowDialog();
	
	PGconn * dbconn;
	//dbconn= PQconnectdb()
	

	//

}
private: System::Void ZALOGUJ_WYKL_BTN_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//
	this->Hide();
	Ekran_Glowny_Wykl^ EKR_GL_Wykl = gcnew Ekran_Glowny_Wykl();
	EKR_GL_Wykl->ShowDialog();
}
};
}
