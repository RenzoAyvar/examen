//---------------------------------------------------------------------
#include <iostream>
#include <vcl.h>
#pragma hdrstop

#include "Receta.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
ShowMessage("Se guardo");
}
//---------------------------------------------------------------------------





