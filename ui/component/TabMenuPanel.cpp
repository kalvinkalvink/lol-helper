//
// Created by kalvinkalvink on 2/19/2023.
//
#include <wx/wx.h>
#include "TabMenuPanel.h"

TabMenuPanel::TabMenuPanel() : wxBoxSizer(wxVERTICAL) {}

int TabMenuPanel::tabButtonHeight = 50;
int TabMenuPanel::tabButtonWidth = 100;

TabMenuPanel *TabMenuPanel::build(wxFrame &parentFrame) {
    TabMenuPanel *newTabMenuPanel = new TabMenuPanel();
    wxButton *normalGameTabButton = new wxButton(&parentFrame, wxID_ANY, "Normal Game", wxDefaultPosition,
                                                 wxSize(tabButtonWidth, tabButtonHeight));
    wxButton *elasticRankTabButon = new wxButton(&parentFrame, wxID_ANY, "Elastic Ranking", wxDefaultPosition,
                                                 wxSize(tabButtonWidth, tabButtonHeight));
    wxButton *rankTabButton = new wxButton(&parentFrame, wxID_ANY, "Ranking", wxDefaultPosition,
                                           wxSize(tabButtonWidth, tabButtonHeight));

    newTabMenuPanel->Add(normalGameTabButton, 0, wxEXPAND);
    newTabMenuPanel->Add(elasticRankTabButon, 0, wxEXPAND);
    newTabMenuPanel->Add(rankTabButton, 0, wxEXPAND);
    return newTabMenuPanel;
}
