/***************************************************************
 * Name:      nicol234Main.h
 * Purpose:   Defines Application Frame
 * Author:    nicol (nicol@hex.co.za)
 * Created:   2018-09-10
 * Copyright: nicol (hex.co.za)
 * License:
 **************************************************************/

#ifndef NICOL234MAIN_H
#define NICOL234MAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "nicol234App.h"

class nicol234Frame: public wxFrame
{
    public:
        nicol234Frame(wxFrame *frame, const wxString& title);
        ~nicol234Frame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // NICOL234MAIN_H
