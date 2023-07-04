object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Projekt - Baze podataka'
  ClientHeight = 523
  ClientWidth = 444
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object inJmbag: TLabel
    Left = 40
    Top = 32
    Width = 38
    Height = 15
    Caption = 'JMBAG'
  end
  object inIme: TLabel
    Left = 40
    Top = 61
    Width = 20
    Height = 15
    Caption = 'IME'
  end
  object inPrezime: TLabel
    Left = 40
    Top = 95
    Width = 47
    Height = 15
    Caption = 'PREZIME'
  end
  object Label1: TLabel
    Left = 40
    Top = 147
    Width = 67
    Height = 15
    Caption = 'Pretra'#382'ivanje'
  end
  object Label2: TLabel
    Left = 24
    Top = 499
    Width = 125
    Height = 15
    Caption = #169'  by Danijel Kova'#269'evi'#263
  end
  object DBGrid1: TDBGrid
    Left = 24
    Top = 221
    Width = 393
    Height = 265
    Ctl3D = True
    DataSource = DataSource1
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    ParentCtl3D = False
    ParentFont = False
    ReadOnly = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
    Columns = <
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'ID'
        Visible = False
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'JMBAG'
        Width = 66
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'IME'
        Width = 93
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'PREZIME'
        Width = 97
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'DATUM UNOSA'
        Width = 100
        Visible = True
      end>
  end
  object noviUnos: TButton
    Left = 280
    Top = 29
    Width = 105
    Height = 82
    Caption = 'Novi unos'
    TabOrder = 1
    OnClick = noviUnosClick
  end
  object trazi: TButton
    Left = 280
    Top = 143
    Width = 105
    Height = 25
    Caption = 'Tra'#382'i'
    TabOrder = 2
    OnClick = traziClick
  end
  object DBNavigator1: TDBNavigator
    Left = 24
    Top = 190
    Width = 390
    Height = 25
    DataSource = DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbDelete, nbRefresh]
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
  end
  object jmbagEdit: TEdit
    Left = 104
    Top = 29
    Width = 137
    Height = 23
    NumbersOnly = True
    TabOrder = 4
  end
  object imeEdit: TEdit
    Left = 104
    Top = 58
    Width = 137
    Height = 23
    TabOrder = 5
  end
  object prezimeEdit: TEdit
    Left = 104
    Top = 87
    Width = 137
    Height = 23
    TabOrder = 6
  end
  object traziEdit: TEdit
    Left = 136
    Top = 144
    Width = 105
    Height = 23
    TabOrder = 7
  end
  object FDConnection1: TFDConnection
    Params.Strings = (
      'Database=baza1'
      'User_Name=userBaza'
      'Password=pass1'
      'Server=127.0.0.1'
      'DriverID=DriverBaze')
    Connected = True
    Left = 408
    Top = 72
  end
  object TStudenti: TFDTable
    Active = True
    IndexFieldNames = 'id'
    Connection = FDConnection1
    TableName = 'baza1.studenti'
    Left = 432
    Top = 112
  end
  object DataSource1: TDataSource
    DataSet = TStudenti
    Left = 400
    Top = 104
  end
  object FDPhysMySQLDriverLink1: TFDPhysMySQLDriverLink
    DriverID = 'DriverBaze'
    VendorLib = 'C:\Stari_D\RAD_C++\progBaze1\libmysql.dll'
    Left = 424
    Top = 32
  end
  object FDQuery1: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM studenti WHERE ime = "Danijel"')
    Left = 424
    Top = 160
  end
end
