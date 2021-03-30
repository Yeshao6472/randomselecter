# -*- coding: utf-8 -*- 

import wx
import wx.xrc
import random
import webbrowser

######### Global Settings ###########
randoming = False
random_result = ''

######### GUI Part #########

class MyFrame1 ( wx.Frame ):
	
	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = u"随机抽号器 v3.0 α", pos = wx.DefaultPosition, size = wx.Size( 500,300 ), style = wx.DEFAULT_FRAME_STYLE|wx.TAB_TRAVERSAL )
		
		self.SetSizeHintsSz( wx.Size( 500,300 ), wx.Size( 1000,600 ) )
		self.SetBackgroundColour( wx.SystemSettings.GetColour( wx.SYS_COLOUR_WINDOW ) )
		
		self.menubar = wx.MenuBar( 0 )
		self.menubar.SetForegroundColour( wx.SystemSettings.GetColour( wx.SYS_COLOUR_MENU ) )
		self.menubar.SetBackgroundColour( wx.SystemSettings.GetColour( wx.SYS_COLOUR_MENU ) )
		
		self.menu1 = wx.Menu()
		self.about = wx.MenuItem( self.menu1, wx.ID_ANY, u"关于"+ u"\t" + u"CTRL+A", u"跳转到帮助文档（需要联网）", wx.ITEM_NORMAL )
		self.menu1.AppendItem( self.about )
		
		self.menubar.Append( self.menu1, u"菜单" ) 
		
		self.SetMenuBar( self.menubar )
		
		bSizer3 = wx.BoxSizer( wx.VERTICAL )
		
		gSizer1 = wx.GridSizer( 0, 4, 0, 0 )
		
		self.StartNum = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.Size( -1,-1 ), 0 )
		gSizer1.Add( self.StartNum, 0, wx.ALL, 5 )
		
		self.EndNum = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.EndNum, 0, wx.ALL, 5 )
		
		self.StartButton = wx.Button( self, wx.ID_ANY, u"开始", wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.StartButton, 0, wx.ALL, 5 )
		
		self.StopButton = wx.Button( self, wx.ID_ANY, u"停止", wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.StopButton, 0, wx.ALL, 5 )
		
		self.LoadFromFile = wx.Button( self, wx.ID_ANY, u"从文件加载", wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.LoadFromFile, 0, wx.ALL, 5 )
		
		self.ExitProgram = wx.Button( self, wx.ID_ANY, u"退出", wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.ExitProgram, 0, wx.ALL, 5 )
		
		self.attention = wx.StaticText( self, wx.ID_ANY, u"注意：从文件加载，每行写一个抽取项目。", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.attention.Wrap( -1 )
		gSizer1.Add( self.attention, 0, wx.ALL, 5 )
		
		
		bSizer3.Add( gSizer1, 1, wx.EXPAND, 5 )
		
		self.result = wx.StaticText( self, wx.ID_ANY, u"Number", wx.DefaultPosition, wx.Size( 1000,150 ), wx.ALIGN_CENTRE )
		self.result.Wrap( -1 )
		self.result.SetFont( wx.Font( 32, 70, 90, 90, False, wx.EmptyString ) )
		
		bSizer3.Add( self.result, 0, wx.ALL, 5 )
		
		
		self.SetSizer( bSizer3 )
		self.Layout()
		
		self.Centre( wx.BOTH )
		
		# Connect Events
		self.Bind( wx.EVT_MENU, self.opendoc, id = self.about.GetId() )
		self.StartButton.Bind( wx.EVT_BUTTON, self.startrandom )
		self.StopButton.Bind( wx.EVT_BUTTON, self.stoprandom )
		self.LoadFromFile.Bind( wx.EVT_BUTTON, self.loadfile )
		self.ExitProgram.Bind( wx.EVT_BUTTON, self.exit_program )
	
	def __del__( self ):
		pass
	
	
	# Virtual event handlers, overide them in your derived class
	def opendoc( self, event ):
		webbrowser.open("https://www.kancloud.cn/yeshao/softwares/2213410#_123")
	
	def startrandom( self, event ):
		event.Skip()
	
	def stoprandom( self, event ):
		event.Skip()
	
	def loadfile( self, event ):
		event.Skip()
	
	def exit_program( self, event ):
		event.Skip()
	

######### Main Program ###########
		
app = wx.App()
frm = MyFrame1(None)
frm.Show()
app.MainLoop()
