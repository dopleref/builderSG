//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	gBitmap = new Graphics::TBitmap;
	gBitmap->LoadFromFile("test2.bmp");
	//PaintBox1->Canvas->Draw(0, 0, gBitmap);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormDestroy(TObject *Sender)
{
    gBitmap->Free();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PaintBox1DblClick(TObject *Sender)
{
	PaintBox1->Canvas->Draw(0, 0, gBitmap);
    //PaintBox1->Canvas->Ellipse(85, 10, 160, 85);
}
//---------------------------------------------------------------------------
