//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormOfChange.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
extern double T0[50][50];
extern int iii, jjj;
bool f101 = false;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
	iii = StrToFloat(Form3->Edit1->Text);
	jjj = StrToFloat(Form3->Edit2->Text);
	T0[iii][jjj] = StrToFloat(Form3->Edit3->Text);
	Form1->Memo1->Lines->Append("�� �������� �������� � ����� ("+FloatToStr(iii)+", "+FloatToStr(jjj)+") c ������������ ������ "+FloatToStr(T0[iii][jjj]) + ".");
	f101 = true;
	Memo1->Lines->Append("�� �������� �������� � ����� ("+FloatToStr(iii)+", "+FloatToStr(jjj)+") c ������������ ������ "+FloatToStr(T0[iii][jjj]) + ".");
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormCreate(TObject *Sender)
{
    Form3->Memo1->Clear();
}
//---------------------------------------------------------------------------

