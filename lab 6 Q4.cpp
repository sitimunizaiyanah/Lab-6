/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #6 Section 4
*/

#include <iostream>
#include<cstdlib>

using namespace std;

const int ROW = 4;
const int COL = 4;
void menu();
void printArray(int [ROW][COL], int, int);
int findmax(int [ROW][COL], int, int);
void changeAbove(int [ROW][COL], int, int);
void changeBelow(int [ROW][COL], int, int);
void swapCol(int [ROW][COL], int);

int main()
{
	int array [ROW][COL];
	cout<<"Please enter the array elements : "<<endl;
	for (int i=0;i<ROW;i++)
	{
		for (int j=0;j<COL;j++)
		{
			cout<<"array["<<i<<","<<j<<"]: ";
			cin>>array[i][j];
			cout<<endl;
		}
	}
	
	menu();
	
	int choice;
	
	cin>>choice;
	
	while(choice != -1){
		
		switch(choice)
		{
			case 0: printArray(array, ROW, COL);
					break;
					
			case 1: cout<<"The maximum value in the primary diagonal is "<<findmax(array, ROW, COL)<<endl<<endl;
					break;
					
			case 2: changeAbove(array, ROW, COL);
					cout<<endl;
					break;
					
			case 3: changeBelow(array, ROW, COL);
					cout<<endl;
					break;
					
			case 4: swapCol(array, COL);
					cout<<endl;
					break;
					
			case -1: break;
			
			default: cout<<"Invalid output, please enter valid choice"<<endl;
		}
		
		menu();
		
		cin>>choice;
	}
	
	cout<<"Thank you for playing"<<endl;
	
	system("pause");
	
	return 0;

}

void menu(){
	
	cout<<"Select your choice"<<endl;
	cout<<"0. To print the array"<<endl;
	cout<<"1. To find the max value in the primary diagonal"<<endl;
	cout<<"2. To change the values ABOVE the primary diagonal to be all Zeros"<<endl;
	cout<<"3. To change the values BELOW the primary diagonal to be all Zeros"<<endl;
	cout<<"4. TO swap the values of the first column with the values of the third column"<<endl;
	cout<<"-1. Exit"<<endl;
}

void printArray(int array [ROW][COL], int ROW, int COL){
	
	for(int i=0;i<ROW;i++)
	{
		for (int j=0;j<COL;j++)
		cout<<array[i][j]<<" ";
		
		cout<<endl;
	}
}

int findmax(int array [ROW][COL], int ROW, int COL){
	
	int max =array[0][0];
		for (int i=1; i<ROW;i++)
		{
			for(int j=1; j<COL; j++)
			{
				if (i == j)
				{
					if(array[i][j] > max)
					max = array[i][j];
				}
			}
		}
		return max;
}

void changeAbove(int array [ROW][COL], int ROW, int COL){
	
	for(int i=0; i< ROW; i++)
	{
		for(int j=0; j<COL; j++)
		{
			if (i<j)
			{
				array[i][j] = 0;
				cout<<array[i][j]<<" ";
			}
			else
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
}

void changeBelow(int array [ROW][COL], int ROW, int COL){
	
	for(int i=0; i< ROW; i++)
	{
		for(int j=0; j<COL; j++)
		{
			if (i>j)
			{
				array[i][j] = 0;
				cout<<array[i][j]<<" ";
			}
			else
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
}

void swapCol(int array [ROW][COL], int COL){
	
	int temp;
	for(int i = 0; i<COL; i++)
	{
		for(int j=0; j<COL; j++)
		{
			if(j == 0)
			{
				temp = array[i][j];
				array[i][j] = array[i][j+2];
				array[i][j+2] = temp;
				cout<<array[i][j]<<" ";
				
			}
			else
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
}


