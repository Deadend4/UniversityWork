//---------------------------------------------------------------------------

#ifndef KAMTH
#define KAMTH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "Unit2.h"
#include "FormOfChange.h"
#include <Vcl.OleCtnrs.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.WinXCtrls.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XmlTransform.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *Edit1;
	TMemo *Memo1;
	TButton *Button2;
	TPanel *Panel1;
	TEdit *Edit2;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *Edit3;
	TEdit *Edit4;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TLabel *Label7;
	TButton *Button3;
	TEdit *Edit5;
	TLabel *Label8;
	TEdit *Edit6;
	TLabel *Label9;
	TPanel *Panel2;
	TLabel *Label10;
	TEdit *Edit7;
	TLabel *Label11;
	TPanel *Panel3;
	TProgressBar *ProgressBar1;
	TButton *Button4;
	TTimer *Timer1;
	TPanel *Panel4;
	TEdit *Edit8;
	TCheckBox *CheckBox1;
	TEdit *Edit9;
	TCheckBox *CheckBox2;
	TCheckBox *CheckBox3;
	TEdit *Edit10;
	TEdit *Edit11;
	TCheckBox *CheckBox4;
	TPanel *Panel5;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TEdit *Edit12;
	TEdit *Edit13;
	TEdit *Edit14;
	TButton *Button5;
	TLabel *Label16;
	TEdit *Edit15;
	TPanel *Panel6;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TPanel *Panel7;
	TLabel *Label17;
	TLabel *Label18;
	TLabel *Label19;
	TEdit *Edit16;
	TEdit *Edit17;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall CheckBox4Click(TObject *Sender);
	void __fastcall CheckBox3Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall RadioButton3Click(TObject *Sender);
	void __fastcall RadioButton4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
