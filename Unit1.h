//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <FireDAC.Phys.MySQL.hpp>
#include <FireDAC.Phys.MySQLDef.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TFDConnection *FDConnection1;
	TFDTable *TStudenti;
	TDataSource *DataSource1;
	TDBGrid *DBGrid1;
	TFDPhysMySQLDriverLink *FDPhysMySQLDriverLink1;
	TButton *noviUnos;
	TButton *trazi;
	TDBNavigator *DBNavigator1;
	TFDQuery *FDQuery1;
	TLabel *inJmbag;
	TLabel *inIme;
	TLabel *inPrezime;
	TEdit *jmbagEdit;
	TEdit *imeEdit;
	TEdit *prezimeEdit;
	TEdit *traziEdit;
	TLabel *Label1;
	TLabel *Label2;
	void __fastcall noviUnosClick(TObject *Sender);
	void __fastcall sortImeClick(TObject *Sender);
	void __fastcall traziClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
