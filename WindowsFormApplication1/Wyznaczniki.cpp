#include "stdafx.h"
#include "Wyznaczniki.h"

//oid HideW(System::Windows::Forms::TextBox^ W) {

//}

void WindowsFormApplication1::Wyznaczniki::Zerowanie(System::Windows::Forms::TextBox^ W, System::Windows::Forms::TextBox^ W1, System::Windows::Forms::TextBox^ W2)
{
	if (W->Text == "")
	{
		W->Text = "0";
	}
	if (W1->Text == "")
	{
		W1->Text = "0";
	}
	if (W2->Text == "")
	{
		W2->Text = "0";
	}
}

void WindowsFormApplication1::Wyznaczniki::Zerowanie(System::Windows::Forms::TextBox^ W)
{
	if (W->Text == "")
	{
		W->Text = "0";
	}
}

void WindowsFormApplication1::Wyznaczniki::RadioCheck(System::Windows::Forms::Label^ label) {

	if (radioButton1->Checked == false && radioButton2->Checked == false && radioButton3->Checked == false && radioButton4->Checked == false)
	{
		label->Text = "Wybierz dzia³anie";
	}
}
