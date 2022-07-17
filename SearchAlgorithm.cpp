#include <iostream>
using namespace std;

void fillArray(int a[], int size, int numberUsed);
int search(int a[], int size, int target);
int MAX_SCORE = 5;

int main()
{
    printf("This program searches \n");
    printf("through an array to find a target you enter\n");
    int target, arr[MAX_SCORE], listSize, result;
    fillArray(arr, MAX_SCORE, listSize);
    char ans;
    do
    {
        printf("Enter the target\n");
        cin >> target;
        result = search(arr, MAX_SCORE, target);
        if (result == -1)
        {
            /* code */
            cout << target << " is not in list" << endl;
        }
        else
        {
            cout << target << " is at index" << result << endl;
            printf("Remember array index index starts from number: 0.\n");
            printf("Do you want to search for another target (Y/N)\n");
            cin >> ans;
        }

    } while ((ans != 'n') && (ans != 'N'));

    return 0;
}
void fillArray(int a[], int size, int numberUsed)
{
    int next;
    int index = 0;
    printf("Enter array element\n");
    cin >> next;
    while ((next >= 0) && (index < size))
    {
        a[index] = next;
        index++;
        printf("Enter next array element\n");
        cin >>
            next;
    }
    numberUsed = index;
}
int search(int a[], int size, int target)
{
    bool found = false;
    int index;
    while ((!found) && (index < size))

        if (target == a[index])

            /* code */
            found = true;

        else

            index++;

    if (found)

        /* code */
        return index;

    else

        /* code */
        return -1;
}