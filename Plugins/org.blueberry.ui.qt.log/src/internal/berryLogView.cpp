/*===================================================================

BlueBerry Platform

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#include "berryLogView.h"

#include "berryQtLogView.h"

#include <QHBoxLayout>

namespace berry {

LogView::LogView()
{

}

void LogView::CreateQtPartControl(QWidget* parent)
{
  auto   layout = new QHBoxLayout(parent);
  layout->setContentsMargins(0,0,0,0);
  auto   logView = new QtLogView(parent);
  layout->addWidget(logView);
}

void LogView::SetFocus()
{

}

}
