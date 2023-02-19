//
// Created by kalvinkalvink on 2/19/2023.
//

#ifndef CLIONWXWIDGET_TABMENUPANEL_H
#define CLIONWXWIDGET_TABMENUPANEL_H


class TabMenuPanel : public wxBoxSizer {
public:
    TabMenuPanel();

    static TabMenuPanel * build(wxFrame &parentFrame);

private:
    static int tabButtonWidth, tabButtonHeight;
};


#endif //CLIONWXWIDGET_TABMENUPANEL_H
