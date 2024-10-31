// Data Manager

#pragma once
using namespace System;
using namespace System::Windows::Forms;
ref class DataManager
{
public:
	String^ filePath;
	DataManager(String^ filePath): filePath(filePath)
	{

	}

	void Cancel() {
		Application::Exit();
	}
};

