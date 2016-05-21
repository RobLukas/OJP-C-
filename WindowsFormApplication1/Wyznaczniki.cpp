#include "stdafx.h"
#include "Wyznaczniki.h"

using namespace std;

void WindowsFormApplication1::Wyznaczniki::ResetW()
{
	for (int i = 0; i < WYZNACZNIK; i++)
	{
		if (ar[i]->Text == "")
		{
			ar[i]->Text = "0";
		}
	}
}

void WindowsFormApplication1::Wyznaczniki::RadioCheck(System::Windows::Forms::Label^ label) {

	if (radioButton1->Checked == false && radioButton2->Checked == false && radioButton3->Checked == false && radioButton4->Checked == false)
	{
		label->Text = "Wybierz dzia³anie";
	}
}


void WindowsFormApplication1::Wyznaczniki::HideW(System::Windows::Forms::Control^ control) {
	control->Visible = false;
	if (control->HasChildren)
	{
		IEnumerator^ MyEnum = control->Controls->GetEnumerator();
		while (MyEnum->MoveNext())
		{
			Control^ childControl = safe_cast<Control^>(MyEnum->Current);
			HideW(childControl);
		}
	}
}

double WindowsFormApplication1::Wyznaczniki::ShortW(System::Windows::Forms::Control^ W) {
		Double::Parse(W->Text);
}

void WindowsFormApplication1::Wyznaczniki::Wyz2(System::Windows::Forms::Label^ Label) {
	Label->Text = (Double::Parse(W1->Text) * Double::Parse(W2_2->Text) - (Double::Parse(W2_1->Text) * Double::Parse(W2_3->Text))).ToString();
}

void WindowsFormApplication1::Wyznaczniki::Wyz3(System::Windows::Forms::Label^ Label) {
	Label->Text = ((Double::Parse(W1->Text) * (Double::Parse(W2_2->Text)) * (Double::Parse(W3_3->Text))) + (Double::Parse(W2_3->Text) * (Double::Parse(W3_4->Text)) * (Double::Parse(W3_1->Text))) + (Double::Parse(W3_5->Text) * (Double::Parse(W2_1->Text)) * (Double::Parse(W3_2->Text))) - (Double::Parse(W3_5->Text) * (Double::Parse(W2_2->Text)) * (Double::Parse(W3_1->Text))) - (Double::Parse(W1->Text) * (Double::Parse(W3_4->Text)) * (Double::Parse(W3_2->Text))) - (Double::Parse(W2_3->Text) * (Double::Parse(W2_1->Text)) * (Double::Parse(W3_3->Text)))).ToString();
}

void WindowsFormApplication1::Wyznaczniki::Wyz4(System::Windows::Forms::Label^ Label) {
	Label->Text = ((Double::Parse(W1->Text)*(Double::Parse(W2_2->Text)*(Double::Parse(W3_3->Text)*(Double::Parse(W4_4->Text))))) + (Double::Parse(W1->Text)*(Double::Parse(W3_4->Text)*(Double::Parse(W4_5->Text)*(Double::Parse(W4_2->Text))))) + 
		(Double::Parse(W1->Text)*(Double::Parse(W4_6->Text)*(Double::Parse(W3_2->Text)*(Double::Parse(W4_3->Text))))) +	(Double::Parse(W2_3->Text)*(Double::Parse(W2_1->Text)*(Double::Parse(W4_5->Text)*(Double::Parse(W4_3->Text))))) +
		(Double::Parse(W2_3->Text)*(Double::Parse(W3_4->Text)*(Double::Parse(W3_1->Text)*(Double::Parse(W4_4->Text))))) + (Double::Parse(W2_3->Text)*(Double::Parse(W4_6->Text)*(Double::Parse(W3_3->Text)*(Double::Parse(W4_1->Text))))) +
		(Double::Parse(W3_5->Text)*(Double::Parse(W2_1->Text)*(Double::Parse(W3_2->Text)*(Double::Parse(W4_4->Text))))) + (Double::Parse(W3_5->Text)*(Double::Parse(W2_2->Text)*(Double::Parse(W4_5->Text)*(Double::Parse(W4_1->Text))))) +
		(Double::Parse(W3_5->Text)*(Double::Parse(W4_6->Text)*(Double::Parse(W3_1->Text)*(Double::Parse(W4_2->Text))))) + (Double::Parse(W4_7->Text)*(Double::Parse(W2_1->Text)*(Double::Parse(W3_3->Text)*(Double::Parse(W4_2->Text))))) + 
		(Double::Parse(W4_7->Text)*(Double::Parse(W2_2->Text)*(Double::Parse(W3_1->Text)*(Double::Parse(W4_3->Text))))) + (Double::Parse(W4_7->Text)*(Double::Parse(W3_4->Text)*(Double::Parse(W3_2->Text)*(Double::Parse(W4_1->Text))))) - 
		(Double::Parse(W1->Text)*(Double::Parse(W2_2->Text)*(Double::Parse(W4_5->Text)*(Double::Parse(W4_3->Text))))) - (Double::Parse(W1->Text)*(Double::Parse(W3_4->Text)*(Double::Parse(W3_2->Text)*(Double::Parse(W4_4->Text))))) - 
		(Double::Parse(W1->Text)*(Double::Parse(W4_6->Text)*(Double::Parse(W3_3->Text)*(Double::Parse(W4_2->Text))))) -	(Double::Parse(W2_3->Text)*(Double::Parse(W2_1->Text)*(Double::Parse(W3_3->Text)*(Double::Parse(W4_4->Text))))) - 
		(Double::Parse(W2_3->Text)*(Double::Parse(W3_4->Text)*(Double::Parse(W4_5->Text)*(Double::Parse(W4_1->Text))))) - (Double::Parse(W2_3->Text)*(Double::Parse(W4_6->Text)*(Double::Parse(W3_1->Text)*(Double::Parse(W4_3->Text))))) -
		(Double::Parse(W3_5->Text)*(Double::Parse(W2_1->Text)*(Double::Parse(W4_5->Text)*(Double::Parse(W4_2->Text))))) - (Double::Parse(W3_5->Text)*(Double::Parse(W2_2->Text)*(Double::Parse(W3_1->Text)*(Double::Parse(W4_4->Text))))) -
		(Double::Parse(W3_5->Text)*(Double::Parse(W4_6->Text)*(Double::Parse(W3_2->Text)*(Double::Parse(W4_1->Text))))) - (Double::Parse(W4_7->Text)*(Double::Parse(W2_1->Text)*(Double::Parse(W3_2->Text)*(Double::Parse(W4_3->Text))))) -
		(Double::Parse(W4_7->Text)*(Double::Parse(W2_2->Text)*(Double::Parse(W3_3->Text)*(Double::Parse(W4_1->Text))))) - (Double::Parse(W4_7->Text)*(Double::Parse(W3_4->Text)*(Double::Parse(W3_1->Text)*(Double::Parse(W4_2->Text)))))).ToString();
}