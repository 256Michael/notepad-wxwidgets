#include "notepadapp.hpp"
bool NotepadApp::OnInit()
{
    MainWindow *frame = new MainWindow( "Notepad", wxPoint(50, 50), wxSize(900, 680) );
    frame->Show( true );
    return true;
}
MainWindow::MainWindow(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_New, "&New\tCtrl-N",
                     "Create new file");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuFile, "&File" );
    menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );
    CreateStatusBar();
}
void MainWindow::OnExit(wxCommandEvent& event)
{
    Close( true );
}
void MainWindow::OnAbout(wxCommandEvent& event)
{
    wxMessageBox( "This is a simple texteditor",
                  "About Notepad", wxOK | wxICON_INFORMATION );
}
void MainWindow::OnNew(wxCommandEvent& event)
{
    wxLogMessage("It will create a new file");
}
