object Form3: TForm3
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  ClientHeight = 383
  ClientWidth = 596
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 185
    Height = 129
    TabOrder = 0
    object Label1: TLabel
      AlignWithMargins = True
      Left = 9
      Top = 0
      Width = 169
      Height = 26
      Caption = #1047#1072#1076#1072#1081#1090#1077' '#1080#1089#1090#1086#1095#1085#1080#1082#1080' '#1090#1077#1087#1083#1072' '#1080'/'#1080#1083#1080' '#1093#1086#1083#1086#1076#1072':'
      WordWrap = True
    end
    object Label2: TLabel
      Left = 24
      Top = 32
      Width = 6
      Height = 13
      Caption = 'x'
    end
    object Label3: TLabel
      Left = 73
      Top = 32
      Width = 16
      Height = 13
      Caption = 'y'
    end
    object Label4: TLabel
      Left = 112
      Top = 32
      Width = 66
      Height = 13
      Caption = #1058#1077#1084#1087#1077#1088#1072#1090#1091#1088#1072
    end
    object Edit1: TEdit
      Left = 16
      Top = 48
      Width = 25
      Height = 21
      TabOrder = 0
      Text = '21'
    end
    object Edit2: TEdit
      Left = 64
      Top = 48
      Width = 25
      Height = 21
      TabOrder = 1
      Text = '21'
    end
    object Edit3: TEdit
      Left = 112
      Top = 48
      Width = 57
      Height = 21
      TabOrder = 2
      Text = '21'
    end
    object Button1: TButton
      Left = 56
      Top = 88
      Width = 75
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      TabOrder = 3
      OnClick = Button1Click
    end
  end
  object Memo1: TMemo
    Left = 0
    Top = 131
    Width = 185
    Height = 238
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssVertical
    TabOrder = 1
  end
end
