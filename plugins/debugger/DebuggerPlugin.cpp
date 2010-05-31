#include "DebuggerPlugin.h"
#include "DebuggerWidget.h"

#include "IDEApplication.h"


bool DebuggerPlugin::setup(IDEApplication *app)                                                  
{
	mApp = app;
	mName = tr("Debugger");
	widget = new DebuggerWidget;
	
    app->mainWindow()->utilityTabWidget()->addTab(widget, name());

    /*connect(widget, SIGNAL(openRequested()), this, SLOT(open()));
    connect(widget, SIGNAL(closeRequested()), this, SLOT(close()));
    connect(widget, SIGNAL(readRequested()), this, SLOT(read()));
    connect(widget, SIGNAL(writeRequested(const QByteArray &)), this, SLOT(write(const QByteArray &)));
    */

    return true;
}