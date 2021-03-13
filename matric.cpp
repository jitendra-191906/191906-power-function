#include <iostream>
using namespace std;
void readmatric(int arr[20][20], int x, int y);
void displaymatric(int arr[20][20], int x, int y);



void readmatric(int arr[20][20], int x, int y)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			cout << "Enter the values in Matrix=";
			cin >> arr[i][j];
		}
	}
}
void displaymatric(int arr[20][20], int x, int y)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int main()
{
	int m, n;
	int a[20][20];
	cout << "Enter no. of rows=";
	cin >> m;                       /*here m is number of rows and n is number of columns in m*n matric*/
	cout << "Enter no. of columns=";
	cin >> n;
	readmatric(a, m, n);/*read matric using this function */
	displaymatric(a, m, n);/*disply matric using this function */
	return 0;
}