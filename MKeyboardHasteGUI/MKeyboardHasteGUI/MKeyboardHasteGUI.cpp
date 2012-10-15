// MKeyboardHasteGUI.cpp : main project file.

#include "stdafx.h"
#include "WindowMain.h"

using namespace MKeyboardHasteGUI;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew WindowMain());
	return 0;
}

