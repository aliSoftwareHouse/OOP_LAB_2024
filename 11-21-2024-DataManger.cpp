#pragma once
using namespace System;
using namespace System::IO;
ref class DataManager
{
public:
	void insert(String^ filename, String^ datarow) {
		if (File::Exists(filename)) {
			File::AppendAllText(filename, "\n"+ datarow);
		}
		else {
			File::WriteAllText(filename, datarow);
		}
	}
	array<String^>^ read(String^ filename) {
		array<String^>^ rows = File::ReadAllLines(filename);
		return rows;
	}
};

