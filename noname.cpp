///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "noname.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_menubar1 = new wxMenuBar( 0 );
	m_menu1 = new wxMenu();
	wxMenuItem* m_menuItem1;
	m_menuItem1 = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("关于") ) + wxT('\t') + wxT("CTRL+A"), wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem1 );
	
	m_menubar1->Append( m_menu1, wxT("菜单") ); 
	
	this->SetMenuBar( m_menubar1 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 0, 4, 0, 0 );
	
	m_button3 = new wxButton( this, wxID_ANY, wxT("开始"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_button3, 0, wxALL, 5 );
	
	m_button4 = new wxButton( this, wxID_ANY, wxT("停止"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_button4, 0, wxALL, 5 );
	
	m_button5 = new wxButton( this, wxID_ANY, wxT("从文件加载"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_button5, 0, wxALL, 5 );
	
	m_button6 = new wxButton( this, wxID_ANY, wxT("退出"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_button6, 0, wxALL, 5 );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("注意：从文件加载，每行写一个抽取项目。"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	gSizer1->Add( m_staticText3, 0, wxALL, 5 );
	
	
	bSizer3->Add( gSizer1, 1, wxEXPAND, 5 );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Number"), wxDefaultPosition, wxSize( 1000,150 ), wxALIGN_CENTRE );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 32, 70, 90, 90, false, wxEmptyString ) );
	
	bSizer3->Add( m_staticText2, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

MyFrame1::~MyFrame1()
{
}
