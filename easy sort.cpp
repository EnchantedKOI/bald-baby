#include<stdio.h>
#include<Windows.h>
int main()
{
	int arr[10]={2,4,6,3,5,1,7,9,8,10};
	int j,k;
	int temp = 0;
	for(k=0;k<9;k++)
	{

		for(j=0;j<9-k;j++)
		{
			if(arr[j] < arr[j+1])
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		}
	}
  for(k=0;k<10;k++)
  {
	printf("%d\n",arr[k]);
  }
  system("pause");
}