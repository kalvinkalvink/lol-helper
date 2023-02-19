#include <wx/wx.h>
#include "ui/frame/MainFrame.h"

class MyApp : public wxApp {
public:
    virtual bool OnInit();
};

bool MyApp::OnInit() {
    MainFrame *frame = new MainFrame("League Helper", wxPoint(50,50), wxSize(1000,500));
    frame->Show();
    return true;
}
wxIMPLEMENT_APP(MyApp);
