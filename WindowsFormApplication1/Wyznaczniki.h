#pragma once
#include "stdafx.h"
#include "Kalkulator.h"

namespace WindowsFormApplication1 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	
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
		//void HideW(System::Windows::Forms::TextBox^);
		void Zerowanie(System::Windows::Forms::TextBox^, System::Windows::Forms::TextBox^, System::Windows::Forms::TextBox^);
		virtual void RadioCheck(System::Windows::Forms::Label^ label);
		void Zerowanie(System::Windows::Forms::TextBox^);


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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  W1;
	private: System::Windows::Forms::TextBox^  W2_3;
	private: System::Windows::Forms::TextBox^  W3_5;
	private: System::Windows::Forms::TextBox^  W4_7;
	private: System::Windows::Forms::TextBox^  W2_1;
	private: System::Windows::Forms::TextBox^  W2_2;
	private: System::Windows::Forms::TextBox^  W3_4;
	private: System::Windows::Forms::TextBox^  W4_6;
	private: System::Windows::Forms::TextBox^  W3_1;
	private: System::Windows::Forms::TextBox^  W3_2;
	private: System::Windows::Forms::TextBox^  W3_3;
	private: System::Windows::Forms::TextBox^  W4_5;
	private: System::Windows::Forms::TextBox^  W4_2;
	private: System::Windows::Forms::TextBox^  W4_3;
	private: System::Windows::Forms::TextBox^  W4_1;
	private: System::Windows::Forms::TextBox^  W4_4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  Wynik;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->W1 = (gcnew System::Windows::Forms::TextBox());
			this->W2_3 = (gcnew System::Windows::Forms::TextBox());
			this->W3_5 = (gcnew System::Windows::Forms::TextBox());
			this->W4_7 = (gcnew System::Windows::Forms::TextBox());
			this->W2_1 = (gcnew System::Windows::Forms::TextBox());
			this->W2_2 = (gcnew System::Windows::Forms::TextBox());
			this->W3_4 = (gcnew System::Windows::Forms::TextBox());
			this->W4_6 = (gcnew System::Windows::Forms::TextBox());
			this->W3_1 = (gcnew System::Windows::Forms::TextBox());
			this->W3_2 = (gcnew System::Windows::Forms::TextBox());
			this->W3_3 = (gcnew System::Windows::Forms::TextBox());
			this->W4_5 = (gcnew System::Windows::Forms::TextBox());
			this->W4_2 = (gcnew System::Windows::Forms::TextBox());
			this->W4_3 = (gcnew System::Windows::Forms::TextBox());
			this->W4_1 = (gcnew System::Windows::Forms::TextBox());
			this->W4_4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Wynik = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Return
			// 
			this->Return->BackColor = System::Drawing::SystemColors::Control;
			this->Return->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Return->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Return->Location = System::Drawing::Point(0, 0);
			this->Return->Margin = System::Windows::Forms::Padding(4);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(44, 30);
			this->Return->TabIndex = 7;
			this->Return->Text = L"<--";
			this->Return->UseVisualStyleBackColor = false;
			this->Return->Click += gcnew System::EventHandler(this, &Wyznaczniki::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(153, 250);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Wynik:";
			// 
			// W1
			// 
			this->W1->Location = System::Drawing::Point(157, 65);
			this->W1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W1->Name = L"W1";
			this->W1->Size = System::Drawing::Size(65, 22);
			this->W1->TabIndex = 1;
			this->W1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W2_3
			// 
			this->W2_3->Location = System::Drawing::Point(229, 65);
			this->W2_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W2_3->Name = L"W2_3";
			this->W2_3->Size = System::Drawing::Size(65, 22);
			this->W2_3->TabIndex = 4;
			this->W2_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W3_5
			// 
			this->W3_5->Location = System::Drawing::Point(301, 65);
			this->W3_5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W3_5->Name = L"W3_5";
			this->W3_5->Size = System::Drawing::Size(65, 22);
			this->W3_5->TabIndex = 9;
			this->W3_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W4_7
			// 
			this->W4_7->Location = System::Drawing::Point(373, 65);
			this->W4_7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W4_7->Name = L"W4_7";
			this->W4_7->Size = System::Drawing::Size(65, 22);
			this->W4_7->TabIndex = 7;
			this->W4_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W2_1
			// 
			this->W2_1->Location = System::Drawing::Point(157, 100);
			this->W2_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W2_1->Name = L"W2_1";
			this->W2_1->Size = System::Drawing::Size(65, 22);
			this->W2_1->TabIndex = 2;
			this->W2_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W2_2
			// 
			this->W2_2->Location = System::Drawing::Point(229, 100);
			this->W2_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W2_2->Name = L"W2_2";
			this->W2_2->Size = System::Drawing::Size(65, 22);
			this->W2_2->TabIndex = 3;
			this->W2_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W3_4
			// 
			this->W3_4->Location = System::Drawing::Point(301, 100);
			this->W3_4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W3_4->Name = L"W3_4";
			this->W3_4->Size = System::Drawing::Size(65, 22);
			this->W3_4->TabIndex = 8;
			this->W3_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W4_6
			// 
			this->W4_6->Location = System::Drawing::Point(373, 100);
			this->W4_6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W4_6->Name = L"W4_6";
			this->W4_6->Size = System::Drawing::Size(65, 22);
			this->W4_6->TabIndex = 15;
			this->W4_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W3_1
			// 
			this->W3_1->Location = System::Drawing::Point(157, 133);
			this->W3_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W3_1->Name = L"W3_1";
			this->W3_1->Size = System::Drawing::Size(65, 22);
			this->W3_1->TabIndex = 5;
			this->W3_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W3_2
			// 
			this->W3_2->Location = System::Drawing::Point(229, 133);
			this->W3_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W3_2->Name = L"W3_2";
			this->W3_2->Size = System::Drawing::Size(65, 22);
			this->W3_2->TabIndex = 6;
			this->W3_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W3_3
			// 
			this->W3_3->Location = System::Drawing::Point(301, 133);
			this->W3_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W3_3->Name = L"W3_3";
			this->W3_3->Size = System::Drawing::Size(65, 22);
			this->W3_3->TabIndex = 7;
			this->W3_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W4_5
			// 
			this->W4_5->Location = System::Drawing::Point(373, 133);
			this->W4_5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W4_5->Name = L"W4_5";
			this->W4_5->Size = System::Drawing::Size(65, 22);
			this->W4_5->TabIndex = 14;
			this->W4_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W4_2
			// 
			this->W4_2->Location = System::Drawing::Point(229, 167);
			this->W4_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W4_2->Name = L"W4_2";
			this->W4_2->Size = System::Drawing::Size(65, 22);
			this->W4_2->TabIndex = 11;
			this->W4_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W4_3
			// 
			this->W4_3->Location = System::Drawing::Point(301, 167);
			this->W4_3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W4_3->Name = L"W4_3";
			this->W4_3->Size = System::Drawing::Size(65, 22);
			this->W4_3->TabIndex = 12;
			this->W4_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W4_1
			// 
			this->W4_1->Location = System::Drawing::Point(157, 167);
			this->W4_1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W4_1->Name = L"W4_1";
			this->W4_1->Size = System::Drawing::Size(65, 22);
			this->W4_1->TabIndex = 10;
			this->W4_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W4_4
			// 
			this->W4_4->Location = System::Drawing::Point(373, 167);
			this->W4_4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->W4_4->Name = L"W4_4";
			this->W4_4->Size = System::Drawing::Size(65, 22);
			this->W4_4->TabIndex = 13;
			this->W4_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(16, 65);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(120, 148);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dzialania:";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(8, 118);
			this->radioButton4->Margin = System::Windows::Forms::Padding(4);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(87, 21);
			this->radioButton4->TabIndex = 30;
			this->radioButton4->Text = L"4 stopnia";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Wyznaczniki::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(8, 90);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(87, 21);
			this->radioButton3->TabIndex = 29;
			this->radioButton3->Text = L"3 stopnia";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Wyznaczniki::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(8, 62);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(87, 21);
			this->radioButton2->TabIndex = 28;
			this->radioButton2->Text = L"2 stopnia";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Wyznaczniki::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(8, 33);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(87, 21);
			this->radioButton1->TabIndex = 27;
			this->radioButton1->Text = L"1 stopnia";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Wyznaczniki::radioButton1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(415, 231);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 53);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Policz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Wyznaczniki::button1_Click_1);
			// 
			// Wynik
			// 
			this->Wynik->AutoSize = true;
			this->Wynik->Location = System::Drawing::Point(213, 250);
			this->Wynik->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Wynik->Name = L"Wynik";
			this->Wynik->Size = System::Drawing::Size(0, 17);
			this->Wynik->TabIndex = 0;
			// 
			// Wyznaczniki
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 311);
			this->ControlBox = false;
			this->Controls->Add(this->Wynik);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->W4_4);
			this->Controls->Add(this->W4_1);
			this->Controls->Add(this->W4_3);
			this->Controls->Add(this->W4_2);
			this->Controls->Add(this->W4_5);
			this->Controls->Add(this->W3_3);
			this->Controls->Add(this->W3_2);
			this->Controls->Add(this->W3_1);
			this->Controls->Add(this->W4_6);
			this->Controls->Add(this->W3_4);
			this->Controls->Add(this->W2_2);
			this->Controls->Add(this->W2_1);
			this->Controls->Add(this->W4_7);
			this->Controls->Add(this->W3_5);
			this->Controls->Add(this->W2_3);
			this->Controls->Add(this->W1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Return);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Wyznaczniki";
			this->Text = L"Wyznaczniki";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		otherform->Show();
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		W2_1->Visible = false;
		W2_2->Visible = false;
		W2_3->Visible = false;
		W3_1->Visible = false;
		W3_2->Visible = false;
		W3_3->Visible = false;
		W3_4->Visible = false;
		W3_5->Visible = false;
		W4_1->Visible = false;
		W4_2->Visible = false;
		W4_3->Visible = false;
		W4_4->Visible = false;
		W4_5->Visible = false;
		W4_6->Visible = false;
		W4_7->Visible = false;

		W1->Text = "";
		W2_1->Text = "";
		W2_2->Text = "";
		W2_3->Text = "";
		W3_1->Text = "";
		W3_2->Text = "";
		W3_3->Text = "";
		W3_4->Text = "";
		W3_5->Text = "";
		W4_1->Text = "";
		W4_2->Text = "";
		W4_3->Text = "";
		W4_4->Text = "";
		W4_5->Text = "";
		W4_6->Text = "";
		W4_7->Text = "";
	}

	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		W2_1->Visible = true;
		W2_2->Visible = true;
		W2_3->Visible = true;
		W3_1->Visible = false;
		W3_2->Visible = false;
		W3_3->Visible = false;
		W3_4->Visible = false;
		W3_5->Visible = false;
		W4_1->Visible = false;
		W4_2->Visible = false;
		W4_3->Visible = false;
		W4_4->Visible = false;
		W4_5->Visible = false;
		W4_6->Visible = false;
		W4_7->Visible = false;

		W1->Text = "";
		W2_1->Text = "";
		W2_2->Text = "";
		W2_3->Text = "";
		W3_1->Text = "";
		W3_2->Text = "";
		W3_3->Text = "";
		W3_4->Text = "";
		W3_5->Text = "";
		W4_1->Text = "";
		W4_2->Text = "";
		W4_3->Text = "";
		W4_4->Text = "";
		W4_5->Text = "";
		W4_6->Text = "";
		W4_7->Text = "";
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		W2_1->Visible = true;
		W2_2->Visible = true;
		W2_3->Visible = true;
		W3_1->Visible = true;
		W3_2->Visible = true;
		W3_3->Visible = true;
		W3_4->Visible = true;
		W3_5->Visible = true;
		W4_1->Visible = false;
		W4_2->Visible = false;
		W4_3->Visible = false;
		W4_4->Visible = false;
		W4_5->Visible = false;
		W4_6->Visible = false;
		W4_7->Visible = false;

		W1->Text = "";
		W2_1->Text = "";
		W2_2->Text = "";
		W2_3->Text = "";
		W3_1->Text = "";
		W3_2->Text = "";
		W3_3->Text = "";
		W3_4->Text = "";
		W3_5->Text = "";
		W4_1->Text = "";
		W4_2->Text = "";
		W4_3->Text = "";
		W4_4->Text = "";
		W4_5->Text = "";
		W4_6->Text = "";
		W4_7->Text = "";
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		W2_1->Visible = true;
		W2_2->Visible = true;
		W2_3->Visible = true;
		W3_1->Visible = true;
		W3_2->Visible = true;
		W3_3->Visible = true;
		W3_4->Visible = true;
		W3_5->Visible = true;
		W4_1->Visible = true;
		W4_2->Visible = true;
		W4_3->Visible = true;
		W4_4->Visible = true;
		W4_5->Visible = true;
		W4_6->Visible = true;
		W4_7->Visible = true;

		W1->Text = "";
		W2_1->Text = "";
		W2_2->Text = "";
		W2_3->Text = "";
		W3_1->Text = "";
		W3_2->Text = "";
		W3_3->Text = "";
		W3_4->Text = "";
		W3_5->Text = "";
		W4_1->Text = "";
		W4_2->Text = "";
		W4_3->Text = "";
		W4_4->Text = "";
		W4_5->Text = "";
		W4_6->Text = "";
		W4_7->Text = "";
	}

	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton1->Checked)
		{
			Zerowanie(W1);
			try
			{
				Wynik->Text = (Double::Parse(W1->Text)).ToString();
			}
			catch (Exception ^)
			{
				Wynik->Text = "B��d";
			}
		}
		else if (radioButton2->Checked)
		{
			Zerowanie(W1);
			Zerowanie(W2_1, W2_2, W2_3);
			try
			{
				Wynik->Text = ((Double::Parse(W1->Text) * (Double::Parse(W2_2->Text))) - (Double::Parse(W2_1->Text) * (Double::Parse(W2_3->Text)))).ToString();
			}
			catch (Exception ^)
			{
				Wynik->Text = "B��d";
			}
		}
		else if (radioButton3->Checked)
		{
			Zerowanie(W1, W2_1, W2_2);
			Zerowanie(W2_3, W3_1, W3_2);
			Zerowanie(W3_3, W3_4, W3_5);
			try
			{
				Wynik->Text = ((Double::Parse(W1->Text) * (Double::Parse(W2_2->Text)) * (Double::Parse(W3_3->Text))) + (Double::Parse(W2_3->Text) * (Double::Parse(W3_4->Text)) * (Double::Parse(W3_1->Text))) + (Double::Parse(W3_5->Text) * (Double::Parse(W2_1->Text)) * (Double::Parse(W3_2->Text))) - (Double::Parse(W3_5->Text) * (Double::Parse(W2_2->Text)) * (Double::Parse(W3_1->Text))) - (Double::Parse(W1->Text) * (Double::Parse(W3_4->Text)) * (Double::Parse(W3_2->Text))) - (Double::Parse(W2_3->Text) * (Double::Parse(W2_1->Text)) * (Double::Parse(W3_3->Text)))).ToString();
			}
			catch (Exception ^)
			{
				Wynik->Text = "B��d";
			}
		}
		else if (radioButton4->Checked)
		{
			Zerowanie(W1, W2_1, W2_2);
			Zerowanie(W2_3, W3_1, W3_2);
			Zerowanie(W3_3, W3_4, W3_5);
			Zerowanie(W4_1, W4_2, W4_3);
			Zerowanie(W4_4, W4_5, W4_6);
			Zerowanie(W4_7);
			try
			{
				//Wynik->Text = 
			}
			catch (Exception ^)
			{
				Wynik->Text = "B��d";
			}
		}
		RadioCheck(Wynik);
	}
	};
}