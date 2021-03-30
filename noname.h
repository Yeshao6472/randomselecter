///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __NONAME_H__
#define __NONAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* menubar;
		wxMenu* menu1;
		wxTextCtrl* StartNum;
		wxTextCtrl* EndNum;
		wxButton* StartButton;
		wxButton* StopButton;
		wxButton* LoadFromFile;
		wxButton* ExitProgram;
		wxStaticText* attention;
		wxStaticText* result;
		
		// Virtual event handlers, overide them in your derived class
		virtual void opendoc( wxCommandEvent& event ) { event.Skip(); }
		virtual void startrandom( wxCommandEvent& event ) { event.Skip(); }
		virtual void stoprandom( wxCommandEvent& event ) { event.Skip(); }
		virtual void loadfile( wxCommandEvent& event ) { event.Skip(); }
		virtual void exit_program( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("随机抽号器 v3.0 α"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MyFrame1();
	
};

#endif //__NONAME_H__
