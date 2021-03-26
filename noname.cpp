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
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("设置选项") ), wxVERTICAL );
	
	startbutton = new wxButton( sbSizer2->GetStaticBox(), wxID_ANY, wxT("开始"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( startbutton, 0, wxALL, 5 );
	
	stopbutton = new wxButton( sbSizer2->GetStaticBox(), wxID_ANY, wxT("停止"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( stopbutton, 0, wxALL, 5 );
	
	
	bSizer1->Add( sbSizer2, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("数字"), wxPoint( -1,-1 ), wxSize( 1000,-1 ), wxALIGN_CENTRE );
	m_staticText2->Wrap( 3 );
	m_staticText2->SetFont( wxFont( 32, 70, 90, 90, false, wxEmptyString ) );
	
	bSizer2->Add( m_staticText2, 0, wxALL, 5 );
	
	
	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	startbutton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::startrandom ), NULL, this );
	stopbutton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::stoprandom ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	startbutton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::startrandom ), NULL, this );
	stopbutton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::stoprandom ), NULL, this );
	
}
