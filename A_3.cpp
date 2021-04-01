#include <iostream>
#include <array>
using namespace std;
void even(int* arr, int length) {
	cout << "Cac so chan trong mang la: ";
	for (int i = 0; i < length; i++)
	{
		if (arr[i] % 2 == 0)
			cout << arr[i] << " ";
	}
}
int main()
{
	int arr[10];
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
	{
		cout << "Nhap gia tri cua cua phan tu thu " << i+1 << " : ";
		cin >> arr[i];
	}
	cout << "_____________________________________________" << endl;
	even(arr, length);
	system("pause");
	return 0;
}




