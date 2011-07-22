/*
 * FryingPan - Amiga CD/DVD Recording Software (User Intnerface and supporting Libraries only)
 * Copyright (C) 2001-2008 Tomasz Wiszkowski Tomasz.Wiszkowski at gmail.com
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */


#ifndef _ENGINE_JOBS_JOBMEDIUMACTION_H_
#define _ENGINE_JOBS_JOBMEDIUMACTION_H_

#include "Job.h"

class JobMediumAction : public Job
{
public:
   enum Action
   {
      Act_QuickErase,
      Act_QuickFormat,
      Act_CompleteErase,
      Act_CompleteFormat,
      Act_Prepare,
      Act_CloseSession,
      Act_CloseDisc,
      Act_CloseTracks,
      Act_RepairDisc,
   };

protected:
   Action                  eAction;

protected:
   void                    closeTracks();
public:
                           JobMediumAction(Globals &glb, iptr drive, Action aciton);
   virtual void            execute();
   virtual uint32	    getProgress();
   virtual const char     *getActionName();
   virtual bool            inhibitDOS();
};

#endif

