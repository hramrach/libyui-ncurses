/****************************************************************************

  Copyright (c) 2000 - 2012 Novell, Inc.
  All Rights Reserved.

  This program is free software; you can redistribute it and/or
  modify it under the terms of version 2 of the GNU General Public License
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.   See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, contact Novell, Inc.

  To contact Novell about this file by physical or electronic mail,
  you may find current contact information at www.novell.com

 ****************************************************************************/



 /////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////                                                                                                     ////
 ////                                                                                                     ////
 ////                                                                                                     ////
 ////   __/\\\\\\_____________/\\\__________/\\\________/\\\___/\\\________/\\\___/\\\\\\\\\\\_           ////
 ////    _\////\\\____________\/\\\_________\///\\\____/\\\/___\/\\\_______\/\\\__\/////\\\///__          ////
 ////     ____\/\\\______/\\\__\/\\\___________\///\\\/\\\/_____\/\\\_______\/\\\______\/\\\_____         ////
 ////      ____\/\\\_____\///___\/\\\_____________\///\\\/_______\/\\\_______\/\\\______\/\\\_____        ////
 ////       ____\/\\\______/\\\__\/\\\\\\\\\_________\/\\\________\/\\\_______\/\\\______\/\\\_____       ////
 ////        ____\/\\\_____\/\\\__\/\\\////\\\________\/\\\________\/\\\_______\/\\\______\/\\\_____      ////
 ////         ____\/\\\_____\/\\\__\/\\\__\/\\\________\/\\\________\//\\\______/\\\_______\/\\\_____     ////
 ////          __/\\\\\\\\\__\/\\\__\/\\\\\\\\\_________\/\\\_________\///\\\\\\\\\/_____/\\\\\\\\\\\_    ////
 ////           _\/////////___\///___\/////////__________\///____________\/////////______\///////////__   ////
 ////                                                                                                     ////
 ////                                                                                                     ////
 ////                 widget abstraction library providing Qt, GTK and ncurses frontends                  ////
 ////                                                                                                     ////
 ////                                   3 UIs for the price of one code                                   ////
 ////                                                                                                     ////
 ////                                      ***  NCurses plugin  ***                                       ////
 ////                                                                                                     ////
 ////                                                                                                     ////
 ////                                                                                                     ////
 ////                                                                              (C) SUSE Linux GmbH    ////
 ////                                                                                                     ////
 ////                                                              libYUI-AsciiArt (C) 2012 Björn Esser   ////
 ////                                                                                                     ////
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*-/

   File:       NCstyle.mono.h

   Author:     Generated by class NCstyle

/-*/

#ifndef NCstyle_mono_h
#define NCstyle_mono_h

#include "NCstyle.h"

