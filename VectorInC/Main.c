#include <Windows.h>
#include "Vector.h"
struct Vector3
{
	float x;
	float y;
	float z;
};

int main()
{
	struct DynArray* arr = DynArrayInit(sizeof(struct Vector3));
	DynArrayPushBack(arr, &(struct Vector3){ 1.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 2.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 3.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 4.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 5.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 6.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 7.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 8.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 9.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 1.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 1.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 1.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 1.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 1.0f, 2.0f, 3.0f });
	DynArrayPushBack(arr, &(struct Vector3){ 1.0f, 2.0f, 3.0f });
	struct Vector3* a = NULL;

	a = DynArrayGetElement(arr, 1);
	a = DynArrayGetElement(arr, 2);
	a = DynArrayGetElement(arr, 3);
	a = DynArrayGetElement(arr, 4);
	a = DynArrayGetElement(arr, 5);
	a = DynArrayGetElement(arr, 6);
	a = DynArrayGetElement(arr, 7);
	a = DynArrayGetElement(arr, 8);

	DynArrayResize(arr, 5);

	DynArrayPopBack(arr);
	DynArrayPopBack(arr);
	DynArrayPopBack(arr);
	DynArrayPopBack(arr);
	DynArrayPopBack(arr);

	return 0;
}