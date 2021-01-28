int kthLargest(int arr[], int size, int k)
{
  int temp;
  for(int i=0;i<size;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      if(arr[i]>arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  int value;
  value=size-k-1;
  return arr[value];
}
