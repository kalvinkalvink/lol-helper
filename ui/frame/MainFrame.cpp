//
// Created by kalvinkalvink on 2/18/2023.
//
#include <wx/wx.h>
#include "MainFrame.h"
#include "../component/TabMenuPanel.h"

MainFrame::MainFrame(const wxString &title, const wxPoint &pos, const wxSize &size)
        : wxFrame(NULL, wxID_ANY, title, pos, size) {


    TabMenuPanel *tabMenuPanel = TabMenuPanel::build(*this);

    wxPanel *normalGameSettingPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(300, 500));
    wxPanel *elasticRankSettingPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(300, 500));
    wxPanel *rankSettingPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(300, 500));


    wxBoxSizer *mainBoxSizer = new wxBoxSizer(wxHORIZONTAL);


    mainBoxSizer->Add(tabMenuPanel, 1, wxEXPAND | wxRIGHT, 5);
    mainBoxSizer->Add(normalGameSettingPanel, 3, wxEXPAND);
    mainBoxSizer->Detach(normalGameSettingPanel);
    mainBoxSizer->Add(rankSettingPanel);
    this->SetSizerAndFit(mainBoxSizer);
}