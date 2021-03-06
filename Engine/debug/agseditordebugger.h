//=============================================================================
//
// Adventure Game Studio (AGS)
//
// Copyright (C) 1999-2011 Chris Jones and 2011-20xx others
// The full list of copyright holders can be found in the Copyright.txt
// file, which is part of this source code distribution.
//
// The AGS source code is provided under the Artistic License 2.0.
// A copy of this license can be found in the file License.txt and at
// http://www.opensource.org/licenses/artistic-license-2.0.php
//
//=============================================================================
//
//
//
//=============================================================================
#ifndef __AGS_EE_DEBUG__AGSEDITORDEBUGGER_H
#define __AGS_EE_DEBUG__AGSEDITORDEBUGGER_H

#define DBG_NOIFACE       1
#define DBG_NODRAWSPRITES 2
#define DBG_NOOBJECTS     4
#define DBG_NOUPDATE      8
#define DBG_NOSFX      0x10
#define DBG_NOMUSIC    0x20
#define DBG_NOSCRIPT   0x40
#define DBG_DBGSCRIPT  0x80
#define DBG_DEBUGMODE 0x100
#define DBG_REGONLY   0x200
#define DBG_NOVIDEO   0x400

struct IAGSEditorDebugger
{
public:
    virtual bool Initialize() = 0;
    virtual void Shutdown() = 0;
    virtual bool SendMessageToEditor(const char *message) = 0;
    virtual bool IsMessageAvailable() = 0;
    // Message will be allocated on heap with malloc
    virtual char* GetNextMessage() = 0;
};

#endif // __AGS_EE_DEBUG__AGSEDITORDEBUGGER_H
