object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1050#1083#1077#1090#1086#1095#1085#1086'-'#1072#1074#1090#1086#1084#1072#1090#1085#1086#1077' '#1084#1086#1076#1077#1083#1080#1088#1086#1074#1072#1085#1080#1077' '#1090#1077#1087#1083#1086#1087#1088#1086#1074#1086#1076#1085#1086#1089#1090#1080
  ClientHeight = 590
  ClientWidth = 768
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 3
    Top = 8
    Width = 289
    Height = 345
    BevelInner = bvLowered
    Ctl3D = False
    ParentBackground = False
    ParentCtl3D = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    object Label1: TLabel
      Left = 9
      Top = 5
      Width = 256
      Height = 26
      AutoSize = False
      Caption = #1047#1072#1076#1072#1081#1090#1077' '#1087#1088#1086#1084#1077#1078#1091#1090#1086#1082' '#1074#1088#1077#1084#1077#1085#1080' '#1076#1083#1103' '#1074#1099#1087#1086#1083#1085#1077#1085#1080#1103' '#1087#1088#1086#1094#1077#1089#1089#1072' ('#1074' '#1089#1077#1082#1091#1085#1076#1072#1093').'
      WordWrap = True
    end
    object Label2: TLabel
      Left = 28
      Top = 37
      Width = 14
      Height = 13
      Caption = #1054#1090
    end
    object Label4: TLabel
      Left = 9
      Top = 72
      Width = 227
      Height = 26
      Caption = #1042#1074#1077#1076#1080#1090#1077' '#1085#1086#1084#1077#1088' '#1082#1083#1077#1090#1082#1080', '#1089' '#1082#1086#1090#1086#1088#1099#1081' '#1085#1072#1095#1085#1105#1090#1089#1103' '#1087#1088#1086#1094#1077#1089#1089'.'
      WordWrap = True
    end
    object Label5: TLabel
      Left = 36
      Top = 107
      Width = 6
      Height = 13
      Caption = #1061
    end
    object Label6: TLabel
      Left = 156
      Top = 107
      Width = 6
      Height = 13
      Caption = 'Y'
    end
    object Label3: TLabel
      Left = 148
      Top = 37
      Width = 14
      Height = 13
      Caption = #1044#1086
    end
    object Label7: TLabel
      Left = 9
      Top = 141
      Width = 153
      Height = 13
      Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1088#1077#1078#1080#1084' '#1074#1099#1095#1080#1089#1083#1077#1085#1080#1081':'
    end
    object Label8: TLabel
      Left = 9
      Top = 227
      Width = 116
      Height = 29
      AutoSize = False
      Caption = #1055#1083#1086#1090#1085#1086#1089#1090#1100' '#1084#1072#1090#1077#1088#1080#1072#1083#1072' '#1082#1083#1077#1090#1082#1080' ('#1082#1075'/'#1084'3):'
      WordWrap = True
    end
    object Label9: TLabel
      Left = 9
      Top = 262
      Width = 137
      Height = 51
      AutoSize = False
      Caption = #1058#1077#1087#1083#1086#1105#1084#1082#1086#1089#1090#1100' '#1084#1072#1090#1077#1088#1080#1072#1083#1072' '#1082#1083#1077#1090#1082#1080' ('#1044#1078'/('#1082#1075'*'#1050')):'
      WordWrap = True
    end
    object Edit1: TEdit
      Left = 48
      Top = 37
      Width = 65
      Height = 19
      BevelInner = bvLowered
      NumbersOnly = True
      TabOrder = 0
      Text = '0'
    end
    object Edit3: TEdit
      Left = 48
      Top = 104
      Width = 65
      Height = 19
      TabOrder = 1
      Text = '21'
    end
    object Edit4: TEdit
      Left = 168
      Top = 104
      Width = 65
      Height = 19
      TabOrder = 2
      Text = '21'
    end
    object Edit2: TEdit
      Left = 176
      Top = 37
      Width = 65
      Height = 19
      BevelInner = bvLowered
      NumbersOnly = True
      TabOrder = 3
      Text = '10'
    end
    object Button1: TButton
      Left = 9
      Top = 304
      Width = 84
      Height = 25
      Caption = #1042#1099#1095#1080#1089#1083#1080#1090#1100
      TabOrder = 4
      OnClick = Button1Click
    end
    object RadioButton1: TRadioButton
      Left = 9
      Top = 160
      Width = 236
      Height = 17
      Caption = #1050#1074#1072#1079#1080#1083#1080#1085#1077#1081#1085#1072#1103' '#1079#1072#1076#1072#1095#1072' ('#947' =  k'#183'T)'
      Checked = True
      TabOrder = 5
      TabStop = True
      OnClick = RadioButton1Click
    end
    object RadioButton2: TRadioButton
      Left = 9
      Top = 183
      Width = 212
      Height = 38
      Caption = #1057' '#1091#1095#1077#1090#1086#1084' '#1101#1085#1076#1086#1090#1077#1088#1084#1080#1095#1077#1089#1082#1080#1093' '#1101#1092#1092#1077#1082#1090#1086#1074' ('#947' = k'#183'T '#8211' '#945#183'T'#179')'
      TabOrder = 6
      WordWrap = True
    end
    object Button3: TButton
      Left = 99
      Top = 304
      Width = 71
      Height = 25
      Caption = #1055#1086#1089#1090#1088#1086#1080#1090#1100
      TabOrder = 7
      OnClick = Button3Click
    end
    object Edit5: TEdit
      Left = 152
      Top = 237
      Width = 100
      Height = 19
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 8
      Text = '1500'
    end
    object Edit6: TEdit
      Left = 152
      Top = 277
      Width = 98
      Height = 19
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 9
      Text = '1000'
    end
    object Button4: TButton
      Left = 176
      Top = 304
      Width = 97
      Height = 25
      Caption = #1054#1090#1082#1088#1099#1090#1100' '#1092#1072#1081#1083
      TabOrder = 10
      OnClick = Button4Click
    end
  end
  object Memo1: TMemo
    Left = 298
    Top = 64
    Width = 279
    Height = 289
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssVertical
    TabOrder = 1
  end
  object Panel2: TPanel
    Left = 583
    Top = 235
    Width = 178
    Height = 118
    BevelInner = bvLowered
    Ctl3D = False
    ParentCtl3D = False
    TabOrder = 2
    object Label10: TLabel
      Left = 8
      Top = 21
      Width = 160
      Height = 26
      Caption = #1052#1086#1078#1077#1090#1077' '#1074#1099#1074#1077#1089#1090#1080' '#1088#1077#1079#1091#1083#1100#1090#1072#1090' '#1085#1072' '#1086#1087#1088#1077#1076#1077#1083#1077#1085#1085#1086#1081' '#1089#1077#1082#1091#1085#1076#1077':'
      WordWrap = True
    end
    object Label11: TLabel
      Left = 111
      Top = 80
      Width = 42
      Height = 13
      Caption = #1089#1077#1082#1091#1085#1076#1072
    end
    object Edit7: TEdit
      Left = 8
      Top = 80
      Width = 97
      Height = 19
      Ctl3D = False
      ParentCtl3D = False
      TabOrder = 0
      Text = '-1'
    end
  end
  object Panel3: TPanel
    Left = 298
    Top = 8
    Width = 279
    Height = 50
    BevelInner = bvLowered
    Ctl3D = False
    ParentCtl3D = False
    ParentShowHint = False
    ShowHint = False
    TabOrder = 3
    object ProgressBar1: TProgressBar
      Left = 16
      Top = 14
      Width = 177
      Height = 24
      TabOrder = 0
    end
    object Button2: TButton
      Left = 213
      Top = 13
      Width = 40
      Height = 25
      Caption = 'Clr'
      TabOrder = 1
      OnClick = Button2Click
    end
  end
  object Panel4: TPanel
    Left = 3
    Top = 359
    Width = 390
    Height = 225
    BevelInner = bvLowered
    TabOrder = 4
    object Edit8: TEdit
      Left = 132
      Top = 45
      Width = 141
      Height = 28
      Alignment = taCenter
      AutoSize = False
      TabOrder = 0
      Text = '0'
    end
    object CheckBox1: TCheckBox
      Left = 96
      Top = 22
      Width = 249
      Height = 17
      Caption = #1042#1077#1088#1093#1085#1103#1103' '#1075#1088#1072#1085#1080#1094#1072' '#1090#1077#1087#1083#1086#1080#1079#1086#1083#1080#1088#1086#1074#1072#1085#1072
      TabOrder = 1
      OnClick = CheckBox1Click
    end
    object Edit9: TEdit
      Left = 132
      Top = 72
      Width = 47
      Height = 88
      Alignment = taCenter
      AutoSize = False
      TabOrder = 2
      Text = '0'
    end
    object CheckBox2: TCheckBox
      Left = 277
      Top = 79
      Width = 113
      Height = 44
      Caption = #1055#1088#1072#1074#1072#1103' '#1075#1088#1072#1085#1080#1094#1072' '#1090#1077#1087#1083#1086#1080#1079#1086#1083#1080#1088#1086#1074#1072#1085#1072
      TabOrder = 3
      WordWrap = True
      OnClick = CheckBox2Click
    end
    object CheckBox3: TCheckBox
      Left = 9
      Top = 79
      Width = 117
      Height = 48
      Alignment = taLeftJustify
      BiDiMode = bdLeftToRight
      Caption = #1051#1077#1074#1072#1103' '#1075#1088#1072#1085#1080#1094#1072' '#1090#1077#1087#1083#1086#1080#1079#1086#1083#1080#1088#1086#1074#1072#1085#1072
      ParentBiDiMode = False
      TabOrder = 4
      WordWrap = True
      OnClick = CheckBox3Click
    end
    object Edit10: TEdit
      AlignWithMargins = True
      Left = 226
      Top = 72
      Width = 47
      Height = 96
      Alignment = taCenter
      AutoSize = False
      TabOrder = 5
      Text = '0'
    end
    object Edit11: TEdit
      Left = 132
      Top = 155
      Width = 141
      Height = 30
      Alignment = taCenter
      AutoSize = False
      TabOrder = 6
      Text = '0'
    end
    object CheckBox4: TCheckBox
      Left = 96
      Top = 191
      Width = 201
      Height = 17
      Caption = #1053#1080#1078#1085#1103#1103' '#1075#1088#1072#1085#1080#1094#1072' '#1090#1077#1087#1083#1086#1080#1079#1086#1083#1080#1088#1086#1074#1072#1085#1072
      TabOrder = 7
      OnClick = CheckBox4Click
    end
  end
  object Panel5: TPanel
    Left = 583
    Top = 8
    Width = 178
    Height = 225
    BevelInner = bvLowered
    TabOrder = 5
    object Label12: TLabel
      AlignWithMargins = True
      Left = 24
      Top = 72
      Width = 136
      Height = 13
      Caption = #1047#1072#1076#1072#1081#1090#1077' '#1080#1089#1090#1086#1095#1085#1080#1082#1080' '#1090#1077#1087#1083#1072':'
      WordWrap = True
    end
    object Label13: TLabel
      Left = 24
      Top = 104
      Width = 6
      Height = 13
      Caption = 'x'
    end
    object Label14: TLabel
      Left = 73
      Top = 104
      Width = 6
      Height = 13
      Caption = 'y'
    end
    object Label15: TLabel
      Left = 104
      Top = 104
      Width = 66
      Height = 13
      Caption = #1058#1077#1084#1087#1077#1088#1072#1090#1091#1088#1072
    end
    object Label16: TLabel
      Left = 4
      Top = 16
      Width = 125
      Height = 26
      Caption = #1058#1077#1084#1087#1077#1088#1072#1090#1091#1088#1072' '#1090#1077#1087#1083#1086#1074#1086#1075#1086' '#1080#1084#1087#1091#1083#1100#1089#1072':'
      WordWrap = True
    end
    object Edit12: TEdit
      Left = 16
      Top = 123
      Width = 25
      Height = 21
      TabOrder = 0
      Text = '21'
    end
    object Edit13: TEdit
      Left = 64
      Top = 123
      Width = 25
      Height = 21
      TabOrder = 1
      Text = '21'
    end
    object Edit14: TEdit
      Left = 112
      Top = 123
      Width = 49
      Height = 21
      TabOrder = 2
      Text = '5'
    end
    object Button5: TButton
      Left = 48
      Top = 160
      Width = 75
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      TabOrder = 3
      OnClick = Button5Click
    end
    object Edit15: TEdit
      Left = 72
      Top = 32
      Width = 81
      Height = 21
      TabOrder = 4
      Text = '5'
    end
  end
  object Panel6: TPanel
    Left = 399
    Top = 359
    Width = 362
    Height = 223
    BevelInner = bvLowered
    TabOrder = 6
    object RadioButton3: TRadioButton
      Left = 24
      Top = 16
      Width = 137
      Height = 17
      Caption = #1054#1076#1085#1086#1088#1086#1076#1085#1072#1103' '#1087#1083#1072#1089#1090#1080#1085#1072
      Checked = True
      TabOrder = 0
      TabStop = True
      OnClick = RadioButton3Click
    end
    object RadioButton4: TRadioButton
      Left = 24
      Top = 39
      Width = 145
      Height = 18
      Caption = #1053#1077#1086#1076#1085#1086#1088#1086#1076#1085#1072#1103' '#1087#1083#1072#1089#1090#1080#1085#1072
      TabOrder = 1
      OnClick = RadioButton4Click
    end
    object Panel7: TPanel
      Left = 24
      Top = 63
      Width = 329
      Height = 146
      TabOrder = 2
      Visible = False
      object Label17: TLabel
        Left = 12
        Top = 8
        Width = 276
        Height = 26
        Caption = 
          #1055#1083#1072#1089#1090#1080#1085#1072' '#1073#1091#1076#1077#1090' '#1088#1072#1079#1073#1080#1090#1072' '#1085#1072' 2 '#1088#1072#1074#1085#1099#1077' '#1095#1072#1089#1090#1080'. '#1047#1072#1076#1072#1081#1090#1077' '#1093#1072#1088#1072#1082#1090#1077#1088#1080#1089#1090#1080#1082#1080 +
          ' '#1084#1072#1090#1077#1088#1080#1072#1083#1072' '#1076#1083#1103' '#1074#1090#1086#1088#1086#1081' '#1095#1072#1089#1090#1080'.'
        WordWrap = True
      end
      object Label18: TLabel
        Left = 9
        Top = 93
        Width = 116
        Height = 29
        AutoSize = False
        Caption = #1055#1083#1086#1090#1085#1086#1089#1090#1100' '#1084#1072#1090#1077#1088#1080#1072#1083#1072' '#1082#1083#1077#1090#1082#1080' ('#1082#1075'/'#1084'3):'
        WordWrap = True
      end
      object Label19: TLabel
        Left = 9
        Top = 52
        Width = 137
        Height = 51
        AutoSize = False
        Caption = #1058#1077#1087#1083#1086#1105#1084#1082#1086#1089#1090#1100' '#1084#1072#1090#1077#1088#1080#1072#1083#1072' '#1082#1083#1077#1090#1082#1080' ('#1044#1078'/('#1082#1075'*'#1050')):'
        WordWrap = True
      end
      object Edit16: TEdit
        Left = 200
        Top = 55
        Width = 121
        Height = 21
        TabOrder = 0
        Text = '2000'
      end
      object Edit17: TEdit
        Left = 200
        Top = 101
        Width = 121
        Height = 21
        TabOrder = 1
        Text = '1500'
      end
    end
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 100
    OnTimer = Timer1Timer
    Left = 259
    Top = 200
  end
end
