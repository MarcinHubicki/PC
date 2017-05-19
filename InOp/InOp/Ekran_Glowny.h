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
	private: System::Windows::Forms::Button^  EKR_GL_EXIT;
	private: System::Windows::Forms::Button^  DOST_TEST_BTN;
	private: System::Windows::Forms::Button^  HIST_STUD_BTN;
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
			this->EKR_GL_EXIT = (gcnew System::Windows::Forms::Button());
			this->DOST_TEST_BTN = (gcnew System::Windows::Forms::Button());
			this->HIST_STUD_BTN = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// EKR_GL_EXIT
			// 
			this->EKR_GL_EXIT->Location = System::Drawing::Point(592, 319);
			this->EKR_GL_EXIT->Name = L"EKR_GL_EXIT";
			this->EKR_GL_EXIT->Size = System::Drawing::Size(80, 30);
			this->EKR_GL_EXIT->TabIndex = 0;
			this->EKR_GL_EXIT->Text = L"EXIT";
			this->EKR_GL_EXIT->UseVisualStyleBackColor = true;
			this->EKR_GL_EXIT->Click += gcnew System::EventHandler(this, &Ekran_Glowny::EKR_GL_EXIT_Click);
			// 
			// DOST_TEST_BTN
			// 
			this->DOST_TEST_BTN->Location = System::Drawing::Point(20, 90);
			this->DOST_TEST_BTN->Name = L"DOST_TEST_BTN";
			this->DOST_TEST_BTN->Size = System::Drawing::Size(100, 30);
			this->DOST_TEST_BTN->TabIndex = 1;
			this->DOST_TEST_BTN->Text = L"Dostepne Testy";
			this->DOST_TEST_BTN->UseVisualStyleBackColor = true;
			// 
			// HIST_STUD_BTN
			// 
			this->HIST_STUD_BTN->Location = System::Drawing::Point(20, 170);
			this->HIST_STUD_BTN->Name = L"HIST_STUD_BTN";
			this->HIST_STUD_BTN->Size = System::Drawing::Size(100, 30);
			this->HIST_STUD_BTN->TabIndex = 2;
			this->HIST_STUD_BTN->Text = L"Historia";
			this->HIST_STUD_BTN->UseVisualStyleBackColor = true;
			// 
			// Ekran_Glowny
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(684, 361);
			this->Controls->Add(this->HIST_STUD_BTN);
			this->Controls->Add(this->DOST_TEST_BTN);
			this->Controls->Add(this->EKR_GL_EXIT);
			this->Name = L"Ekran_Glowny";
			this->Text = L"Aplikacja do testow";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EKR_GL_EXIT_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//
		Application::Exit();
	}
	};
}
