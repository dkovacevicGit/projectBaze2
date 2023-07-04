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
}


// PROGRAMSKI KOD TIPKE ZA NOVI UNOS U BAZU
void __fastcall TForm1::noviUnosClick(TObject *Sender)
{
	if(jmbagEdit->Text.IsEmpty() || imeEdit->Text.IsEmpty() || prezimeEdit->Text.IsEmpty()) {
		ShowMessage("Greška!\n\nSva polja moraju biti popunjena\n");
		}
	else{
		TStudenti->Insert();
		TStudenti->FieldByName("JMBAG")->AsString= jmbagEdit->Text;
		TStudenti->FieldByName("IME")->AsString= imeEdit->Text;
		TStudenti->FieldByName("PREZIME")->AsString= prezimeEdit->Text;
		TStudenti->Post();
		jmbagEdit->Text="";
		imeEdit->Text="";
		prezimeEdit->Text="";
	}
}

//PROGRAMSKI KOD ZA SORTIRANJE
void __fastcall TForm1::sortImeClick(TObject *Sender)
{
	FDQuery1->Close();  // Zatvaranje prethodnog upita (ako je otvoren)
	FDQuery1->Open();
	FDQuery1->SQL->Text = "SELECT * FROM studenti ORDER BY ime ASC";
	FDQuery1->Open();
}


//PROGRAMSKI KOD ZA PRETRAŽIVANJE BAZE
void __fastcall TForm1::traziClick(TObject *Sender)
{
	FDQuery1->Close();  // Zatvaranje prethodnog upita (ako je otvoren)

    // Postavljanje SQL upita s uvjetima iz TEdit1 i TEdit2
	FDQuery1->SQL->Text = "SELECT * FROM studenti WHERE jmbag = :uvjet1 OR ime = :uvjet1 OR prezime = :uvjet1";

    // Vezivanje vrijednosti parametara iz TEdit1 i TEdit2
	FDQuery1->ParamByName("uvjet1")->Value = traziEdit->Text;

	// Izvršavanje upita
	FDQuery1->Open();

    // Prikaz rezultata pretrage u Message Box-u
	if (!FDQuery1->IsEmpty()) {
        String rezultati = "";
		while (!FDQuery1->Eof) {
            // Dohvaćanje vrijednosti iz rezultata
			String stupac1 = FDQuery1->FieldByName("jmbag")->AsString;
			String stupac2 = FDQuery1->FieldByName("ime")->AsString;
			String stupac3 = FDQuery1->FieldByName("prezime")->AsString;
			String stupac4 = FDQuery1->FieldByName("datum unosa")->AsString;

            // Dodavanje rezultata u string
			rezultati +=stupac1 + "\n" + stupac2 + " " + stupac3 + "\n" + stupac4 + "\n\n";

			FDQuery1->Next();
		}
		ShowMessage("Rezultati pretrage:\n\n" + rezultati);
    }
    else {
        ShowMessage("Nema rezultata pretrage.");
	}
    traziEdit->Text="";
}
//---------------------------------------------------------------------------
