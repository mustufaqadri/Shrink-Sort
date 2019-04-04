# Shrink-Sort
This sorting algorithm starts from both ends of an array and find max and min elements of that array limited by the loop control variables and terminate when both loop control varibles become equal.

Shrink Sort(Array,Size)
{
  i=ArrayStart
  j=ArrayEnd
  
  REPEAT UNTIL [i != j]:
      Max=FindMax(Array,i,j) // FIND MAX ELEMENT OF ARRAY BETWEEN i and j
      Min=FindMin(Array,i,j) // FIND MIN ELEMENT OF ARRAY BETWEEN i and j
      SwapMax(Array,i,j,Max) // SWAP MAX ELEMENT WITH THE ELEMENT at Index --j (last index of array)
      SwapMin(Array,i,j,Min) // SWAP MIN ELEMENT WITH THE ELEMENT at Index i (first index of array)
      i++;
      j--;
}
