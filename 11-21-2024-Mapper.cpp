#pragma once
#include "Doctor.h"
#include "DataManager.h"
ref class Mapper
{
public:
	static array<Doctor^>^ mapdoctor(array<String^>^ rows) {
		array<Doctor^>^ docs = gcnew array<Doctor^>(rows->Length);
			for (int i = 0; i < rows->Length; i++) {
				array<String^>^ temp = rows[i]->Split(',');
				docs[i] = gcnew Doctor();
				docs[i]->name = temp[0];
				docs[i]->phone = temp[1];
				docs[i]->spec = temp[2];
			}
			return docs;
		}
	
};

