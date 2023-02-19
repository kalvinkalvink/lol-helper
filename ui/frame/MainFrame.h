//
// Created by kalvinkalvink on 2/18/2023.
//

#ifndef CLIONWXWIDGET_MAINFRAME_H
#define CLIONWXWIDGET_MAINFRAME_H



#include <wx/string.h>
#include <wx/gdicmn.h>
#include <wx/msw/frame.h>

class MainFrame : public wxFrame{
public:
    MainFrame(const wxString &title, const wxPoint &pos, const wxSize &size);
};


#endif //CLIONWXWIDGET_MAINFRAME_H
