
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
class NotepadApp: public wxApp
{
public:
    virtual bool OnInit();
};
class MainWindow: public wxFrame
{
public:
    MainWindow(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
    void OnNew(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    wxDECLARE_EVENT_TABLE();
};
enum
{
    ID_New = 1
};
wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
    EVT_MENU(ID_New,   MainWindow::OnNew)
    EVT_MENU(wxID_EXIT,  MainWindow::OnExit)
    EVT_MENU(wxID_ABOUT, MainWindow::OnAbout)
wxEND_EVENT_TABLE()
wxIMPLEMENT_APP(NotepadApp);
