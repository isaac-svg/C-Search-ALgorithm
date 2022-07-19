#include <iostream>
using namespace std;

void fillArray(int a[], int size, int &numberUsed);
void swapValues(int &v1, int &v2);
void sort(int a[], int numberUsed);
int indexOfSmallest(const int a[], int startIndex, int numberUsed);

int main()
{
    int sampleArray[5], numberUsed;
    fillArray(sampleArray, 5, numberUsed);
    sort(sampleArray, numberUsed);
    printf("In sorted form the array is \n");
    for (int index = 0; index < numberUsed; index++)
    {
        cout << sampleArray[index] << " ";
        cout << endl;
        /* code */
    }
}
void fillArray(int a[], int size, int &numberUsed)
{
    int next, index = 0;
    printf("Enter an array element\n");
    cin >> next;
    while ((next >= 0) && (index < size))
    {
        printf("Enter next element\n");
        cin >> next;
        a[index] = next;
        index++;
    }
    numberUsed = index;
}
void sort(int a[], int numberUsed)
{
    int indexOfNextSmallest;
    for (int index = 0; index < numberUsed - 1; index++)
    {
        indexOfNextSmallest = indexOfSmallest(a, index, numberUsed);
        swapValues(a[index], a[indexOfNextSmallest]);
    }
}
void swapValues(int &v1, int &v2)
{
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
    // v1 = v1 + v2;
    // v2 = v1 - v2;
    // v1 = v1 - v2;
}
int indexOfSmallest(const int a[], int startIndex, int numberUsed)
{
    int min = a[startIndex],
        indexOfmin = startIndex;
    for (int index = startIndex + 1; index < numberUsed; index++)
    {
        if (a[index] < min)
        {
            min = a[index];
            indexOfmin = index;
        }
    }
    return indexOfmin;
}