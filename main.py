# -*- coding: utf-8 -*- 
'''
Author: Yeshao
'''
###########################################################################
## Python code generated with wxFormBuilder (version Jun 17 2015)
## http://www.wxformbuilder.org/
##
## PLEASE DO "NOT" EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc

###########################################################################
## Class MyFrame1
###########################################################################

class MyFrame1 ( wx.Frame ):
	
	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = u"随机抽号器 v3.0 α", pos = wx.DefaultPosition, size = wx.Size( 500,300 ), style = wx.DEFAULT_FRAME_STYLE|wx.TAB_TRAVERSAL )
		
		self.SetSizeHintsSz( wx.DefaultSize, wx.DefaultSize )
		
		self.m_menubar1 = wx.MenuBar( 0 )
		self.m_menu1 = wx.Menu()
		self.m_menuItem1 = wx.MenuItem( self.m_menu1, wx.ID_ANY, u"关于"+ u"\t" + u"CTRL+A", wx.EmptyString, wx.ITEM_NORMAL )
		self.m_menu1.AppendItem( self.m_menuItem1 )
		
		self.m_menubar1.Append( self.m_menu1, u"菜单" ) 
		
		self.SetMenuBar( self.m_menubar1 )
		
		bSizer3 = wx.BoxSizer( wx.VERTICAL )
		
		gSizer1 = wx.GridSizer( 0, 4, 0, 0 )
		
		self.m_button3 = wx.Button( self, wx.ID_ANY, u"开始", wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.m_button3, 0, wx.ALL, 5 )
		
		self.m_button4 = wx.Button( self, wx.ID_ANY, u"停止", wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.m_button4, 0, wx.ALL, 5 )
		
		self.m_button5 = wx.Button( self, wx.ID_ANY, u"从文件加载", wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.m_button5, 0, wx.ALL, 5 )
		
		self.m_button6 = wx.Button( self, wx.ID_ANY, u"退出", wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.m_button6, 0, wx.ALL, 5 )
		
		self.m_staticText3 = wx.StaticText( self, wx.ID_ANY, u"注意：从文件加载，每行写一个抽取项目。", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText3.Wrap( -1 )
		gSizer1.Add( self.m_staticText3, 0, wx.ALL, 5 )
		
		
		bSizer3.Add( gSizer1, 1, wx.EXPAND, 5 )
		
		self.m_staticText2 = wx.StaticText( self, wx.ID_ANY, u"Number", wx.DefaultPosition, wx.Size( 1000,150 ), wx.ALIGN_CENTRE )
		self.m_staticText2.Wrap( -1 )
		self.m_staticText2.SetFont( wx.Font( 32, 70, 90, 90, False, wx.EmptyString ) )
		
		bSizer3.Add( self.m_staticText2, 0, wx.ALL, 5 )
		
		
		self.SetSizer( bSizer3 )
		self.Layout()
		
		self.Centre( wx.BOTH )
	
	def __del__( self ):
		pass
	



app = wx.App()
frm = MyFrame1(None)
frm.Show()
app.MainLoop()
