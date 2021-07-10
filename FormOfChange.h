//---------------------------------------------------------------------------

#ifndef FormOfChangeH
#define FormOfChangeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "KAMT.h"
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TLabel *Label1;
	TPanel *Panel1;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TButton *Button1;
	TMemo *Memo1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
