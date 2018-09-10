/***************************************************************
 * Name:      nicol234App.cpp
 * Purpose:   Code for Application Class
 * Author:    nicol (nicol@hex.co.za)
 * Created:   2018-09-10
 * Copyright: nicol (hex.co.za)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "nicol234App.h"
#include "nicol234Main.h"

IMPLEMENT_APP(nicol234App);

bool nicol234App::OnInit()
{
    nicol234Frame* frame = new nicol234Frame(0L, _("wxWidgets Application Template"));
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();
    
    return true;
}