inline void NCstyleInit_mono( std::vector<NCstyle::Style> & styleSet )
{
    //=================================================================
    // init global attributes
    //=================================================================
    NCattrset * attrset( &styleSet[NCstyle::DefaultStyle].getAttrGlobal() );
    attrset->setAttr( NCstyle::AppTitle, 0 | A_BOLD );
    attrset->setAttr( NCstyle::AppText, 0 );
    //=================================================================
    // init local attributes
    //=================================================================
    // DefaultStyle
    attrset = &styleSet[NCstyle::DefaultStyle].getAttrLocal();
    attrset->setAttr( NCstyle::DialogBorder, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogTitle, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveBorder, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogActiveTitle, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogText, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogHeadline, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogDisabled, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogLabel, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogData, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogScrl, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActivePlain, 0 );
    attrset->setAttr( NCstyle::DialogActiveLabel, 0 );
    attrset->setAttr( NCstyle::DialogActiveData, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveHint, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveScrl, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogFramePlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogFrameLabel, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogFrameData, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogFrameHint, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogFrameScrl, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveFramePlain, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogActiveFrameLabel, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogActiveFrameData, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveFrameHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveFrameScrl, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListTitle, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListLabel, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListData, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListSelPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListSelLabel, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListSelData, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListSelHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveTitle, 0 );
    attrset->setAttr( NCstyle::ListActivePlain, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListActiveLabel, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListActiveData, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveSelPlain, 0 );
    attrset->setAttr( NCstyle::ListActiveSelLabel, 0 );
    attrset->setAttr( NCstyle::ListActiveSelData, 0 | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveSelHint, 0 | A_BOLD );
    attrset->setAttr( NCstyle::RichTextPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::RichTextTitle, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextLink, 0 );
    attrset->setAttr( NCstyle::RichTextArmedlink, 0 );
    attrset->setAttr( NCstyle::RichTextActiveArmedlink, 0 | A_BOLD );
    attrset->setAttr( NCstyle::RichTextVisitedLink, 0 );
    attrset->setAttr( NCstyle::RichTextB, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextI, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextBI, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextBT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextIT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextBIT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ProgbarCh, 0 | A_BOLD );
    attrset->setAttr( NCstyle::ProgbarBgch, 4194481 );
    attrset->setAttr( NCstyle::TextCursor, 0 | A_REVERSE | A_BOLD );
    // InfoStyle
    attrset = &styleSet[NCstyle::InfoStyle].getAttrLocal();
    attrset->setAttr( NCstyle::DialogBorder, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogTitle, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveBorder, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogActiveTitle, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogText, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogHeadline, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogDisabled, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogLabel, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogData, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogHint, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogScrl, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActivePlain, 0 );
    attrset->setAttr( NCstyle::DialogActiveLabel, 0 );
    attrset->setAttr( NCstyle::DialogActiveData, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveHint, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveScrl, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogFramePlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogFrameLabel, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogFrameData, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogFrameHint, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogFrameScrl, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveFramePlain, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogActiveFrameLabel, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogActiveFrameData, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveFrameHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveFrameScrl, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListTitle, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListLabel, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListData, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListSelPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListSelLabel, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListSelData, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListSelHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveTitle, 0 );
    attrset->setAttr( NCstyle::ListActivePlain, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListActiveLabel, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListActiveData, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveSelPlain, 0 );
    attrset->setAttr( NCstyle::ListActiveSelLabel, 0 );
    attrset->setAttr( NCstyle::ListActiveSelData, 0 | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveSelHint, 0 | A_BOLD );
    attrset->setAttr( NCstyle::RichTextPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::RichTextTitle, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextLink, 0 );
    attrset->setAttr( NCstyle::RichTextArmedlink, 0 );
    attrset->setAttr( NCstyle::RichTextActiveArmedlink, 0 | A_BOLD );
    attrset->setAttr( NCstyle::RichTextVisitedLink, 0 );
    attrset->setAttr( NCstyle::RichTextB, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextI, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextBI, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextBT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextIT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextBIT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ProgbarCh, 0 | A_BOLD );
    attrset->setAttr( NCstyle::ProgbarBgch, 4194481 );
    attrset->setAttr( NCstyle::TextCursor, 0 | A_REVERSE | A_BOLD );
    // WarnStyle
    attrset = &styleSet[NCstyle::WarnStyle].getAttrLocal();
    attrset->setAttr( NCstyle::DialogBorder, 0 );
    attrset->setAttr( NCstyle::DialogTitle, 0 );
    attrset->setAttr( NCstyle::DialogActiveBorder, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveTitle, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogText, 0 );
    attrset->setAttr( NCstyle::DialogHeadline, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogDisabled, 0 );
    attrset->setAttr( NCstyle::DialogPlain, 0 );
    attrset->setAttr( NCstyle::DialogLabel, 0 );
    attrset->setAttr( NCstyle::DialogData, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogHint, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogScrl, 0 );
    attrset->setAttr( NCstyle::DialogActivePlain, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogActiveLabel, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogActiveData, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveScrl, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogFramePlain, 0 );
    attrset->setAttr( NCstyle::DialogFrameLabel, 0 );
    attrset->setAttr( NCstyle::DialogFrameData, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogFrameHint, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogFrameScrl, 0 );
    attrset->setAttr( NCstyle::DialogActiveFramePlain, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveFrameLabel, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveFrameData, 0 );
    attrset->setAttr( NCstyle::DialogActiveFrameHint, 0 );
    attrset->setAttr( NCstyle::DialogActiveFrameScrl, 0 | A_BOLD );
    attrset->setAttr( NCstyle::ListTitle, 0 );
    attrset->setAttr( NCstyle::ListPlain, 0 );
    attrset->setAttr( NCstyle::ListLabel, 0 );
    attrset->setAttr( NCstyle::ListData, 0 | A_BOLD );
    attrset->setAttr( NCstyle::ListHint, 0 );
    attrset->setAttr( NCstyle::ListSelPlain, 0 );
    attrset->setAttr( NCstyle::ListSelLabel, 0 );
    attrset->setAttr( NCstyle::ListSelData, 0 | A_BOLD );
    attrset->setAttr( NCstyle::ListSelHint, 0 );
    attrset->setAttr( NCstyle::ListActiveTitle, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListActivePlain, 0 | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveLabel, 0 | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveData, 0 );
    attrset->setAttr( NCstyle::ListActiveHint, 0 );
    attrset->setAttr( NCstyle::ListActiveSelPlain, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListActiveSelLabel, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListActiveSelData, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveSelHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::RichTextPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::RichTextTitle, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextLink, 0 );
    attrset->setAttr( NCstyle::RichTextArmedlink, 0 );
    attrset->setAttr( NCstyle::RichTextActiveArmedlink, 0 | A_BOLD );
    attrset->setAttr( NCstyle::RichTextVisitedLink, 0 );
    attrset->setAttr( NCstyle::RichTextB, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextI, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextBI, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextBT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextIT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextBIT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ProgbarCh, 0 | A_BOLD );
    attrset->setAttr( NCstyle::ProgbarBgch, 4194481 );
    attrset->setAttr( NCstyle::TextCursor, 0 | A_REVERSE | A_BOLD );
    // PopupStyle
    attrset = &styleSet[NCstyle::PopupStyle].getAttrLocal();
    attrset->setAttr( NCstyle::DialogBorder, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogTitle, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveBorder, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogActiveTitle, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogText, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogHeadline, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogDisabled, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogLabel, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogData, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogHint, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogScrl, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActivePlain, 0 );
    attrset->setAttr( NCstyle::DialogActiveLabel, 0 );
    attrset->setAttr( NCstyle::DialogActiveData, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveHint, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveScrl, 0 | A_BOLD );
    attrset->setAttr( NCstyle::DialogFramePlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogFrameLabel, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogFrameData, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogFrameHint, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogFrameScrl, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveFramePlain, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogActiveFrameLabel, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::DialogActiveFrameData, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveFrameHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::DialogActiveFrameScrl, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListTitle, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListLabel, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListData, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListSelPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListSelLabel, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListSelData, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListSelHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveTitle, 0 );
    attrset->setAttr( NCstyle::ListActivePlain, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListActiveLabel, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ListActiveData, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveHint, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveSelPlain, 0 );
    attrset->setAttr( NCstyle::ListActiveSelLabel, 0 );
    attrset->setAttr( NCstyle::ListActiveSelData, 0 | A_BOLD );
    attrset->setAttr( NCstyle::ListActiveSelHint, 0 | A_BOLD );
    attrset->setAttr( NCstyle::RichTextPlain, 0 | A_REVERSE | A_BOLD );
    attrset->setAttr( NCstyle::RichTextTitle, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextLink, 0 );
    attrset->setAttr( NCstyle::RichTextArmedlink, 0 );
    attrset->setAttr( NCstyle::RichTextActiveArmedlink, 0 | A_BOLD );
    attrset->setAttr( NCstyle::RichTextVisitedLink, 0 );
    attrset->setAttr( NCstyle::RichTextB, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextI, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextBI, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextBT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextIT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::RichTextBIT, 0 | A_REVERSE );
    attrset->setAttr( NCstyle::ProgbarCh, 0 | A_BOLD );
    attrset->setAttr( NCstyle::ProgbarBgch, 4194481 );
    attrset->setAttr( NCstyle::TextCursor, 0 | A_REVERSE | A_BOLD );
}

#endif // NCstyle_mono_h
