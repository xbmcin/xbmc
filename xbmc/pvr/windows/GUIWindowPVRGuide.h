#pragma once
/*
 *      Copyright (C) 2012-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include <atomic>
#include <memory>
#include "threads/Event.h"
#include "threads/Thread.h"
#include "pvr/PVRChannelNumberInputHandler.h"
#include "GUIWindowPVRBase.h"

class CSetting;

namespace PVR
{
  class CGUIEPGGridContainer;
  class CPVRRefreshTimelineItemsThread;

  class CGUIWindowPVRGuide : public CGUIWindowPVRBase, public CPVRChannelNumberInputHandler
  {
  public:
    CGUIWindowPVRGuide(bool bRadio);
    virtual ~CGUIWindowPVRGuide(void);

    virtual void OnInitWindow() override;
    virtual void OnDeinitWindow(int nextWindowID) override;
    virtual bool OnMessage(CGUIMessage& message) override;
    virtual bool OnAction(const CAction &action) override;
    virtual void GetContextButtons(int itemNumber, CContextButtons &buttons) override;
    virtual bool OnContextButton(int itemNumber, CONTEXT_BUTTON button) override;
    virtual void UpdateButtons(void) override;
    virtual void Notify(const Observable &obs, const ObservableMessage msg) override;
    virtual void SetInvalid() override;
    bool Update(const std::string &strDirectory, bool updateFilterPath = true) override;

    bool RefreshTimelineItems();

    // CPVRChannelNumberInputHandler implementation
    void OnInputDone() override;

  protected:
    virtual void UpdateSelectedItemPath() override;
    virtual std::string GetDirectoryPath(void) override { return ""; }
    virtual bool GetDirectory(const std::string &strDirectory, CFileItemList &items) override;

    void ClearData() override;

  private:
    void Init();

    CGUIEPGGridContainer* GetGridControl();

    bool SelectPlayingFile(void);

    bool OnContextButtonBegin(CFileItem *item, CONTEXT_BUTTON button);
    bool OnContextButtonEnd(CFileItem *item, CONTEXT_BUTTON button);
    bool OnContextButtonNow(CFileItem *item, CONTEXT_BUTTON button);

    void StartRefreshTimelineItemsThread();
    void StopRefreshTimelineItemsThread();

    std::unique_ptr<CPVRRefreshTimelineItemsThread> m_refreshTimelineItemsThread;
    std::atomic_bool m_bRefreshTimelineItems;

    CPVRChannelGroupPtr m_cachedChannelGroup;
    std::unique_ptr<CFileItemList> m_newTimeline;

    bool m_bChannelSelectionRestored;
  };

  class CPVRRefreshTimelineItemsThread : public CThread
  {
  public:
    CPVRRefreshTimelineItemsThread(CGUIWindowPVRGuide *pGuideWindow);
    virtual ~CPVRRefreshTimelineItemsThread();

    virtual void Process();

    void DoRefresh();
    void Stop();

  private:
    CGUIWindowPVRGuide *m_pGuideWindow;
    CEvent m_ready;
    CEvent m_done;
  };
}
