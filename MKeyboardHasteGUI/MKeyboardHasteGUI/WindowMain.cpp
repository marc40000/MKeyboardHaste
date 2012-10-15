#include "StdAfx.h"
#include "WindowMain.h"
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>

namespace MKeyboardHasteGUI
{
	inline BOOL parseDword(const TCHAR * in, DWORD * out)
	{
		TCHAR * end;
		long result = wcstol(in, &end, 10);
		BOOL success = (errno == 0 && end != in);
		if (success)
		{
    		*out = result;
		}
		return success;
	}

	int WindowMain::SetSpeed(const bool enabled, int delay, int repeat)
	{
		if (delay < 1)
		{
			delay = 1;
		}
		else
		if (delay > 1000)
		{
			delay = 1000;
		}

		if (repeat < 1)
		{
			repeat = 1;
		}
		else
		if (repeat > 1000)
		{
			repeat = 1000;
		}

		guibusy = true;

		checkBoxEnabled->Checked = enabled;

		this->delay = delay;
		textBoxDelay->Text = delay.ToString();
		trackBarDelay->Value = delay;

		this->repeat = repeat;
		textBoxRepeat->Text = repeat.ToString();
		trackBarRepeat->Value = repeat;

		guibusy = false;

		if (enabled)
		{
			FILTERKEYS keys = { sizeof(FILTERKEYS) };
			keys.iDelayMSec = delay;
			keys.iRepeatMSec = repeat;
			keys.dwFlags = FKF_FILTERKEYSON|FKF_AVAILABLE;
			if (SystemParametersInfo (SPI_SETFILTERKEYS, 0, (LPVOID) &keys, 0))
			{
				return 0;
			}
			textBoxError->Text = "System call failed.\nUnable to set keyrate.";
			return 1;
		}
		else
		{
			FILTERKEYS keys = { sizeof(FILTERKEYS) };
			if (SystemParametersInfo (SPI_SETFILTERKEYS, 0, (LPVOID) &keys, 0))
			{
				return 0;
			}
			textBoxError->Text = "System call failed.\nUnable to set keyrate.";
			return 1;
		}

	}

	System::Void WindowMain::WindowMain_Load(System::Object^  sender, System::EventArgs^  e)
	{
		guibusy = false;
		SetSpeed(false, 250, 15);
	}

	System::Void WindowMain::checkBoxEnabled_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (guibusy)
		{
			return;
		}
		SetSpeed(checkBoxEnabled->Checked, delay, repeat);
		textBoxTestArea->Focus();
	}

	System::Void WindowMain::trackBarDelay_ValueChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (guibusy)
		{
			return;
		}
		SetSpeed(checkBoxEnabled->Checked, trackBarDelay->Value, repeat);
		textBoxTestArea->Focus();
	}

	System::Void WindowMain::textBoxDelay_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (guibusy)
		{
			return;
		}
		int newdelay;
		if (int::TryParse(textBoxDelay->Text, newdelay))
		{
			SetSpeed(checkBoxEnabled->Checked, newdelay, repeat);
		}
	}

	System::Void WindowMain::trackBarRepeat_ValueChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (guibusy)
		{
			return;
		}
		SetSpeed(checkBoxEnabled->Checked, delay, trackBarRepeat->Value);
		textBoxTestArea->Focus();
	}

	System::Void WindowMain::textBoxRepeat_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (guibusy)
		{
			return;
		}
		int newrepeat;
		if (int::TryParse(textBoxRepeat->Text, newrepeat))
		{
			SetSpeed(checkBoxEnabled->Checked, delay, newrepeat);
		}
	}

	System::Void WindowMain::buttonClear_Click(System::Object^  sender, System::EventArgs^  e)
	{
		textBoxTestArea->Text = "";
		textBoxTestArea->Focus();
	}
}
