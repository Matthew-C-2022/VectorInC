#pragma once


struct DynArray
{
	void** data;
	int* CurPos;
	int size;
	int capacity;
	int SizeOfElement;
};

struct DynArray* DynArrayInit(int SizeOfElement);
void DynArrayPushBack(struct DynArray* Arr, void* Element);
void DynArrayPopBack(struct DynArray* Arr);
void DynArrayResize(struct DynArray* Arr, int NewSize);
void* DynArrayGetElement(struct DynArray* Arr, int Index);
