#include<iostream>
using namespace std;

void Swap(int *DataOne,int *DataTwo)
{
    int Holder;
    Holder=*DataOne;
    *DataOne=*DataTwo;
    *DataTwo=Holder;
}

int SwapMax(int* Arr,int i,int j,int Max)
{
    int MaxIndex;
    for(MaxIndex=i;MaxIndex<j;MaxIndex++)
    {
        if(Arr[MaxIndex]==Max)
        {
            Swap(&Arr[MaxIndex],&Arr[--j]);
        }
    }
    return MaxIndex;
}

int SwapMin(int* Arr,int i,int j,int Min)
{
    int MinIndex;
    for(MinIndex=i;MinIndex<j;MinIndex++)
    {
        if(Arr[MinIndex]==Min)
        {
            if(MinIndex==i)
            {
                break;
            }
            Swap(&Arr[MinIndex],&Arr[i]);
        }
    }
    return MinIndex;
}

int FindMax(int* Arr,int i,int j)
{
    int Max=INT_MIN;
    for(int x=i;x<j;x++)
    {
        if(Arr[x]>Max)
        {
            Max=Arr[x];
        }
    }
    return Max;
}

int FindMin(int* Arr,int i,int j)
{
    int Min=INT_MAX;
    for(int x=i;x<j;x++)
    {
        if(Arr[x]<Min)
        {
            Min=Arr[x];
        }
    }
    return Min;
}

void GenerateRandomNumbers(int* Arr,int Size)
{
    for(int i=0;i<Size;i++)
    {
        Arr[i]=rand()%50+1;
    }
}

void PrintArray(int* Arr,int Size)
{
    for(int i=0;i<Size;i++)
    {
        cout<<Arr[i]<<" ";
    }
}

int main()
{
    int Size=10;
    int Arr[]={9,8,7,6,5,4,3,2,1,0};
    //int Arr[Size];
    //GenerateRandomNumbers(Arr,Size);
    int Max,Min,i,j;
    Max=Min=i=j=0;
    j=Size;
    int Count=0;
    cout<<"\n \xDB Original Array : ";
    PrintArray(Arr,Size);

    while(i!=j)
    {
        // FINDING MAX MIN ELEMENTS
        Max=FindMax(Arr,i,j);
        Min=FindMin(Arr,i,j);

        // FINDING INDICES OF MAX MIN ELEMENTS
        Max=SwapMax(Arr,i,j,Max);
        Min=SwapMin(Arr,i,j,Min);

        // Shrinking Array from front and end
        i++;
        j--;
        Count++;
    }
    cout<<"\n\n \xDB Sorted Array   : ";
    PrintArray(Arr,Size);
    cout<<endl<<endl;
    return 0;
}
