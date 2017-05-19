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
	private: System::Windows::Forms::Button^  Exit_WYKL_BTN;
	private: System::Windows::Forms::Button^  NOWY_TEST_BTN;
	private: System::Windows::Forms::Button^  HIST_WYKL_BTN;
	private: System::Windows::Forms::Button^  RAPORTY_BTN;
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
			this->Exit_WYKL_BTN = (gcnew System::Windows::Forms::Button());
			this->NOWY_TEST_BTN = (gcnew System::Windows::Forms::Button());
			this->HIST_WYKL_BTN = (gcnew System::Windows::Forms::Button());
			this->RAPORTY_BTN = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Exit_WYKL_BTN
			// 
			this->Exit_WYKL_BTN->Location = System::Drawing::Point(606, 318);
			this->Exit_WYKL_BTN->Name = L"Exit_WYKL_BTN";
			this->Exit_WYKL_BTN->Size = System::Drawing::Size(66, 31);
			this->Exit_WYKL_BTN->TabIndex = 0;
			this->Exit_WYKL_BTN->Text = L"Exit";
			this->Exit_WYKL_BTN->UseVisualStyleBackColor = true;
			this->Exit_WYKL_BTN->Click += gcnew System::EventHandler(this, &Ekran_Glowny_Wykl::EXIT_WYKL_BTN_Click);
			// 
			// NOWY_TEST_BTN
			// 
			this->NOWY_TEST_BTN->Location = System::Drawing::Point(20, 90);
			this->NOWY_TEST_BTN->Name = L"NOWY_TEST_BTN";
			this->NOWY_TEST_BTN->Size = System::Drawing::Size(100, 30);
			this->NOWY_TEST_BTN->TabIndex = 1;
			this->NOWY_TEST_BTN->Text = L"Nowy Test";
			this->NOWY_TEST_BTN->UseVisualStyleBackColor = true;
			// 
			// HIST_WYKL_BTN
			// 
			this->HIST_WYKL_BTN->Location = System::Drawing::Point(20, 170);
			this->HIST_WYKL_BTN->Name = L"HIST_WYKL_BTN";
			this->HIST_WYKL_BTN->Size = System::Drawing::Size(96, 29);
			this->HIST_WYKL_BTN->TabIndex = 2;
			this->HIST_WYKL_BTN->Text = L"Historia";
			this->HIST_WYKL_BTN->UseVisualStyleBackColor = true;
			// 
			// RAPORTY_BTN
			// 
			this->RAPORTY_BTN->Location = System::Drawing::Point(20, 250);
			this->RAPORTY_BTN->Name = L"RAPORTY_BTN";
			this->RAPORTY_BTN->Size = System::Drawing::Size(95, 27);
			this->RAPORTY_BTN->TabIndex = 3;
			this->RAPORTY_BTN->Text = L"Raporty";
			this->RAPORTY_BTN->UseVisualStyleBackColor = true;
			// 
			// Ekran_Glowny_Wykl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(684, 361);
			this->Controls->Add(this->RAPORTY_BTN);
			this->Controls->Add(this->HIST_WYKL_BTN);
			this->Controls->Add(this->NOWY_TEST_BTN);
			this->Controls->Add(this->Exit_WYKL_BTN);
			this->Name = L"Ekran_Glowny_Wykl";
			this->Text = L"Aplikacja do testow";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EXIT_WYKL_BTN_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//
		Application::Exit();
	}
	};
}
