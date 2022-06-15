#include<iostream>
using namespace std;

//Function for binary search
int binarySearch(int arr[], int first_index, int last_index, int find)
{
   while(first_index<=last_index)
    {
      int mid = (first_index+last_index)/2;
      if (arr[mid] == find)
      return mid ;
      if (arr[mid] < find)
      first_index=mid+1;
      else
      last_index=mid-1;
   }
   return -1;
}

int main()
{
	int i,j,temp, arr[5];
	int n = sizeof(arr)/ sizeof(arr[0]);
	int k,z,a;
    cout<<"Please enter five (5) numbers" <<endl;
	cout<<"Enter a number you want to find: ";
	cin>>k;
	cout<<"Enter Numbers: ";
	for(z=0; z<n; z++)
        cin>>arr[z];

    cout<<"\nBefore bubble sort: ";
	for(i=0;i<n;i++){
	cout<<" "<<arr[i];
	}

    for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
		  if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
    }

	cout<<"\n\nAfter bubble sort : ";
	for(i=0;i<n;i++)
		cout<<" "<<arr[i];
        cout<<"\n\n";
//Bubble sort end


//Binary search start
   int test_num = k;
   int index = binarySearch (arr, 0, n-1, test_num);
   if(index == -1)
   cout<< test_num <<" is not found in the array.\n";
   else
   cout<<test_num <<" is found in the "<< index <<" index";
return 0;
}
