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
	this->SetSizeHints( wxSize( 500,300 ), wxSize( 1000,600 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	
	menubar = new wxMenuBar( 0 );
	menubar->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );
	menubar->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );
	
	menu1 = new wxMenu();
	wxMenuItem* about;
	about = new wxMenuItem( menu1, wxID_ANY, wxString( wxT("关于") ) + wxT('\t') + wxT("CTRL+A"), wxT("跳转到帮助文档（需要联网）"), wxITEM_NORMAL );
	menu1->Append( about );
	
	menubar->Append( menu1, wxT("菜单") ); 
	
	this->SetMenuBar( menubar );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 0, 4, 0, 0 );
	
	StartNum = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	gSizer1->Add( StartNum, 0, wxALL, 5 );
	
	EndNum = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( EndNum, 0, wxALL, 5 );
	
	StartButton = new wxButton( this, wxID_ANY, wxT("开始"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( StartButton, 0, wxALL, 5 );
	
	StopButton = new wxButton( this, wxID_ANY, wxT("停止"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( StopButton, 0, wxALL, 5 );
	
	LoadFromFile = new wxButton( this, wxID_ANY, wxT("从文件加载"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( LoadFromFile, 0, wxALL, 5 );
	
	ExitProgram = new wxButton( this, wxID_ANY, wxT("退出"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( ExitProgram, 0, wxALL, 5 );
	
	attention = new wxStaticText( this, wxID_ANY, wxT("注意：从文件加载，每行写一个抽取项目。"), wxDefaultPosition, wxDefaultSize, 0 );
	attention->Wrap( -1 );
	gSizer1->Add( attention, 0, wxALL, 5 );
	
	
	bSizer3->Add( gSizer1, 1, wxEXPAND, 5 );
	
	result = new wxStaticText( this, wxID_ANY, wxT("Number"), wxDefaultPosition, wxSize( 1000,150 ), wxALIGN_CENTRE );
	result->Wrap( -1 );
	result->SetFont( wxFont( 32, 70, 90, 90, false, wxEmptyString ) );
	
	bSizer3->Add( result, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( about->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MyFrame1::opendoc ) );
	StartButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::startrandom ), NULL, this );
	StopButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::stoprandom ), NULL, this );
	LoadFromFile->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::loadfile ), NULL, this );
	ExitProgram->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::exit_program ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MyFrame1::opendoc ) );
	StartButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::startrandom ), NULL, this );
	StopButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::stoprandom ), NULL, this );
	LoadFromFile->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::loadfile ), NULL, this );
	ExitProgram->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::exit_program ), NULL, this );
	
}
