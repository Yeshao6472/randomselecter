# -*- coding: utf-8 -*- 
'''
Yeshao
'''
import wx
import wx.xrc

class MyFrame1 ( wx.Frame ):
	
	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = u"随机抽号器 v3.0 α", pos = wx.DefaultPosition, size = wx.Size( 500,300 ), style = wx.DEFAULT_FRAME_STYLE|wx.TAB_TRAVERSAL )
		
		self.SetSizeHintsSz( wx.DefaultSize, wx.DefaultSize )
		
		bSizer1 = wx.BoxSizer( wx.VERTICAL )
		
		sbSizer2 = wx.StaticBoxSizer( wx.StaticBox( self, wx.ID_ANY, u"设置选项" ), wx.VERTICAL )
		
		self.startbutton = wx.Button( sbSizer2.GetStaticBox(), wx.ID_ANY, u"开始", wx.DefaultPosition, wx.DefaultSize, 0 )
		sbSizer2.Add( self.startbutton, 0, wx.ALL, 5 )
		
		self.stopbutton = wx.Button( sbSizer2.GetStaticBox(), wx.ID_ANY, u"停止", wx.DefaultPosition, wx.DefaultSize, 0 )
		sbSizer2.Add( self.stopbutton, 0, wx.ALL, 5 )
		
		
		bSizer1.Add( sbSizer2, 1, wx.EXPAND, 5 )
		
		bSizer2 = wx.BoxSizer( wx.HORIZONTAL )
		
		self.m_staticText2 = wx.StaticText( self, wx.ID_ANY, u"数字", wx.Point( -1,-1 ), wx.Size( 1000,-1 ), wx.ALIGN_CENTRE )
		self.m_staticText2.Wrap( 3 )
		self.m_staticText2.SetFont( wx.Font( 32, 70, 90, 90, False, wx.EmptyString ) )
		
		bSizer2.Add( self.m_staticText2, 0, wx.ALL, 5 )
		
		
		bSizer1.Add( bSizer2, 1, wx.EXPAND, 5 )
		
		
		self.SetSizer( bSizer1 )
		self.Layout()
		
		self.Centre( wx.BOTH )
		
		# Connect Events
		self.startbutton.Bind( wx.EVT_BUTTON, self.startrandom )
		self.stopbutton.Bind( wx.EVT_BUTTON, self.stoprandom )
	
	def __del__( self ):
		pass
	
	
	# Virtual event handlers, overide them in your derived class
	def startrandom( self, event ):
		event.Skip()
	
	def stoprandom( self, event ):
		event.Skip()
	

app = wx.App()
frm = MyFrame1(None)
frm.Show()
app.MainLoop()
