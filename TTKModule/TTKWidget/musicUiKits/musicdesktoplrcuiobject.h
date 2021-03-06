#ifndef MUSICDESKTOPLRCUIOBJECT_H
#define MUSICDESKTOPLRCUIOBJECT_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QObject>

/*! @brief The namespace of the desktop lrc button style.
 * @author Greedysky <greedysky@163.com>
 */
namespace MusicUIObject
{
    const QString MKGDeskTopPlay = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_play_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_play_hover);}";

    const QString MKGDeskTopPause = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_pause_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_pause_hover);}";

    const QString MKGDeskTopNext = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_next_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_next_hover);}";

    const QString MKGDeskTopPrevious = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_previous_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_previous_hover);}";

    const QString MKGDeskTopSizeDown = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_size-_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_size-_hover);}";

    const QString MKGDeskTopSizeUp = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_size+_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_size+_hover);}";

    const QString MKGDeskTopSetting = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_setting_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_setting_hover);}";

    const QString MKGDeskTopLock = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_lock_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_lock_hover);}";

    const QString MKGDeskTopStyle= " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_style_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_style_hover);}";

    const QString MKGDeskTopHErrorLrc = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_herror_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_herror_hover);}";

    const QString MKGDeskTopHMakeLrc = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_hmake_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_hmake_hover);}";

    const QString MKGDeskTopHSearchLrc = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_hsearch_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_hsearch_hover);}";

    const QString MKGDeskTopHUpdateLrc = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_hupdate_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_hupdate_hover);}";

    const QString MKGDeskTopVErrorLrc = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_verror_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_verror_hover);}";

    const QString MKGDeskTopVMakeLrc = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_vmake_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_vmake_hover);}";

    const QString MKGDeskTopVSearchLrc = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_vsearch_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_vsearch_hover);}";

    const QString MKGDeskTopVUpdateLrc = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_vupdate_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_vupdate_hover);}";

    const QString MKGDeskTopHorizontal = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_horizontal_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_horizontal_hover);}";

    const QString MKGDeskTopVertical = " \
            QToolButton{ border:none; \
            background-image: url(:/desktopTool/btn_vertical_normal);} \
            QToolButton:hover{ background-image: url(:/desktopTool/btn_vertical_hover);}";

}

#endif // MUSICDESKTOPLRCUIOBJECT_H
