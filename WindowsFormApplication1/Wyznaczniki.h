#pragma once
#include "stdafx.h"
#include "Kalkulator.h"

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Wyznaczniki
	/// </summary>

	public ref class Wyznaczniki : public System::Windows::Forms::Form
	{
	public:
		Wyznaczniki(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Wyznaczniki(System::Windows::Forms::Form ^ menuprog)
		{
			otherform = menuprog;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Wyznaczniki()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  Return;
	private: System::Windows::Forms::Form^ otherform;

	private:
		System::ComponentModel::Container ^components;
		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Wyznaczniki::typeid));
			this->Return = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Return
			// 
			this->Return->BackColor = System::Drawing::SystemColors::Control;
			this->Return->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Return->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Return->Location = System::Drawing::Point(1, 0);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(33, 24);
			this->Return->TabIndex = 7;
			this->Return->Text = L"<--";
			this->Return->UseVisualStyleBackColor = false;
			this->Return->Click += gcnew System::EventHandler(this, &Wyznaczniki::button2_Click);
			// 
			// Wyznaczniki
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->ControlBox = false;
			this->Controls->Add(this->Return);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Wyznaczniki";
			this->Text = L"Wyznaczniki";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		otherform->Show();
	}
	};
}
