#include <iostream>
#include <array>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) 
{
	if (r >= l) {
		int mid = l + (r - l) / 2; 
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}
int main(){
	int arr[5], k, temp;
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
	{
		cout << "Nhap gia tri cua cua phan tu thu " << i+1 << " : ";
		cin >> arr[i];
	}
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[i];
			}
		}
	}
	cout << "Nhap so can tim trong mang: ";
	cin >> k;
	cout << "_____________________________________________" << endl;
	int result = binarySearch(arr, 0, length-1, k );
	if (result != -1)
		cout << k << " Xuat hien tai vi tri: " << result;
	else
		cout << "Not found" << endl;
	return 0;
}
